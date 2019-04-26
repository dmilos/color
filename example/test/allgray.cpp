#include <vector>
#include <fstream>
#include <typeinfo>
#include <string>
#include <iomanip>
#include <random>
#include <algorithm>
#include <chrono>

#include "color/color.hpp"
#include "./targa.hpp"
#include "./image.hpp"


int g_size  = 16;


#define VALUEU(x,y,s)    (((x)+(y))*((x)+(y)+1)/2 + (x))
#define VALUED(x,y,s)    ((s)*(s) -  VALUEU((s)-(x)-1,(s)-(y)-1,(s)) - 1 )
#define VALUEx(x,y,s)   ( ( (x)+(y)  )< (s) ? VALUEU(x,y,s) : VALUED(x,y,s) )

void init( gray_image_type &image )
 {
  image.reserve( g_size * g_size );
  for( int y=0; y< g_size; ++y )
   {
    for( int x=0; x< g_size; ++x )
     {
     image.push_back( gray_color_type{ (unsigned char)VALUEx(x,y,g_size) } );
     }
   }

  //std::shuffle (image.begin()+1, image.end()-1, std::default_random_engine(6));
 }

gray_color_type const& pixel( gray_image_type const& image, int x, int y )
 {
  if( x < 0 ) x = -x;
  if( y < 0 ) y = -y;
  if( g_size <= x ) x = 2*g_size-x-1;
  if( g_size <= y ) y = 2*g_size-y-1;

  return image[ y*g_size + x];
 }

gray_color_type & pixel( gray_image_type & image, int x, int y )
 {
  if( x < 0 ) x = -x;
  if( y < 0 ) y = -y;
  if( g_size <= x ) x = 2*g_size-x-1;
  if( g_size <= y ) y = 2*g_size-y-1;

  return image[ y*g_size + x];
 }


double dispersion( gray_image_type const& image, int x, int y )
 {
  double summae=0;

  gray_color_type const& c = pixel( image, x, y );

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

double dispersion( gray_image_type const&image, gray_color_type const&c, int x, int y )
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


bool fix_pair( gray_image_type &image, int x0, int y0, int x1, int y1 )
 {
  auto d0o = dispersion( image, x0, y0 );
  auto d1o = dispersion( image, x1, y1 );
  auto d0a = dispersion( image, pixel( image, x1, y1 ), x0, y0 );
  auto d1a = dispersion( image, pixel( image, x0, y0 ), x1, y1 );

  if( ( d0a < d0o ) || ( d1a < d1o ) )
   {
    std::swap( pixel( image, x0, y0 ), pixel( image, x1, y1 ) );
    return true;
   }

  return false;
  if( (d0a + d1a) < ( d0o + d1o ) )
   {
    std::swap( pixel( image, x0, y0 ), pixel( image, x1, y1 ) );
    return true;
   }
  return false;
 }

void fix_dispersion( gray_image_type &image )
 {
  for( int y=0; y < g_size; y++ )
   for( int x=0; x < g_size; x++ )
    {
     if( (0==x)&&(0==y) ) continue;
     if( ((g_size-1)==x)&&((g_size-1)==y) ) continue;

     for( int i=0; i< 100; ++i )
      {
       int x1=rand()%(g_size);
       int y1=rand()%(g_size);
       if( (0==x1)&&(0==y1) ) continue;
       if( ((g_size-1)==x1)&&((g_size-1)==y1) ) continue;
       if( true == fix_pair( image, x, y, x1, y1 ) )
        {
         break;
        }
      }
    }
 }

void fix_dispersionX( gray_image_type &image )
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
  gray_image_type image;

  init( image );
  save_image_gray( "allgray_original.tga",  image, g_size, g_size );
  return 0;

  for( int iteration=0; iteration< 100000; ++iteration )
   {
    fix_dispersion( image );

    if( 0 == ( iteration % 1000 ) )
     {
      save_image_gray(  "allgray_"+std::to_string( iteration )+"-end.tga",  image, g_size, g_size );

      // unsigned seed = std::chrono::system_clock::now().time_since_epoch().count();
      //std::shuffle (image.begin()+1, image.end()-1, std::default_random_engine(seed));
     }

   }

   save_image_gray(  "allgray_finale.tga", image, g_size, g_size );

  return 0;
 }
