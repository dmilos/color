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
  gray_image_type right_black   ; right_black  .resize( width * height );
  gray_image_type right_white   ; right_white  .resize( width * height );

  std::uint64_t equal = 0;
  for(int y=0; y< height; y++)
   for(int x=0; x< width; x++)
    {
     right_red    [ y*width+x ][ 0 ] = ::color::get::red<    ::color::get::constant::rgb::red::hsl_star_entity    >( left_data[ y*width+x ] );
     right_green  [ y*width+x ][ 0 ] = ::color::get::green<  ::color::get::constant::rgb::green::hsl_star_entity  >( left_data[ y*width+x ] );
     right_blue   [ y*width+x ][ 0 ] = ::color::get::blue<   ::color::get::constant::rgb::blue::hsl_star_entity   >( left_data[ y*width+x ] );
     right_cyan   [ y*width+x ][ 0 ] = ::color::get::cyan<     ::color::get::constant::rgb::cyan::hsl_star_entity   >( left_data[ y*width+x ] );
     right_yellow [ y*width+x ][ 0 ] = ::color::get::yellow<   ::color::get::constant::rgb::yellow::hsl_star_entity >( left_data[ y*width+x ] );
     right_magenta[ y*width+x ][ 0 ] = ::color::get::magenta<  ::color::get::constant::rgb::magenta::hsl_star_entity  >( left_data[ y*width+x ] );
     right_black  [ y*width+x ][ 0 ] = ::color::get::black<  ::color::get::constant::rgb::black::hsl_star_entity  >( left_data[ y*width+x ] );
     right_white  [ y*width+x ][ 0 ] = ::color::get::white<  ::color::get::constant::rgb::white::hsl_star_entity  >( left_data[ y*width+x ] );
    }

  save_image_gray( "e-0-cyan.tga", right_cyan   , width, height );
  save_image_gray( "e-1-yellow.tga", right_yellow , width, height );
  save_image_gray( "e-2-magenta.tga", right_magenta, width, height );
  save_image_gray( "e-3-red.tga", right_red    , width, height );
  save_image_gray( "e-4-green.tga", right_green  , width, height );
  save_image_gray( "e-5-blue.tga", right_blue   , width, height );
  save_image_gray( "e-6-black.tga", right_black  , width, height );
  save_image_gray( "e-7-white.tga", right_white  , width, height );

  return EXIT_SUCCESS;
 }

