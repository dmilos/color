#include <iostream>
#include <iomanip>
#include <sstream>

#include <string>
#include <vector>


#include "color/color.hpp"

#include "../targa.hpp"

#include "../image.hpp"


template< typename category_name >
void operation_bias( std::string const& file_name )
 {
  typedef ::color::model<category_name> model_type;
  gray_image_type image( 512*512 );

  for( unsigned y = 0; y < 512; ++y )
   {
    model_type m;
    for( unsigned x = 0; x < 512; ++x )
     {
      ::color::make::gray( m, 100 * y /512.0 );

      ::color::operation::bias( m, x / 512.0 );

      image[ y*512 + x ] = m;
     }
   }

  save_image_gray( file_name, image, 512, 512 );
 }

void test_operation_bias()
 {
  operation_bias< gray_color_type::category_type >( "./operation/bias-gray.tga" );
  operation_bias<  bgr_color_type::category_type >( "./operation/bias-bgr.tga"  );
 }

