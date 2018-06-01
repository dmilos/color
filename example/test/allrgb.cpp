#include <vector>
#include <fstream>
#include <typeinfo>
#include <string>
#include <iostream>
#include <iomanip>
#include <deque>

#include "color/color.hpp"
#include "./targa.hpp"
#include "./image.hpp"

typedef std::array<  int, 2 > point_type;
typedef std::vector< bool > mask_type;

template < typename color_model >
 double distance( bgr_color_type const& left, bgr_color_type const& right )
  {
   color_model l; l= left;
   color_model r; r= right;
   color_model d; ::color::operation::delta(d,l,r);
   typedef color::trait::bound<typename color_model::category_type > bound_type;
   return sqrt( d[0]*d[0] +  d[1]*d[1]  + d[2]*d[2] )/ sqrt( bound_type::template range<0>()*bound_type::template range<0>() + bound_type::template range<1>()*bound_type::template range<1>() + bound_type::template range<2>()*bound_type::template range<2>() ) ;
  }

template <  >
 double distance< ::color::gray<double > >( bgr_color_type const& left, bgr_color_type const& right )
  {
   ::color::gray<double>  l; l= left;
   ::color::gray<double>  r; r= right;
   ::color::gray<double>  d; ::color::operation::delta(d,l,r);
   return sqrt( d[0]*d[0] );
  }

double distance( bgr_color_type const& left, bgr_color_type const& right )
 {
  double max = 0;
  double m;

  //m = distance<  ::color::cmyk<double > >( left, right );  if( max < m ) max = m;
  m = distance<  ::color::gray<double > >( left, right );  if( max < m ) max = m;
  //m = distance<  ::color::rgb<double >  >( left, right );  if( max < m ) max = m;

  //m = distance<  ::color::hsi<double > >( left, right );  if( max < m ) max = m;
  //m = distance<  ::color::hsl<double > >( left, right );  if( max < m ) max = m;
  //m = distance<  ::color::hsv<double > >( left, right );  if( max < m ) max = m;
  //
  //m = distance<  ::color::YCgCo<double >  >( left, right );  if( max < m ) max = m;
  //m = distance<  ::color::YDbDr<double > >( left, right );  if( max < m ) max = m;
  //m = distance<  ::color::yiq<double > >( left, right );  if( max < m ) max = m;
  //m = distance<  ::color::YPbPr<double >  >( left, right );  if( max < m ) max = m;
  //m = distance<  ::color::yuv<double > >( left, right );  if( max < m ) max = m;

 // m = distance<  ::color::xyz<double > >( left, right );  if( max < m ) max = m;
  //m = distance<  ::color::lab<double > >( left, right );  if( max < m ) max = m;

  return max ;
 }

int g_size = 4096;

void init( bgr_image_type &image, bgr_image_type &palette, mask_type & mask )
 {
  image.resize( g_size * g_size, ::color::constant::black_t{} );
  palette.reserve( g_size * g_size );
  mask.reserve( g_size * g_size );
  for( int r=0; r< 256; r += 1 )
   {
    for( int g=0; g< 256; g += 1 )
     {
      for( int b=0; b< 256; b += 1 )
       {
        palette.push_back( bgr_color_type{ (std::uint8_t)b,(std::uint8_t)g,(std::uint8_t)r} );
        mask.push_back( false );
       }
     }
   }
 }

void initHSL( bgr_image_type &image, int &width, int &height )
 {
  height = 100 * 21;
  width  = 360 * 21;
  ::color::hsi<double> hsl;

  image.resize( height * width, ::color::constant::black_t{} );
  for( int l=0; l <  height; l += 1 )
   {
    for( int h=0; h < width; h += 1 )
     {
      hsl[0]=(360.0*h)/width;
      hsl[1]=100;
      hsl[2]=100.0-(100.0*l)/height;

      ::color::rgb<double> r; r= hsl;
      ::color::fix::overburn( r );

      image[ l*width + h ]= r;
     }
   }
 }

#define VALUEU(x,y,s)    (((x)+(y))*((x)+(y)+1)/2 + (x))
#define VALUED(x,y,s)    ((s)*(s) -  VALUEU((s)-(x)-1,(s)-(y)-1,(s)) - 1 )
#define VALUEx(x,y,s)   ( ( (x)+(y)  )< (s) ? VALUEU(x,y,s) : VALUED(x,y,s) )

void initX( bgr_image_type &image )
 {
  image.reserve(g_size*g_size);
  for( int y=0; y < g_size; ++y )
   {
    for( int x=0; x < g_size; ++x )
     {
      bgr_color_type c;
      c[0] = y/16;
      c[1] = x/16;
      {
       int x1 = (x%16); if( 1 == ((x/16)%2) ) x1 = 15-x1;
       int y1 = (y%16); if( 1 == ((y/16)%2) ) y1 = 15-y1;
       c[2] = VALUEx( (x1), (y1), 16 );
      }
      image.push_back( c );
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


bgr_color_type const& pixel( bgr_image_type const& image, point_type const& point )
 {
  return image[ point[1]*g_size + point[0]];
 }

bgr_color_type & pixel( bgr_image_type & image, point_type const& point )
 {
  return image[ point[1]*g_size + point[0]];
 }


bool mask_pixel( mask_type const&  image, int x, int y )
 {
  return image[ y*g_size + x];
 }

void mask_set( mask_type & image, point_type const& point, bool const& value )
 {
  image[ point[1]*g_size + point[0] ] = value;
 }

bool search( point_type &point, bgr_image_type const& palette, mask_type const& mask, bgr_image_type const& neighborhood )
 {
  bool have = false;
  double minimal = 100000;
  for( int y=0; y < g_size; ++y )
   {
    for( int x=0; x < g_size; ++x )
     {
      if( true == mask_pixel( mask, x, y ) )
       {
        continue;
       }

      auto const& candidate = pixel( palette, x, y );

      double max = 0;
      for( auto const& n: neighborhood )
       {
        auto m = distance( candidate, n );
        if( max < m )
         {
          max = m;
         }
       }

      if( max < minimal )
       {
        have  = true;
        point[0] = x;
        point[1] = y;
        minimal = max;
       }
    }
  }
  return have;
 }

void push( std::deque< point_type > &d, bgr_image_type const& image, point_type const& point )
 {
  if( point[0] < 0 ) return;
  if( point[1] < 0 ) return;
  if( g_size <= point[0] ) return;
  if( g_size <= point[1] ) return;
  if( ( 0 == point[0] ) && ( 0 ==point[1] ) ) return;

  if( ::color::constant::black_t{} != pixel( image, point ) )
   {
    return;
   }

  d.push_back( point );
 }

void neighborhood( std::vector< bgr_color_type > &n, bgr_image_type const&image, point_type const& point )
 {
  if( point[0] < 0 ) return;
  if( point[1] < 0 ) return;
  if( g_size <= point[0] ) return;
  if( g_size <= point[1] ) return;
  if( ( 0 == point[0] ) && ( 0 ==point[1] ) )
   {
    n.push_back( pixel( image, point ) );
    return;
   }

  if( ::color::constant::black_t{} == pixel( image, point ) )
   {
    return;
   }
  n.push_back( pixel( image, point ) );
 }

void calc()
 {
  bgr_image_type image, palette;
  std::vector<bgr_color_type> hood;

  std::deque< point_type > deque;
  mask_type mask;
   point_type best, point;

  init( image, palette, mask ); save_image24( "allrgb_palette.tga",  palette, g_size, g_size );

  std::sort( palette.begin(), palette.end(), []( bgr_color_type const& left, bgr_color_type const& right )->bool
   {
    typedef ::color::hsi<double> color_t;
    color_t  l; l= left;
    color_t  r; r= right;
    if( l < r ) return true;

    //if( l[1] < r[1] ) return true;
    //if( l[1] == r[1] ) if( l[0] < r[0] ) return true;
    //if( l[2] < r[2] ) return true;
    return false;
   }) ;

  //std::for_each( palette.begin(), palette.end(), []( bgr_color_type & c )-> void
  // {
  //  ::color::gray<double> g; g = c;
  //  c = g;
  // } );

  save_image24(  "allrgb_finale-gray_luminance_compress.tga", palette, g_size, g_size );
  return;

  mask_set( mask, {0,0}, true );
  pixel( image, {0,0} ) = ::color::constant::black_t{};

  deque.push_back( { 0, 1}  );
  deque.push_back( { 1, 0 } );

  while( 0 != deque.size() )
   {
    point = deque.front();
    deque.pop_front();
    if( ::color::constant::black_t{} != pixel( image, point ) )
     {
      continue;
     }

    hood.clear();
    neighborhood( hood, image, { point[0]-1, point[1]-1 } );
    neighborhood( hood, image, { point[0]+0, point[1]-1 } );
    neighborhood( hood, image, { point[0]+1, point[1]-1 } );

    neighborhood( hood, image, { point[0]-1, point[1]   } );

    neighborhood( hood, image, { point[0]+1, point[1]   } );

    neighborhood( hood, image, { point[0]-1, point[1]+1 } );
    neighborhood( hood, image, { point[0]+0, point[1]+1 } );
    neighborhood( hood, image, { point[0]+1, point[1]+1 } );

    if( false == search( best, palette, mask, hood ) )
     {
      continue;
     }

    mask_set( mask, best, true );
    pixel( image, point ) = pixel( palette, best );

    push( deque, image, { point[0]-1, point[1]-1 } );
    push( deque, image, { point[0]+0, point[1]-1 } );
    push( deque, image, { point[0]+1, point[1]-1 } );

    push( deque, image, { point[0]-1, point[1]   } );

    push( deque, image, { point[0]+1, point[1]   } );

    push( deque, image, { point[0]-1, point[1]+1 } );
    push( deque, image, { point[0]+0, point[1]+1 } );
    push( deque, image, { point[0]+1, point[1]+1 } );

    save_image24(  "allrgb_finale.tga", image, g_size, g_size );
   }

  save_image24(  "allrgb_finaleA.tga", image, g_size, g_size );
 }

int mainX( int argc, char const *argv[] )
 {
  bgr_image_type image;
  int width;
  int height;
  initHSL( image, width, height );
  save_image24(  "hsl.tga", image, width, height );

  //calc();
  return 0;
 }

void make_red( bgr_image_type &image, int const& width, int const& pos_x, int const& pos_y, int const& len_x, int const& len_y )
 {
  for( int y = pos_y; y < pos_y + len_y; y++ )
   for( int x = pos_x; x < pos_x + len_x/2; x++ )
     {
      image[ y*width + x ][0] = 0;
      image[ y*width + x ][1] = 0;
      image[ y*width + x ][2] = std::uint8_t( 255 * ( (x-pos_x) )/double( len_x/2-1 ) );
     }

  for( int y = pos_y; y < pos_y + len_y; y++ )
   for( int x = pos_x+len_x/2; x < pos_x + len_x; x++ )
     {
      image[ y*width + x ][0] = std::uint8_t( 255 * ( (x-(pos_x+len_x/2) )/double( len_x/2-1 ) ) );
      image[ y*width + x ][1] = std::uint8_t( 255 * ( (x-(pos_x+len_x/2) )/double( len_x/2-1 ) ) );
      image[ y*width + x ][2] = std::uint8_t( 255 );
     }
 }

void make_green( bgr_image_type &image, int const& width, int const& pos_x, int const& pos_y, int const& len_x, int const& len_y )
 {
  for( int y = pos_y; y < pos_y + len_y; y++ )
   for( int x = pos_x; x < pos_x + len_x/2; x++ )
     {
      image[ y*width + x ][0] = 0;
      image[ y*width + x ][1] = (unsigned const)( 255 * ( (x-pos_x) )/double( len_x/2-1 ) );
      image[ y*width + x ][2] = 0;
     }

  for( int y = pos_y; y < pos_y + len_y; y++ )
   for( int x = pos_x+len_x/2; x < pos_x + len_x; x++ )
     {
      image[ y*width + x ][0] = std::uint8_t( 255 * ( (x-(pos_x+len_x/2) )/double( len_x/2-1 ) ) );
      image[ y*width + x ][1] = std::uint8_t( 255 );
      image[ y*width + x ][2] = std::uint8_t( 255 * ( (x-(pos_x+len_x/2) )/double( len_x/2-1 ) ) );
     }
 }

void make_blue( bgr_image_type &image, int const& width, int const& pos_x, int const& pos_y, int const& len_x, int const& len_y )
 {
  for( int y = pos_y; y < pos_y + len_y; y++ )
   for( int x = pos_x; x < pos_x + len_x/2; x++ )
     {
      image[ y*width + x ][0] = std::uint8_t( 255 * ( (x-pos_x) )/double( len_x/2-1 ) );
      image[ y*width + x ][1] = 0;
      image[ y*width + x ][2] = 0;
     }

  for( int y = pos_y; y < pos_y + len_y; y++ )
   for( int x = pos_x+len_x/2; x < pos_x + len_x; x++ )
     {
      image[ y*width + x ][0] = 255;
      image[ y*width + x ][1] = std::uint8_t( 255 * ( (x-(pos_x+len_x/2) )/double( len_x/2-1 ) ) );
      image[ y*width + x ][2] = std::uint8_t( 255 * ( (x-(pos_x+len_x/2) )/double( len_x/2-1 ) ) );
     }
 }

void make_cyan( bgr_image_type &image, int const& width, int const& pos_x, int const& pos_y, int const& len_x, int const& len_y )
 {
  for( int y = pos_y; y < pos_y + len_y; y++ )
   for( int x = pos_x; x < pos_x + len_x/2; x++ )
     {
      image[ y*width + x ][0] = std::uint8_t( 255 * ( (x-pos_x) )/double( len_x/2-1 ) );
      image[ y*width + x ][1] = std::uint8_t( 255 * ( (x-pos_x) )/double( len_x/2-1 ) );
      image[ y*width + x ][2] = std::uint8_t( 0 );
     }

  for( int y = pos_y; y < pos_y + len_y; y++ )
   for( int x = pos_x+len_x/2; x < pos_x + len_x; x++ )
     {
      image[ y*width + x ][0] = std::uint8_t( 255 );
      image[ y*width + x ][1] = std::uint8_t( 255 );
      image[ y*width + x ][2] = std::uint8_t( 255 * ( (x-(pos_x+len_x/2) )/double( len_x/2-1 ) ) );
     }
 }

void make_magenta( bgr_image_type &image, int const& width, int const& pos_x, int const& pos_y, int const& len_x, int const& len_y )
 {
  for( int y = pos_y; y < pos_y + len_y; y++ )
   for( int x = pos_x; x < pos_x + len_x/2; x++ )
     {
      image[ y*width + x ][0] = std::uint8_t( 255 * ( (x-pos_x) )/double( len_x/2-1 ) );
      image[ y*width + x ][1] = std::uint8_t( 0 );
      image[ y*width + x ][2] = std::uint8_t( 255 * ( (x-pos_x) )/double( len_x/2-1 ) );
     }

  for( int y = pos_y; y < pos_y + len_y; y++ )
   for( int x = pos_x+len_x/2; x < pos_x + len_x; x++ )
     {
      image[ y*width + x ][0] = std::uint8_t( 255 );
      image[ y*width + x ][1] = std::uint8_t( 255* ( (x-(pos_x+len_x/2) )/double( len_x/2-1 ) ) );
      image[ y*width + x ][2] = std::uint8_t( 255 );
     }
 }

void make_yellow( bgr_image_type &image, int const& width, int const& pos_x, int const& pos_y, int const& len_x, int const& len_y )
 {
  for( int y = pos_y; y < pos_y + len_y; y++ )
   for( int x = pos_x; x < pos_x + len_x/2; x++ )
     {
      image[ y*width + x ][0] = std::uint8_t( 0 );
      image[ y*width + x ][1] = std::uint8_t( 255 * ( (x-pos_x) )/double( len_x/2-1 ) );
      image[ y*width + x ][2] = std::uint8_t( 255 * ( (x-pos_x) )/double( len_x/2-1 ) );
     }

  for( int y = pos_y; y < pos_y + len_y; y++ )
   for( int x = pos_x+len_x/2; x < pos_x + len_x; x++ )
     {
      image[ y*width + x ][0] = std::uint8_t( 255* ( (x-(pos_x+len_x/2) )/double( len_x/2-1 ) ) );
      image[ y*width + x ][1] = std::uint8_t( 255 );
      image[ y*width + x ][2] = std::uint8_t( 255 );
     }
 }

void make_black( bgr_image_type &image, int const& width, int const& pos_x, int const& pos_y, int const& len_x, int const& len_y )
 {
  for( int y = pos_y; y < pos_y + len_y; y++ )
   for( int x = pos_x; x < pos_x + len_x; x++ )
     {
      image[ y*width + x ][0] = 0; image[ y*width + x ][1] = 0; image[ y*width + x ][2] = 0;
     }
 }

void make_white( bgr_image_type &image, int const& width, int const& pos_x, int const& pos_y, int const& len_x, int const& len_y )
 {
  for( int y = pos_y; y < pos_y + len_y; y++ )
   for( int x = pos_x; x < pos_x + len_x; x++ )
     {
      image[ y*width + x ][0] = 255; image[ y*width + x ][1] = 255; image[ y*width + x ][2] = 255;
     }
 }

void make_gray( bgr_image_type &image, int const& width, int const& pos_x, int const& pos_y, int const& len_x, int const& len_y )
 {
  for( int y = pos_y; y < pos_y + len_y; y++ )
   for( int x = pos_x; x < pos_x + len_x; x++ )
     {
      image[ y*width + x ][0] = image[ y*width + x ][1] = image[ y*width + x ][2] = std::uint8_t( 255 * ( (x-pos_x) )/double( len_x - 1 ) );
     }
 }

int main( int argc, char const *argv[] )
 {
  bgr_image_type image;
  int width;
  int height;
  
  if( false == load_image( image, width, height, "../data/color-reper.tga" ) )
   {
    std::cout << "Can not load" <<  "../data/color-reper.tga" << std::endl;
    return 0;
   }

  make_red(     image, width,  25, 24 + 0*160, width-50, 140 );
  make_green(   image, width,  25, 24 + 1*160, width-50, 140 );
  make_blue(    image, width,  25, 24 + 2*160, width-50, 140 );
  make_cyan(     image, width,  25, 24 + 3*160, width-50, 140 );
  make_magenta(     image, width,  25, 24 + 4*160, width-50, 140 );
  make_yellow(     image, width,  25, 24 + 5*160, width-50, 140 );
  make_gray(    image, width,  25, 24 + 6*160, width-50, 140 );
  make_white(   image, width,  25, 24 + 7*160, width-50, 140 );
  make_black(   image, width,  25, 24 + 8*160, width-50, 140 );

  save_image24(  "aaaaa.tga", image, width, height );
 }

