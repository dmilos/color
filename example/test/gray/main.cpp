#include <iostream>
#include <fstream>
#include <iomanip>
#include <vector>

using namespace std;
#include "color/color.hpp"

typedef std::vector< ::color::bgr< std::uint8_t  > > image_type;
typedef std::vector< ::color::gray< std::uint8_t  > > gray_image_type;

void load_image( image_type & image )
 {
  std::ifstream ifs( "..\\gray\\image.tga", std::ios_base::binary );
  char header[ 18 ];
  
  ifs.read( header, 18 );

  image.resize( 660 * 360 );

  ifs.read( reinterpret_cast<char *>( image.data() ), 660 * 360 * 3 );
 }

void save_image( std::string const& name, gray_image_type const& image )
 {
  typedef unsigned char targa_header_struct[18];
  extern void targa_make_gray_header( int height, int width, targa_header_struct header );
  targa_header_struct header;

  targa_make_gray_header( 360, 660, header );

  std::ofstream of( name, std::ios_base::binary);
  of.write((const char *)header, 18);
  of.write((const char *)image.data(), image.size() * 1 );
 }

void make_gray_gray( gray_image_type & gray, image_type const& image )
 {
  auto gc = gray.begin();
  for( auto & c : image )
   {
    *gc = c;
    ++gc;
   }
 }

void make_gray_yiq( gray_image_type & gray, image_type const& image )
 {
  auto gc = gray.begin();
  for( auto & c : image )
   {
    gc->set<0>( ::color::yiq< std::uint32_t >( ::color::rgb< std::uint32_t >( c ) )[0] );
    ++gc;
   }
 }

void make_gray_yuv( gray_image_type & gray, image_type const& image )
 {
  auto gc = gray.begin();
  for( auto & c : image )
   {
    gc->set<0>( ::color::yuv< std::uint32_t >( ::color::rgb< std::uint32_t >( c ) )[0] );
    ++gc;
   }
 }
void make_gray_hsl( gray_image_type & gray, image_type const& image )
 {
  auto gc = gray.begin();
  for( auto & c : image )
   {
    gc->set<0>( ::color::hsl< std::uint32_t >( ::color::rgb< std::uint32_t >( c ) )[2] );
    ++gc;
   }
 }

void make_gray_hsv( gray_image_type & gray, image_type const& image )
 {
  auto gc = gray.begin();
  for( auto & c : image )
   {
    gc->set<0>( ::color::hsv< std::uint32_t >( ::color::rgb< std::uint32_t >( c ) )[2] );
    ++gc;
   }
 }

void make_gray_satur_hsv( gray_image_type & gray, image_type const& image )
 {
  auto gc = gray.begin();
  for( auto & c : image )
   {
    auto r = ::color::rgb< std::uint32_t >( c );
    auto h = ::color::hsv< std::uint32_t >( r );
    h.set<1>( 0 );

    gc->set<0>( ::color::rgb< std::uint32_t >( h )[0] );
    ++gc;
   }
 }

void make_gray_satur_hsl( gray_image_type & gray, image_type const& image )
 {
  auto gc = gray.begin();
  for( auto & c : image )
   {
    auto r = ::color::rgb< std::uint32_t >( c );
    auto h = ::color::hsl< std::uint32_t >( r );
    h.set<1>( 0 );

    gc->set<0>( ::color::rgb< std::uint32_t >( h )[0] );
    ++gc;
   }
 }

int mainX( int argc, char const *argv[] )
 {
  image_type image;
  load_image( image );

  gray_image_type gray;
  gray.resize( 660*360 );

  make_gray_gray(      gray, image ); save_image( "gray.tga",      gray );
  make_gray_yiq(       gray, image ); save_image( "yiq-y.tga",     gray );
  make_gray_yuv(       gray, image ); save_image( "yuv-y.tga",     gray );
  make_gray_hsl(       gray, image ); save_image( "hsl-l.tga",     gray );
  make_gray_hsv(       gray, image ); save_image( "hsv-v.tga",     gray );
  make_gray_satur_hsv( gray, image ); save_image( "satur-hsv.tga", gray );
  make_gray_satur_hsl( gray, image ); save_image( "satur-hsl.tga", gray );

  return EXIT_SUCCESS;
 }

