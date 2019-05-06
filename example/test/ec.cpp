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

  std::string prefix;
  if( 2 < argc )
   {
    prefix = argv[2];
   }

  std::string name_left  = argv[1];

  if( false == targa_image_load( header_left,   left_data, name_left ) )
   {
    std::cout << "Can not open left: " << name_left.c_str() <<  std::endl;
    return EXIT_FAILURE;
   }

  const int depth_left  = targa_get_depth(  header_left );
  const int width       = targa_get_width(  header_left );
  const int height      = targa_get_height( header_left );

  gray_image_type right_redCh    ; right_redCh  .resize( width * height );
  gray_image_type right_greenCh  ; right_greenCh.resize( width * height );
  gray_image_type right_blueCh   ; right_blueCh .resize( width * height );

  gray_image_type right_redHS    ; right_redHS  .resize( width * height );
  gray_image_type right_greenHS  ; right_greenHS.resize( width * height );
  gray_image_type right_blueHS   ; right_blueHS .resize( width * height );

  gray_image_type right_cyanHS   ; right_cyanHS   .resize( width * height );
  gray_image_type right_yellowHS ; right_yellowHS .resize( width * height );
  gray_image_type right_magentaHS; right_magentaHS.resize( width * height );

  gray_image_type right_chroma   ; right_chroma .resize( width * height );

  gray_image_type right_gray     ; right_gray   .resize( width * height );
  gray_image_type right_black    ; right_black  .resize( width * height );
  gray_image_type right_white    ; right_white  .resize( width * height );

  gray_image_type right_satur    ; right_satur  .resize( width * height );

  //gray_image_type right_rhd   ; right_rhd  .resize( width * height );
  //gray_image_type right_ghd   ; right_ghd  .resize( width * height );
  //gray_image_type right_bhd   ; right_bhd  .resize( width * height );

  std::uint64_t equal = 0;
  for(int y=0; y< height; y++)
   for(int x=0; x< width; x++)
    {
     auto l = left_data[ y*width+x ];

     right_redCh    [ y*width+x ][ 0 ] = ::color::get::red  <   ::color::get::constant::rgb::red::channel_entity      >( l );
     right_greenCh  [ y*width+x ][ 0 ] = ::color::get::green<   ::color::get::constant::rgb::green::channel_entity    >( l );
     right_blueCh   [ y*width+x ][ 0 ] = ::color::get::blue <   ::color::get::constant::rgb::blue::channel_entity     >( l );

     right_redHS    [ y*width+x ][ 0 ] = ::color::get::red<     ::color::get::constant::rgb::red::hsl_star_entity     >( l );
     right_greenHS  [ y*width+x ][ 0 ] = ::color::get::green<   ::color::get::constant::rgb::green::hsl_star_entity   >( l );
     right_blueHS   [ y*width+x ][ 0 ] = ::color::get::blue<    ::color::get::constant::rgb::blue::hsl_star_entity    >( l );

     right_cyanHS   [ y*width+x ][ 0 ] = ::color::get::cyan<     ::color::get::constant::rgb::cyan::hsl_star_entity     >( l );
     right_yellowHS [ y*width+x ][ 0 ] = ::color::get::yellow<   ::color::get::constant::rgb::yellow::hsl_star_entity   >( l );
     right_magentaHS[ y*width+x ][ 0 ] = ::color::get::magenta<  ::color::get::constant::rgb::magenta::hsl_star_entity  >( l );

     right_chroma   [ y*width+x ][ 0 ] = ::color::get::chroma<   ::color::get::constant::rgb::chroma::distance2gray_entity  >( l );

     right_gray     [ y*width+x ][ 0 ] = ::color::get::gray<     ::color::get::constant::rgb::gray::yuv709_entity>( l );
     right_black    [ y*width+x ][ 0 ] = ::color::get::black<    ::color::get::constant::rgb::black::hsl_star_entity >( l );
     right_black    [ y*width+x ][ 0 ] = 255 * pow( right_black   [ y*width+x ][ 0 ]/255.0, 4 );
     right_white    [ y*width+x ][ 0 ] = ::color::get::white<    ::color::get::constant::rgb::white::hsl_star_entity >( l );
     right_white    [ y*width+x ][ 0 ] = 255 * pow( right_white   [ y*width+x ][ 0 ]/255.0, 4 );

     right_satur    [ y*width+x ][ 0 ] = (std::uint8_t)(::color::get::saturation( color::luv<  float >( l ) ) / 9.1 );
   //right_rhd   [ y*width+x ][ 0 ] = (255- 511.0 * ::color::operation::distance< ::color::constant::distance::hue_entity, ::color::get::constant::rgb::hue::hexagon_entity >( bgr_color_type( ::color::constant::red_t{}  ), l ))*(right_satur [ y*width+x ][ 0 ]/255.0 );
   //right_ghd   [ y*width+x ][ 0 ] = (255- 511.0 * ::color::operation::distance< ::color::constant::distance::hue_entity, ::color::get::constant::rgb::hue::hexagon_entity >( bgr_color_type( ::color::constant::green_t{}), l ))*(right_satur [ y*width+x ][ 0 ]/255.0 );
   //right_bhd   [ y*width+x ][ 0 ] = (255- 511.0 * ::color::operation::distance< ::color::constant::distance::hue_entity, ::color::get::constant::rgb::hue::hexagon_entity >( bgr_color_type( ::color::constant::blue_t{} ), l ))*(right_satur [ y*width+x ][ 0 ]/255.0 );

    }

  save_image_gray( prefix + "e-0-redCh.tga"     , right_redCh  ,   width, height );
  save_image_gray( prefix + "e-1-greenCh.tga"   , right_greenCh,   width, height );
  save_image_gray( prefix + "e-2-blueCh.tga"    , right_blueCh ,   width, height );
  save_image_gray( prefix + "e-3-redHS.tga"     , right_redHS  ,   width, height );
  save_image_gray( prefix + "e-4-greenHS.tga"   , right_greenHS,   width, height );
  save_image_gray( prefix + "e-5-blueHS.tga"    , right_blueHS ,   width, height );
  save_image_gray( prefix + "e-6-cyanHS.tga"    , right_cyanHS ,   width, height );
  save_image_gray( prefix + "e-7-yellowHS.tga"  , right_yellowHS,  width, height );
  save_image_gray( prefix + "e-8-magentaHS.tga" , right_magentaHS, width, height );
  save_image_gray( prefix + "e-9-chroma.tga"    , right_chroma ,   width, height );
  save_image_gray( prefix + "e-A-gray.tga"      , right_gray   ,   width, height );
  save_image_gray( prefix + "e-B-black.tga"     , right_black  ,   width, height );
  save_image_gray( prefix + "e-C-white.tga"     , right_white  ,   width, height );
  save_image_gray( prefix + "e-D-satur.tga"     , right_satur, width, height );

  //save_image_gray( prefix + "e-E-rhd.tga"   , right_rhd  , width, height );
  //save_image_gray( prefix + "e-F-ghd.tga"   , right_ghd  , width, height );
  //save_image_gray( prefix + "e-G-bhd.tga"   , right_bhd  , width, height );


  return EXIT_SUCCESS;
 }

