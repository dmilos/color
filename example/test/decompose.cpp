#include <iostream>
#include <fstream>
#include <iomanip>
#include <vector>
#include <string>

#include "color/color.hpp"


#include "./targa.hpp"

#include "./image.hpp"

using namespace std;

template< typename color_model >
 void
 decompose
  (
    bgr_image_type const& image
   ,std::string const& name
   ,std::size_t const& width, std::size_t const& height
   ,color_model const& fixed = color_model{ ::color::constant::black_t{} }
  )
  {
   bgr_image_type  component;

   for( int channel=0; channel< color_model::size(); ++channel )
    {
     component.clear();
     component.reserve( image.size() );
     for( auto & original : image )
      {
       color_model            other( original );

       for( int sub = 0; sub < color_model::size(); ++sub )
        {
         if( sub != channel )
          {
           other[sub] = fixed[sub];
          }
        }

       bgr_image_type::value_type back( other );
       ::color::fix::overburn( back );
       component.push_back( back );
      }
     save_image24( name+ "-" + std::to_string( channel ) + ".tga", component, width, height );
    }

   return ;
  }

int decompose_test( int argc, char const *argv[] )
 {
  bgr_image_type image;
  int width=1000;
  int height=1000;
  load_image( image, width, height, "../data/hsi.tga" );

  decompose< ::color::cmyk<double>  >( image, "./dec/cmyk", width, height, ::color::constant::white_t{} );

  decompose< ::color::gray<double>  >( image, "./dec/gray", width, height );

  decompose< ::color::rgb<double>   >( image, "./dec/rgb", width, height );
  decompose< ::color::cmy<double>   >( image, "./dec/cmy", width, height, ::color::constant::white_t{} );

  decompose< ::color::hsv<double>   >( image, "./dec/hsv", width, height, ::color::hsv<double>{ 0, 50, 50 } );
  decompose< ::color::hsl<double>   >( image, "./dec/hsl", width, height, ::color::hsl<double>{ 0, 50, 50 } );
  decompose< ::color::hsi<double>   >( image, "./dec/hsi", width, height, ::color::hsi<double>{ 0, 50, 50 } );

  decompose< ::color::yiq<double>   >( image, "./dec/yiq", width, height );

  decompose< ::color::yuv<double, ::color::constant::yuv::BT_601_entity> >( image, "./dec/yuv-601", width, height );
  decompose< ::color::yuv<double, ::color::constant::yuv::BT_709_entity> >( image, "./dec/yuv-709", width, height );

  decompose< ::color::YCgCo<double> >( image, "./dec/YCgCo", width, height );
  decompose< ::color::YDbDr<double> >( image, "./dec/YDbDr", width, height );

  decompose< ::color::YPbPr<double, ::color::constant::YPbPr::BT_601_entity > >( image, "./dec/YPbPr601", width, height );
  decompose< ::color::YPbPr<double, ::color::constant::YPbPr::BT_709_entity > >( image, "./dec/YPbPr709", width, height );
  decompose< ::color::YPbPr<double, ::color::constant::YPbPr::BT_2020_entity > >( image, "./dec/YPbPr2020", width, height );

  decompose< ::color::xyz<double> >( image, "./dec/xyz", width, height );

  decompose< ::color::lab<double> >( image, "./dec/lab", width, height, ::color::lab<double>{ 50, 0, 0 } );

  decompose< ::color::lms<double, ::color::constant::lms::von_Kries_D65_entity > >( image, "./dec/lmsK65", width, height,    ::color::lms<double, ::color::constant::lms::von_Kries_D65_entity>{ 50, 0, 0 } );
  decompose< ::color::lms<double, ::color::constant::lms::von_Kries_E_entity   > >( image, "./dec/lmsKE", width, height,     ::color::lms<double, ::color::constant::lms::von_Kries_E_entity  >{ 50, 0, 0 } );
  decompose< ::color::lms<double, ::color::constant::lms::BFD_entity           > >( image, "./dec/lmsBFD", width, height,    ::color::lms<double, ::color::constant::lms::BFD_entity          >{ 50, 0, 0 } );
  decompose< ::color::lms<double, ::color::constant::lms::MCAT02_entity        > >( image, "./dec/lmsMCAT02", width, height, ::color::lms<double, ::color::constant::lms::MCAT02_entity       >{ 50, 0, 0 } );


  decompose< ::color::luv<double> >( image, "./dec/luv", width, height, ::color::luv<double>{ 50, 0, 0 } );
  decompose< ::color::xyy<double> >( image, "./dec/xyy", width, height, ::color::xyy<double>{ 50, 0, 0 } );


  return EXIT_SUCCESS;
 }

