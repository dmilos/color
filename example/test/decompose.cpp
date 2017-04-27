#include <iostream>
#include <fstream>
#include <iomanip>
#include <vector>
#include <string>

#include "color/color.hpp"


#include "./targa.hpp"

#include "./image.hpp"

using namespace std;

void load_image( bgr_image_type & image, std::string const& name )
 {
  std::ifstream ifs( name.c_str(), std::ios_base::binary );

  if( false == ifs.is_open() )
   {
    return;
   }
  targa_header_struct header;

  ifs.read( (char*)header, 18 );

  std::size_t width  = targa_get_width( header );
  std::size_t height = targa_get_height( header );
  std::size_t depth  = targa_get_depth( header );

  image.resize( width * height );

  ifs.read( reinterpret_cast<char *>( image.data() ), width * height * (depth/8) );
 }

template< typename color_model >
 void
 decompose( bgr_image_type const& image, std::string const& name, std::size_t const& width, std::size_t const& height )
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
           //other[sub] = color_model::bound_type::minimum( sub );
           other[sub] = 0;
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
  load_image( image, "../data/Barns_grand_tetons.tga" );

  int width=1600;
  int height=1195;

  decompose< ::color::gray<double>  >( image, "./dec/gray", width, height );

  decompose< ::color::rgb<double>   >( image, "./dec/rgb", width, height );
  decompose< ::color::cmy<double>   >( image, "./dec/cmy", width, height );
  decompose< ::color::cmyk<double>  >( image, "./dec/cmyk", width, height );

  decompose< ::color::hsv<double>   >( image, "./dec/hsv", width, height );
  decompose< ::color::hsl<double>   >( image, "./dec/hsl", width, height );
  decompose< ::color::hsi<double>   >( image, "./dec/hsi", width, height );

  decompose< ::color::yiq<double>   >( image, "./dec/yiq", width, height );
  
  decompose< ::color::yuv<double, ::color::constant::yuv::BT_601_entity>   >( image, "./dec/yuv-601", width, height );
  decompose< ::color::yuv<double, ::color::constant::yuv::BT_709_entity>   >( image, "./dec/yuv-709", width, height );

  decompose< ::color::YCgCo<double> >( image, "./dec/YCgCo", width, height );
  decompose< ::color::YDbDr<double> >( image, "./dec/YDbDr", width, height );

  decompose< ::color::YPbPr<double, ::color::constant::YPbPr::BT_601_entity > >( image, "./dec/YPbPr601", width, height );
  decompose< ::color::YPbPr<double, ::color::constant::YPbPr::BT_709_entity > >( image, "./dec/YPbPr709", width, height );
  decompose< ::color::YPbPr<double, ::color::constant::YPbPr::BT_2020_entity > >( image, "./dec/YPbPr2020", width, height );

  decompose< ::color::xyz<double> >( image, "./dec/xyz", width, height );

  decompose< ::color::lab<double> >( image, "./dec/lab", width, height );

  return EXIT_SUCCESS;
 }

