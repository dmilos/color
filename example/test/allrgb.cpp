#include <vector>
#include <fstream>
#include <typeinfo>
#include <string>
#include <iomanip>

#include "color/color.hpp"
#include "./targa.hpp"
#include "./image.hpp"



template< typename color_model >
 void
 decompose
  (
    bgr_image_type const& image
   ,std::string const& name
   ,std::size_t const& width, std::size_t const& height
   ,color_model const& fixed = color_model{ ::color::constant::black_t{} }
  )
  {
   bgr_image_type  component;

   for( int channel=0; channel< color_model::size(); ++channel )
    {
     component.clear();
     component.reserve( image.size() );
     for( auto & original : image )
      {
       color_model            other( original );

       for( int sub = 0; sub < color_model::size(); ++sub )
        {
         if( sub != channel )
          {
           other[sub] = fixed[sub];
          }
        }

       bgr_image_type::value_type back( other );
       ::color::fix::overburn( back );
       component.push_back( back );
      }
      save_image24( name+ "-" + std::to_string( channel ) + ".tga", component, width, height );
    }

   return ;
  }

int g_size  = 64;

void init( bgr_image_type &image )
 {
  image.reserve( g_size * g_size );
  for( int r=0; r< 256; r += 16 )
   {
    for( int g=0; g< 256; g += 16 )
     {
      for( int b=0; b< 256; b += 16 )
       {
        image.push_back( bgr_color_type{(std::uint8_t)b,(std::uint8_t)g,(std::uint8_t)r} );
       }
     }
   }
 }

void initX( bgr_image_type &image )
 {
  image.reserve(4096*4096);
  for( int y=0; y < 4096; ++y )
   {
    for( int x=0; x < 4096; ++x )
     {
      bgr_color_type c;
      c[0] = y/16;
      c[1] = x/16;
      c[2] = (x%16) + 16*(y%16);
      image.push_back( c );
     }
  }
 }

void fix_blue( bgr_image_type &image )
 {
  int start=0;

  for( int y=0; y < g_size; y++)
   {
    for( int x=0; x < g_size/2; x++)
     {
      if( image[ y*g_size + x ].get<0>() < 128 )
       {
        continue;
       }

      for( int sub_y=start; sub_y < g_size; sub_y++)
       {
        for( int sub_x=g_size/2; sub_x < g_size; sub_x++ )
         {
          if( 127 < image[ sub_y*g_size + sub_x ].get<0>()  )
           {
            continue;
           }
          std::swap( image[ y*g_size + x  ], image[ sub_y*g_size + sub_x ] );
          start = sub_y;
          goto l_next;
         }
       }
       l_next:;

     }
   }
 }

void sort_blue( bgr_image_type &image )
 {
  for( int row=0; row< g_size; row++)
   {
    sort( image.begin() + g_size*row, image.begin() + g_size*row + g_size, []( bgr_color_type const&l, bgr_color_type const&r )
     {
      return l.get<0>() < r.get<0>();
      if( l.get<0>() != r.get<0>() ) return l.get<0>() < r.get<0>();
      if( l.get<1>() != r.get<1>() ) return l.get<1>() < r.get<1>();
      return l.get<2>() < r.get<2>();
     }  );
   }
 }

void fix_green( bgr_image_type &image )
 {
  int start=g_size*( g_size /2 );

  for( long index=0; index < g_size*( g_size /2 ); index++)
   {
    if( image[ index ].get<1>() < 128 )
     {
      continue;
     }
    for( long sub = start; sub < g_size * g_size ; sub++)
     {
      if( 127 < image[ sub ].get<1>()  )
       {
        continue;
       }
      std::swap( image[index], image[sub] );
      start = sub;
      break;
     }
   }
 }


void sort_green( bgr_image_type &image )
 {
  std::vector< bgr_color_type >spaghetti;
  spaghetti.resize( g_size );
  for( int column=0; column< g_size; column++)
   {
    for( int row=0; row< g_size; row++)
     {
      spaghetti[ row ] = image[ row*g_size + column ];
     }
    sort( spaghetti.begin(), spaghetti.end(), []( bgr_color_type const&l, bgr_color_type const&r )
     {
      return l.get<1>() < r.get<1>();
      if( l.get<1>() != r.get<1>() ) return l.get<1>() < r.get<1>();
      if( l.get<0>() != r.get<0>() ) return l.get<0>() < r.get<0>(); 
      return l.get<2>() < r.get<2>();
     }  );
    for( int row=0; row< g_size; row++)
     {
      image[ row*g_size + column ]=spaghetti[ row ];
     }
   }
 }


void fix_red( bgr_image_type &image )
 {
  int start = 0;
  for( int y = 0; y < g_size; y++ )
   {
    for( int x = 0; x < g_size-y; x++ )
     {
      if( image[ y*g_size + x ].get<2>() < 128 )
       {
        continue;
       }

     for( int sub_y = start; sub_y < g_size; sub_y++ )
      {
       for( int sub_x = g_size-sub_y; sub_x < g_size ; sub_x++ )
        {
         if( 127 < image[ sub_y*g_size + sub_x ].get<2>() )
          {
           continue;
          }
         std::swap( image[ y*g_size + x  ], image[ sub_y*g_size + sub_x ] );
         start = sub_y;
         goto l_next;
        }
      }
      l_next:;
     }
   }
 }

void sort_red( bgr_image_type &image )
 {
  std::vector< bgr_color_type >spaghetti;

  for( int pivot = 0; pivot < g_size; pivot++)
   {
    spaghetti.resize( g_size - pivot );
    for( int diagonal=0; diagonal < g_size-pivot; diagonal ++)
     {
      spaghetti[diagonal] = image[ diagonal*g_size + pivot + diagonal ];
     }

    sort( spaghetti.begin(), spaghetti.end(), []( bgr_color_type const&l, bgr_color_type const&r )
     {
      return l.get<2>() < r.get<2>(); 
      if( l.get<2>() != r.get<2>() ) return l.get<2>() < r.get<2>(); 
      if( l.get<1>() != r.get<1>() ) return l.get<1>() < r.get<1>();
      return l.get<0>() < r.get<0>();
      }  );

    for( int diagonal=0; diagonal < g_size-pivot; diagonal ++)
     {
      image[ diagonal*g_size + pivot + diagonal ] = spaghetti[diagonal];
     }
   }

  for( int pivot = 0; pivot < g_size; pivot++)
   {
    spaghetti.resize( g_size - pivot );
    for( int diagonal=0; diagonal < g_size-pivot; diagonal ++)
     {
      spaghetti[diagonal] = image[ (diagonal+pivot)*g_size + diagonal ];
     }

    sort( spaghetti.begin(), spaghetti.end(), []( bgr_color_type const&l, bgr_color_type const&r )
     {
      return l.get<2>() < r.get<2>(); 
      if( l.get<2>() != r.get<2>() ) return l.get<2>() < r.get<2>(); 
      if( l.get<1>() != r.get<1>() ) return l.get<1>() < r.get<1>();
      return l.get<0>() < r.get<0>();
      }  );

    for( int diagonal=0; diagonal < g_size-pivot; diagonal ++)
     {
      image[ (diagonal+pivot)*g_size + diagonal ] = spaghetti[diagonal];
     }
   }

 }


bgr_color_type const& pixel( bgr_image_type const& image, int x, int y )
 {
  return image[ y*g_size + x];
 }

bgr_color_type & pixel( bgr_image_type & image, int x, int y )
 {
  return image[ y*g_size + x];
 }


double dispersion( bgr_image_type const& image, int x, int y )
 {
  double summae=0;

  bgr_color_type const& c = pixel( image, x, y );

  summae += ::color::operation::distance( c, pixel( image, x-1, y-1 ) );
  summae += ::color::operation::distance( c, pixel( image, x-1, y   ) );
  summae += ::color::operation::distance( c, pixel( image, x-1, y+1 ) );

  summae += ::color::operation::distance( c, pixel( image, x  , y-1 ) );

  summae += ::color::operation::distance( c, pixel( image, x  , y+1 ) );

  summae += ::color::operation::distance( c, pixel( image, x+1, y+1 ) );
  summae += ::color::operation::distance( c, pixel( image, x+1, y   ) );
  summae += ::color::operation::distance( c, pixel( image, x+1, y-1 ) );


  return summae/8;
 }

double dispersion( bgr_image_type const&image, bgr_color_type const&c, int x, int y )
 {
  double summae=0;

  summae += ::color::operation::distance( c, pixel( image, x-1, y-1 ) );
  summae += ::color::operation::distance( c, pixel( image, x-1, y   ) );
  summae += ::color::operation::distance( c, pixel( image, x-1, y+1 ) );

  summae += ::color::operation::distance( c, pixel( image, x  , y-1 ) );

  summae += ::color::operation::distance( c, pixel( image, x  , y+1 ) );
  
  summae += ::color::operation::distance( c, pixel( image, x+1, y-1 ) );
  summae += ::color::operation::distance( c, pixel( image, x+1, y   ) );
  summae += ::color::operation::distance( c, pixel( image, x+1, y+1 ) );

  return summae/8;
 }


bool fix_pair( bgr_image_type &image, int x0, int y0, int x1, int y1 )
 {
  auto d0o = dispersion( image, x0, y0 );
  auto d1o = dispersion( image, x1, y1 );
  auto d0a = dispersion( image, pixel( image, x1, y1 ), x0, y0 );
  auto d1a = dispersion( image, pixel( image, x0, y0 ), x1, y1 );

  if( ( d0a < d0o ) && ( d1a < d1o ) )
   {
    std::swap( pixel( image, x0, y0 ), pixel( image, x1, y1 ) );
    return true;
   }

  return false;
  if( (d0a + d1a) < ( d0o + d1o ) )
   {
    std::swap( pixel( image, x0, y0 ), pixel( image, x1, y1 ) );
   }
 }

void fix_dispersion( bgr_image_type &image )
 {
  for( int y=0; y < g_size; y++ )
   for( int x=0; x < g_size; x++ )
    {
     for( int i=0; i< 100; ++i )
      {
       if( true == fix_pair( image, x, y, rand()%(g_size-2)+1, rand()%(g_size-2)+1 ) ) 
        {
         break;
        }
      }
    }
 }

void fix_dispersionX( bgr_image_type &image )
 {
  for( int y0=0; y0< g_size; y0++ )
   for( int x0=0; x0< g_size; x0++ )
    {
     auto d0o = dispersion( image, x0, y0 );

     for( int y1=0; y1< g_size; y1++ )
      for( int x1=0; x1< g_size; x1++ )
       {
        auto d1o = dispersion( image, x1, y1 );
        auto d0a = dispersion( image, pixel( image, x1, y1 ), x0, y0 );
        auto d1a = dispersion( image, pixel( image, x0, y0 ), x1, y1 );

        if( ( d0a < d0o ) && ( d1a < d1o ) ) //if( (d0a + d1a) < ( d0o + d1o ) )
         {
          std::swap( pixel( image, x0, y0 ), pixel( image, x1, y1 ) );
         }

       }

    }
 }

int main( int argc, char const *argv[] )
 {
  bgr_image_type image;

  initX( image ); save_image24( "allrgb_originalX.tga",  image, 4096, 4096 );
  return 0;
  save_image24( "allrgb_original.tga",  image, g_size, g_size );
  for( int iteration=0; iteration< 1000; ++iteration )
   {
    if( 0 == ( iteration % 10 ) )
     {
      fix_blue( image );  fix_green( image ); 
      fix_blue( image );  fix_green( image ); 
      //fix_red( image );

      //for( int i2 = 0; i2 < 30; ++i2 )
       {
        //fix_blue( image );  //save_image24(  "allrgb_"+std::to_string( iteration )+"-"+std::to_string( i2 )+"-A-sort.tga",  image, g_size, g_size );
        //fix_green( image ); //save_image24(  "allrgb_"+std::to_string( iteration )+"-"+std::to_string( i2 )+"-B-sort.tga",  image, g_size, g_size );
        //fix_red( image );   //save_image24(  "allrgb_"+std::to_string( iteration )+"-"+std::to_string( i2 )+"-C-sort.tga",  image, g_size, g_size );
       }
     }

    //sort_red( image ); //save_image24(  "allrgb_"+std::to_string( iteration )+"-2-sort.tga", image, g_size, g_size );
    sort_blue( image );  //save_image24(  "allrgb_"+std::to_string( iteration )+"-0-sort.tga",  image, g_size, g_size );
    sort_green( image );  //save_image24(  "allrgb_"+std::to_string( iteration )+"-1-sort.tga", image, g_size, g_size );

    for( int i3 = 0; i3 < 100; ++i3 ) 
     {
      fix_dispersion( image );
     }

    if( 0 == ( iteration % 1 ) )
     {
      save_image24(  "allrgb_"+std::to_string( iteration )+"-end.tga",  image, g_size, g_size );
     }

   }

   save_image24(  "allrgb_finale.tga", image, g_size, g_size );
   decompose< ::color::rgb<double>  > ( image ,"allrgb_final_dec", g_size, g_size );

  return 0;
 }