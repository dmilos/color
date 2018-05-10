#include <iostream>
#include <iomanip>

#include "color/color.hpp"

#include "./image.hpp"

int main( int argc, char *argv[] )
 {
  //if( 3 != argc )
  // {
  //  std::cout << "Not enought command line parameters: " << argc <<std::endl;
  //  return EXIT_FAILURE;
  // }

  bgr_image_type  left_data;
  targa_header_struct  header_left;

  std::string name_left  = argv[1];

  if( false == targa_image_load( header_left,   left_data, name_left ) )
   {
    std::cout << "Can not open left: " << name_left.c_str() <<  std::endl;
    return EXIT_FAILURE;
   }

  const int depth_left  = targa_get_depth(  header_left );
  const int width       = targa_get_width(  header_left );
  const int height      = targa_get_height( header_left );

  gray_image_type right_red     ; right_red    .resize( width * height );
  gray_image_type right_green   ; right_green  .resize( width * height );
  gray_image_type right_blue    ; right_blue   .resize( width * height );
  gray_image_type right_cyan    ; right_cyan   .resize( width * height );
  gray_image_type right_yellow  ; right_yellow .resize( width * height );
  gray_image_type right_magenta ; right_magenta.resize( width * height );
  gray_image_type right_satur   ; right_satur  .resize( width * height );
  gray_image_type right_gray    ; right_gray   .resize( width * height );

  std::uint64_t equal = 0;
  for(int y=0; y< height; y++)
   for(int x=0; x< width; x++)
    {
     auto l = left_data[ y*width+x ];

     right_red    [ y*width+x ][ 0 ] = ::color::get::red<      ::color::get::constant::rgb::red::hsl_star_entity      >( l );
     right_green  [ y*width+x ][ 0 ] = ::color::get::green<    ::color::get::constant::rgb::green::hsl_star_entity    >( l );
     right_blue   [ y*width+x ][ 0 ] = ::color::get::blue<     ::color::get::constant::rgb::blue::hsl_star_entity     >( l );
     right_cyan   [ y*width+x ][ 0 ] = ::color::get::cyan<     ::color::get::constant::rgb::cyan::hsl_star_entity     >( l );
     right_yellow [ y*width+x ][ 0 ] = ::color::get::yellow<   ::color::get::constant::rgb::yellow::hsl_star_entity   >( l );
     right_magenta[ y*width+x ][ 0 ] = ::color::get::magenta<  ::color::get::constant::rgb::magenta::hsl_star_entity  >( l );
     right_satur  [ y*width+x ][ 0 ] = 255-(  std::max( { l[0], l[1], l[2] } ) - std::min( { l[0], l[1], l[2] } ) );
     right_gray   [ y*width+x ][ 0 ] = ::color::get::gray<     ::color::get::constant::rgb::gray::yuv709_entity       >( l );
    }

  save_image_gray( "e-0-cyan.tga",    right_cyan   , width, height );
  save_image_gray( "e-1-yellow.tga",  right_yellow , width, height );
  save_image_gray( "e-2-magenta.tga", right_magenta, width, height );
  save_image_gray( "e-3-red.tga",     right_red    , width, height );
  save_image_gray( "e-4-green.tga",   right_green  , width, height );
  save_image_gray( "e-5-blue.tga",    right_blue   , width, height );
  save_image_gray( "e-6-satur.tga",   right_satur  , width, height );
  save_image_gray( "e-7-gray.tga",    right_gray   , width, height );
  return EXIT_SUCCESS;
 }

