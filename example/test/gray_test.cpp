#include <iostream>
#include <fstream>
#include <iomanip>
#include <vector>
#include <typeinfo>

#include "color/color.hpp"


#include "./targa.hpp"

#include "./image.hpp"

using namespace std;

void make_gray_gray( gray_image_type & gray, bgr_image_type const& image )
 {
  auto gc = gray.begin();
  for( auto & c : image )
   {
    *gc = c;
    ++gc;
   }
 }

void make_gray_yuv601( gray_image_type & gray, bgr_image_type const& image )
 {
  auto gc = gray.begin();
  for( auto & c : image )
   {
    gc->set<0>( ::color::yuv< std::uint8_t,  ::color::constant::yuv::BT_601_entity >( c )[0] );
    ++gc;
   }
 }

void make_gray_yuv709( gray_image_type & gray, bgr_image_type const& image )
 {
  auto gc = gray.begin();
  for( auto & c : image )
   {
    gc->set<0>( ::color::yuv< std::uint8_t,  ::color::constant::yuv::BT_709_entity >( c )[0] );
    ++gc;
   }
 }

void make_gray_yiq( gray_image_type & gray, bgr_image_type const& image )
 {
  auto gc = gray.begin();
  for( auto & c : image )
   {
    gc->set<0>( ::color::yiq< std::uint8_t >( c )[0] );
    ++gc;
   }
 }
void make_gray_hsl( gray_image_type & gray, bgr_image_type const& image )
 {
  auto gc = gray.begin();
  for( auto & c : image )
   {
    gc->set<0>( ::color::hsl< std::uint8_t >( c )[2] );
    ++gc;
   }
 }

void make_gray_hsv( gray_image_type & gray, bgr_image_type const& image )
 {
  auto gc = gray.begin();
  for( auto & c : image )
   {
    gc->set<0>( ::color::hsv< std::uint8_t >( c )[2] );
    ++gc;
   }
 }

void make_gray_satur_hsv( gray_image_type & gray, bgr_image_type const& image )
 {
  auto gc = gray.begin();
  for( auto & c : image )
   {
    gc->set<0>( ::color::hsv< std::uint8_t >( c )[1] );
    ++gc;
   }
 }

void make_gray_satur_hsl( gray_image_type & gray, bgr_image_type const& image )
 {
  auto gc = gray.begin();
  for( auto & c : image )
   {
    gc->set<0>( ::color::hsl< std::uint8_t >( c )[1] );
    ++gc;
   }
 }

void make_gray_intens_hsi( gray_image_type & gray, bgr_image_type const& image )
 {
  auto gc = gray.begin();
  for( auto & c : image )
   {
    gc->set<0>( ::color::hsi< std::uint8_t >( c )[2] );
    ++gc;
   }
 }

void make_gray_satur_YCgCo( gray_image_type & gray, bgr_image_type const& image )
 {
  auto gc = gray.begin();
  for( auto & c : image )
   {
    gc->set<0>( ::color::YCgCo< std::uint8_t >( c )[0] );
    ++gc;
   }
 }

void make_gray_xyz( gray_image_type & gray, bgr_image_type const& image )
 {
  auto gc = gray.begin();
  for( auto & c : image )
   {
    gc->set<0>( ::color::xyz< std::uint8_t >( c )[1] );
    ++gc;
   }
 }

void make_gray_lab( gray_image_type & gray, bgr_image_type const& image )
 {
  auto gc = gray.begin();
  for( auto & c : image )
   {
    gc->set<0>( ::color::lab< std::uint8_t >( c )[0] );
    ++gc;
   }
 }

void make_gray_lms( gray_image_type & gray, bgr_image_type const& image )
 {
  auto gc = gray.begin();
  for( auto & c : image )
   {
    gc->set<0>( ::color::lms< std::uint8_t >( c )[0] );
    ++gc;
   }
 }

void make_gray_luv( gray_image_type & gray, bgr_image_type const& image )
 {
  auto gc = gray.begin();
  for( auto & c : image )
   {
    gc->set<0>( ::color::luv< std::uint8_t >( c )[0] );
    ++gc;
   }
 }

void make_gray_xyy( gray_image_type & gray, bgr_image_type const& image )
 {
  auto gc = gray.begin();
  for( auto & c : image )
   {
    gc->set<0>( ::color::xyy< std::uint8_t >( c )[2] );
    ++gc;
   }
 }

template< ::color::constant::YPbPr::reference_enum reference_number >
 void make_gray_YPbPr( gray_image_type & gray, bgr_image_type const& image )
  {
   auto gc = gray.begin();
   for( auto & c : image )
    {
     gc->template set<0>( ::color::YPbPr< std::uint8_t, reference_number >( c )[0] );
     ++gc;
    }
  }

int gray_test( int argc, char const *argv[] )
 {
  std::cout << sizeof( gray_color_type )  << " == sizeof (" <<typeid( gray_color_type ).name() << ")" << std::endl;
  std::cout << sizeof( bgr_color_type )  << " == sizeof (" <<typeid( bgr_color_type ).name() << ")" << std::endl;

  bgr_image_type image;
  int width;
  int height;
  load_image( image, width, height, "../data/hsi.tga" );

  gray_image_type gray;
  gray.resize( width * height );

  make_gray_gray(      gray,  image ); save_image_gray( "./gray/gray.tga",         gray, width, height );

  make_gray_yuv601(    gray,  image ); save_image_gray( "./gray/yuv601-y.tga",     gray, width, height );
  make_gray_yuv709(    gray,  image ); save_image_gray( "./gray/yuv709-y.tga",     gray, width, height );

  make_gray_yiq(       gray,  image ); save_image_gray( "./gray/yiq-y.tga",        gray, width, height );
  make_gray_hsl(       gray,  image ); save_image_gray( "./gray/hsl-l.tga",        gray, width, height );
  make_gray_hsv(       gray,  image ); save_image_gray( "./gray/hsv-v.tga",        gray, width, height );

  make_gray_satur_hsv(  gray, image ); save_image_gray( "./gray/satur-hsv.tga",    gray, width, height );
  make_gray_satur_hsl(  gray, image ); save_image_gray( "./gray/satur-hsl.tga",    gray, width, height );
  make_gray_intens_hsi( gray, image ); save_image_gray( "./gray/satur-hsi.tga",    gray, width, height );

  make_gray_xyz( gray, image );        save_image_gray( "./gray/xyz-y.tga",        gray, width, height );
  make_gray_lab( gray, image );        save_image_gray( "./gray/lab-l.tga",        gray, width, height );
  
  make_gray_lms( gray, image );        save_image_gray( "./gray/lms-l.tga",        gray, width, height );
  make_gray_luv( gray, image );        save_image_gray( "./gray/luv-l.tga",        gray, width, height );
  make_gray_xyy( gray, image );        save_image_gray( "./gray/xyy-Y.tga",        gray, width, height );

  make_gray_YPbPr<::color::constant::YPbPr::BT_601_entity>(  gray, image );  save_image_gray( "./gray/YPbPr601-y.tga",     gray, width, height );
  make_gray_YPbPr<::color::constant::YPbPr::BT_709_entity>(  gray, image );  save_image_gray( "./gray/YPbPr709-y.tga",     gray, width, height );
  make_gray_YPbPr<::color::constant::YPbPr::BT_2020_entity>( gray, image );  save_image_gray( "./gray/YPbPr2020-y.tga",    gray, width, height );

  //make_gray_lab( gray, image );        save_image_gray( "./gray/lab-L.tga",        gray, width, height );

  return EXIT_SUCCESS;
 }
