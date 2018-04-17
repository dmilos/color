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
  bgr_image_type right_data;

  targa_header_struct  header_left;
  targa_header_struct  header_right;

  //std::string name_left  = argv[1];
  //std::string name_right = argv[2];


  std::string name_left  = "z:\\work\\code\\cpp\\prj\\github\\color\\work\\example\\test\\data\\Barns_grand_tetons.tga";
  std::string name_right = "z:\\work\\code\\cpp\\prj\\github\\color\\work\\example\\test\\data\\aaaa.tga";

  if( false == targa_image_load( header_left,   left_data, name_left ) )
   {
    std::cout << "Can not open left: " << name_left.c_str() <<  std::endl;
    return EXIT_FAILURE;
   }

  const int depth_left  = targa_get_depth(  header_left ); 
  const int width       = targa_get_width(  header_left ); 
  const int height      = targa_get_height( header_left ); 

  right_data.resize( width * height );

  std::uint64_t equal = 0;
  for(int y=0; y< height; y++)
   for(int x=0; x< width; x++)
    {
     right_data[ y*width+x ][ 2 ] = ::color::get::cyan<     ::color::get::constant::rgb::cyan::hsl_star_entity   >( left_data[ y*width+x ] );
     right_data[ y*width+x ][ 1 ] = ::color::get::yellow<   ::color::get::constant::rgb::yellow::hsl_star_entity >( left_data[ y*width+x ] );
     right_data[ y*width+x ][ 0 ] = ::color::get::magenta<  ::color::get::constant::rgb::magenta::hsl_star_entity  >( left_data[ y*width+x ] );
    }

  save_image24( name_right, right_data, width, height );

  return EXIT_SUCCESS;
 }

