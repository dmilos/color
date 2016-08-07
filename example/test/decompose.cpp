#include <iostream>
#include <fstream>
#include <iomanip>
#include <vector>
#include <string>

#include "color/color.hpp"


#include "./targa.hpp"

using namespace std;

typedef std::vector< ::color::bgr< std::uint8_t  > > image_type;
typedef std::vector< ::color::gray< std::uint8_t  > > gray_image_type;

void load_image( image_type & image, std::string const& name )
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

void save_image( std::string const& name, image_type const& image, std::size_t const& width, std::size_t const& height )
 {
  targa_header_struct header;

  targa_make_header24( width, height, header );

   {
    std::ofstream of( name.c_str(), std::ios_base::binary);
    of.write((const char *)header, 18);
    of.write((const char *)image.data(), image.size() * image_type::value_type::size() );
   }

 }

template< typename color_model >
 void
 decompose( image_type const& image, std::string const& name, std::size_t const& width, std::size_t const& height )
  {
   image_type  component;

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

       image_type::value_type back( other );
       ::color::fix::overburn( back );
       component.push_back( back );
      }
      save_image( name+ "-" + std::to_string( channel ) + ".tga", component, width, height );
    }

   return ;
  }

int decompose_test( int argc, char const *argv[] )
 {
  image_type image;
  load_image( image, "../data/Barns_grand_tetons.tga" );

  int width=1600;
  int height=1195;

  decompose< ::color::gray<double>  >( image, "../out/dec/gray", width, height );

  decompose< ::color::gray<double>  >( image, "../out/dec/gray", width, height );

  decompose< ::color::rgb<double>   >( image, "../out/dec/rgb", width, height );
  decompose< ::color::cmy<double>   >( image, "../out/dec/cmy", width, height );
  decompose< ::color::cmyk<double>  >( image, "../out/dec/cmyk", width, height );

  decompose< ::color::hsv<double>   >( image, "../out/dec/hsv", width, height );
  decompose< ::color::hsl<double>   >( image, "../out/dec/hsl", width, height );

  decompose< ::color::yiq<double>   >( image, "../out/dec/yiq", width, height );
  decompose< ::color::yuv<double>   >( image, "../out/dec/yuv", width, height );

  decompose< ::color::YCbCr<double> >( image, "../out/dec/YCbCr", width, height );
  decompose< ::color::YCgCo<double> >( image, "../out/dec/YCgCo", width, height );
  decompose< ::color::YDbDr<double> >( image, "../out/dec/YDbDr", width, height );
  decompose< ::color::YPbPr<double> >( image, "../out/dec/YPbPr", width, height );

  return EXIT_SUCCESS;
 }

