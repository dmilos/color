#include <iostream>
#include <fstream>
#include <iomanip>
#include <vector>
#include <typeinfo>

#include "color/color.hpp"


#include "./targa.hpp"

using namespace std;

typedef ::color::gray< std::uint8_t  > gray_color_type;
typedef ::color::bgr< std::uint8_t  > color_color_type;

typedef std::vector< color_color_type > image_type;
typedef std::vector< gray_color_type > gray_image_type;

void load_image( image_type & image )
 {
  std::ifstream ifs( "..\\data\\Barns_grand_tetons.tga", std::ios_base::binary );
  char header[ 18 ];
  
  ifs.read( header, 18 );

  image.resize( 1600 * 1195 );

  ifs.read( reinterpret_cast<char *>( image.data() ), 1600 * 1195 * 3 );
 }

void save_image( std::string const& name, gray_image_type const& image )
 {
  targa_header_struct header;

  targa_make_gray_header( 1600, 1195, header );

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

void make_gray_yuv601( gray_image_type & gray, image_type const& image )
 {
  auto gc = gray.begin();
  for( auto & c : image )
   {
    gc->set<0>( ::color::yuv< std::uint8_t,  ::color::constant::yuv::BT_601_entity >( c )[0] );
    ++gc;
   }
 }

void make_gray_yuv709( gray_image_type & gray, image_type const& image )
 {
  auto gc = gray.begin();
  for( auto & c : image )
   {
    gc->set<0>( ::color::yuv< std::uint8_t,  ::color::constant::yuv::BT_709_entity >( c )[0] );
    ++gc;
   }
 }

void make_gray_yiq( gray_image_type & gray, image_type const& image )
 {
  auto gc = gray.begin();
  for( auto & c : image )
   {
    gc->set<0>( ::color::yiq< std::uint8_t >( c )[0] );
    ++gc;
   }
 }
void make_gray_hsl( gray_image_type & gray, image_type const& image )
 {
  auto gc = gray.begin();
  for( auto & c : image )
   {
    gc->set<0>( ::color::hsl< std::uint8_t >( c )[2] );
    ++gc;
   }
 }

void make_gray_hsv( gray_image_type & gray, image_type const& image )
 {
  auto gc = gray.begin();
  for( auto & c : image )
   {
    gc->set<0>( ::color::hsv< std::uint8_t >( c )[2] );
    ++gc;
   }
 }

void make_gray_satur_hsv( gray_image_type & gray, image_type const& image )
 {
  auto gc = gray.begin();
  for( auto & c : image )
   {
    auto h = ::color::hsv< std::uint8_t >( c );
    h.set<1>( 0 );

    gc->set<0>( ::color::rgb< std::uint8_t >( h )[0] );
    ++gc;
   }
 }

void make_gray_satur_hsl( gray_image_type & gray, image_type const& image )
 {
  auto gc = gray.begin();
  for( auto & c : image )
   {
    auto h = ::color::hsl< std::uint8_t >( c );
    h.set<1>( 0 );

    gc->set<0>( ::color::rgb< std::uint8_t >( h )[0] );
    ++gc;
   }
 }

void make_gray_gray_hcg( gray_image_type & gray, image_type const& image )
 {
  auto gc = gray.begin();
  for( auto & c : image )
   {
    gc->set<0>( ::color::hcg< std::uint8_t >( c )[2] );
    ++gc;
   }
 }


void make_gray_intens_hsi( gray_image_type & gray, image_type const& image )
 {
  auto gc = gray.begin();
  for( auto & c : image )
   {
    auto h = ::color::hsi< std::uint8_t >( c );
    h.set<1>( 0 );

    gc->set<0>( ::color::rgb< std::uint8_t >( h )[0] );
    ++gc;
   }
 }

void make_gray_satur_YCgCo( gray_image_type & gray, image_type const& image )
 {
  auto gc = gray.begin();
  for( auto & c : image )
   {
    gc->set<0>( ::color::YCgCo< std::uint8_t >( c )[0] );
    ++gc;
   }
 }

int gray_test( int argc, char const *argv[] )
 {
  std::cout << sizeof( gray_color_type )  << " == sizeof (" <<typeid( gray_color_type ).name() << ")" << std::endl;
  std::cout << sizeof( color_color_type )  << " == sizeof (" <<typeid( color_color_type ).name() << ")" << std::endl;

  image_type image;
  load_image( image );

  gray_image_type gray;
  gray.resize( 1600 * 1195 );

  make_gray_gray(      gray, image ); save_image( "./gray/gray.tga",      gray );

  make_gray_yuv601(    gray, image ); save_image( "./gray/yuv601-y.tga",     gray );
  make_gray_yuv709(    gray, image ); save_image( "./gray/yuv709-y.tga",     gray );

  make_gray_yiq(       gray, image ); save_image( "./gray/yiq-y.tga",     gray );
  make_gray_hsl(       gray, image ); save_image( "./gray/hsl-l.tga",     gray );
  make_gray_hsv(       gray, image ); save_image( "./gray/hsv-v.tga",     gray );
  make_gray_satur_hsv( gray, image ); save_image( "./gray/satur-hsv.tga", gray );
  make_gray_satur_hsl( gray, image ); save_image( "./gray/satur-hsl.tga", gray );
  make_gray_gray_hcg(  gray, image ); save_image( "./gray/hcg-gray",      gray );
  make_gray_intens_hsi( gray, image ); save_image( "./gray/satur-hsi.tga", gray );

  make_gray_satur_YCgCo( gray, image ); save_image( "./gray/YCgCo-Y.tga", gray );

  return EXIT_SUCCESS;
 }

