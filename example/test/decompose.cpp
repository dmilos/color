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
 decompose2gray
  (
    bgr_image_type const& image
   ,std::string const& name
   ,std::size_t const& width, std::size_t const& height
  )
  {
   gray_image_type  component;

   for( std::size_t channel=0; channel< color_model::size(); ++channel )
    {
     component.clear();
     component.reserve( image.size() );
     for( auto & original : image )
      {
       color_model            other( original );

       component.push_back( gray_color_type( { (unsigned char )(255 * ::color::operation::normalize( other, channel ) ) } ) );
      }
     save_image_gray( name + "-" + std::to_string( channel ) + ".tga", component, width, height );
    }

   return ;
  }

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

   for( std::size_t channel=0; channel< color_model::size(); ++channel )
    {
     component.clear();
     component.reserve( image.size() );
     for( auto & original : image )
      {
       color_model            other( original );

       for( std::size_t sub = 0; sub < color_model::size(); ++sub )
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

  if( false == load_image( image, width, height, "./palette/hsl-1-100.tga" ) )
   {
    std::cout << "Can not load" <<  "../data/* Fixed status value connection.tga" << std::endl;
    return 0;
   }

  decompose< ::color::cmyk<double>  >( image, "./dec/cmyk", width, height, ::color::constant::white_t{} );

  decompose< ::color::gray<double>  >( image, "./dec/gray", width, height );

  decompose< ::color::rgb<double>   >( image, "./dec/rgb", width, height );
  decompose< ::color::cmy<double>   >( image, "./dec/cmy", width, height, ::color::constant::white_t{} );

  decompose< ::color::hsv<double>   >( image, "./dec/hsv", width, height, ::color::hsv<double>{ 0, 50, 50 } );
  decompose< ::color::hsl<double>   >( image, "./dec/hsl", width, height, ::color::hsl<double>{ 0, 50, 50 } );
  decompose< ::color::hsi<double>   >( image, "./dec/hsi", width, height, ::color::hsi<double>{ 0, 50, 50 } );
  decompose< ::color::hwb<double>   >( image, "./dec/hwb", width, height, ::color::hwb<double>{ 0, 50, 50 } );

  decompose< ::color::yiq<double>   >( image, "./dec/yiq", width, height );

  decompose< ::color::yuv<double, ::color::constant::yuv::BT_601_entity> >( image, "./dec/yuv-601", width, height );
  decompose< ::color::yuv<double, ::color::constant::yuv::BT_709_entity> >( image, "./dec/yuv-709", width, height );

  decompose< ::color::YCgCo<double> >( image, "./dec/YCgCo", width, height );
  decompose< ::color::YDbDr<double> >( image, "./dec/YDbDr", width, height );

  decompose< ::color::YPbPr<double, ::color::constant::YPbPr::BT_601_entity  > >( image, "./dec/YPbPr601", width, height );
  decompose< ::color::YPbPr<double, ::color::constant::YPbPr::BT_709_entity  > >( image, "./dec/YPbPr709", width, height );
  decompose< ::color::YPbPr<double, ::color::constant::YPbPr::BT_2020_entity > >( image, "./dec/YPbPr2020", width, height );

  decompose< ::color::xyz<double> >( image, "./dec/xyz", width, height );
  decompose< ::color::xyy<double> >( image, "./dec/xyy", width, height, ::color::xyy<double>{ 50, 0, 0 } );

  decompose< ::color::lab<   double, ::color::constant::lab::CIE_entity    > >( image, "./dec/labCIE",      width, height, ::color::lab<double, ::color::constant::lab::CIE_entity>{   50, 0, 0 } );
  decompose< ::color::lab<   double, ::color::constant::lab::Hunter_entity > >( image, "./dec/labHunter",   width, height, ::color::lab<double, ::color::constant::lab::Hunter_entity>{   50, 0, 0 } );

  decompose< ::color::LabCH< double> >( image, "./dec/LabHC", width, height, ::color::LabCH<double>{ 50, 0, 0 } );
  decompose< ::color::luv<   double> >( image, "./dec/luv",   width, height, ::color::luv<double>{   50, 0, 0 } );
  decompose< ::color::LuvCH< double> >( image, "./dec/LuvHC", width, height, ::color::LuvCH<double>{ 50, 0, 0 } );

  decompose< ::color::lms<double, ::color::constant::lms::von_Kries_D65_entity > >( image, "./dec/lmsK65", width, height,    ::color::lms<double, ::color::constant::lms::von_Kries_D65_entity>{ 50, 0, 0 } );
  decompose< ::color::lms<double, ::color::constant::lms::von_Kries_E_entity   > >( image, "./dec/lmsKE", width, height,     ::color::lms<double, ::color::constant::lms::von_Kries_E_entity  >{ 50, 0, 0 } );
  decompose< ::color::lms<double, ::color::constant::lms::BFD_entity           > >( image, "./dec/lmsBFD", width, height,    ::color::lms<double, ::color::constant::lms::BFD_entity          >{ 50, 0, 0 } );
  decompose< ::color::lms<double, ::color::constant::lms::MCAT02_entity        > >( image, "./dec/lmsMCAT02", width, height, ::color::lms<double, ::color::constant::lms::MCAT02_entity       >{ 50, 0, 0 } );

  {
   decompose2gray< ::color::cmyk<double>  >( image, "./dec-gray/cmyk", width, height );

   decompose2gray< ::color::gray<double>  >( image, "./dec-gray/gray", width, height );

   decompose2gray< ::color::rgb<double>   >( image, "./dec-gray/rgb", width, height );
   decompose2gray< ::color::cmy<double>   >( image, "./dec-gray/cmy", width, height );

   decompose2gray< ::color::hsv<double>   >( image, "./dec-gray/hsv", width, height );
   decompose2gray< ::color::hsl<double>   >( image, "./dec-gray/hsl", width, height );
   decompose2gray< ::color::hsi<double>   >( image, "./dec-gray/hsi", width, height );
   decompose2gray< ::color::hwb<double>   >( image, "./dec-gray/hwb", width, height );

   decompose2gray< ::color::yiq<double>   >( image, "./dec-gray/yiq", width, height );

   decompose2gray< ::color::yuv<double, ::color::constant::yuv::BT_601_entity> >( image, "./dec/yuv-601", width, height );
   decompose2gray< ::color::yuv<double, ::color::constant::yuv::BT_709_entity> >( image, "./dec/yuv-709", width, height );

   decompose2gray< ::color::YCgCo<double> >( image, "./dec-gray/YCgCo", width, height );
   decompose2gray< ::color::YDbDr<double> >( image, "./dec-gray/YDbDr", width, height );

   decompose2gray< ::color::YPbPr<double, ::color::constant::YPbPr::BT_601_entity  > >( image, "./dec/YPbPr601", width, height );
   decompose2gray< ::color::YPbPr<double, ::color::constant::YPbPr::BT_709_entity  > >( image, "./dec/YPbPr709", width, height );
   decompose2gray< ::color::YPbPr<double, ::color::constant::YPbPr::BT_2020_entity > >( image, "./dec/YPbPr2020", width, height );

   decompose2gray< ::color::xyz<double> >( image, "./dec-gray/xyz", width, height );
   decompose2gray< ::color::xyy<double> >( image, "./dec-gray/xyy", width, height );

   decompose2gray< ::color::lab< double, ::color::constant::lab::CIE_entity   > >( image, "./dec-gray/labCIE",   width, height );
   decompose2gray< ::color::lab< double, ::color::constant::lab::Hunter_entity> >( image, "./dec-gray/labHunter",   width, height );

   decompose2gray< ::color::LabCH< double> >( image, "./dec-gray/LabHC", width, height );
   decompose2gray< ::color::luv<   double> >( image, "./dec-gray/luv",   width, height );
   decompose2gray< ::color::LuvCH< double> >( image, "./dec-gray/LuvHC", width, height );

   decompose2gray< ::color::lms<double, ::color::constant::lms::von_Kries_D65_entity > >( image, "./dec-gray/lmsK65", width, height      );
   decompose2gray< ::color::lms<double, ::color::constant::lms::von_Kries_E_entity   > >( image, "./dec-gray/lmsKE", width, height       );
   decompose2gray< ::color::lms<double, ::color::constant::lms::BFD_entity           > >( image, "./dec-gray/lmsBFD", width, height      );
   decompose2gray< ::color::lms<double, ::color::constant::lms::MCAT02_entity        > >( image, "./dec-gray/lmsMCAT02", width, height   );
  }


  return EXIT_SUCCESS;
 }

