#include <iostream>
#include <iomanip>
#include <sstream>

#include <string>
#include <vector>


#include "color/color.hpp"

#include "../targa.hpp"

#include "../image.hpp"


template< typename category_name >
void operation_gain( std::string const& file_name )
 {
  typedef ::color::model<category_name> model_type;
  gray_image_type image( 512*512 );

  for( unsigned y = 0; y < 512; ++y )
   {
    model_type m;
    for( unsigned x = 0; x < 512; ++x )
     {
      ::color::make::gray( m, 100 * y /512.0 );

      ::color::operation::gain( m, x/ 512.0 );

      image[ y*512 + x ] = m;
     }
   }

  save_image_gray( file_name, image, 512, 512 );
 }

void test_operation_gain()
 {
  operation_gain< gray_color_type::category_type >( "./operation/gain-gray.tga" );
  operation_gain<  bgr_color_type::category_type >( "./operation/gain-bgr.tga"  );
 }
