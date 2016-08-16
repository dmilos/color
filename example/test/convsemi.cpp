#include <iostream>
#include <fstream>
#include <iomanip>
#include <typeinfo>
#include <vector>

#include "./targa.hpp"

#include "color/color.hpp"

typedef std::vector< ::color::bgr< std::uint8_t  > > image_type;

template< typename category_down_name, typename category_up_name>
 void make_image_conversion
  (
   std::string const& name
   ,double blue
  )
  {
   color::rgb<double> r;
   blue = 0;

   color::model< category_down_name>  up;
   color::model< category_up_name> down;

   image_type image;

   int width = 500;
   int height = 500;
   image.resize( height * width );

   for( int y=0; y < height; y++  )
    for( int x=0; x < width; x++  )
      {
       r.template set<0>( x /(double)width  );
       r.template set<1>( y /(double)height );
       r.template set<2>( blue );

       down = r;
       up = down;
       r = up;

      image[ y*width + x] = r;
     }

   {
    targa_header_struct header;

    targa_make_header24( width, height, header );

     {
      std::ofstream of( name.c_str(), std::ios_base::binary);
      of.write((const char *)header, 18);
      of.write((const char *)image.data(), image.size() * image_type::value_type::size() );
     }

   }

  }

void image_conversion()
 {
  typedef ::color::cmy<double>::category_type           cmy_t;
  typedef ::color::cmyk<double>::category_type         cmyk_t;

  typedef ::color::gray<double>::category_type         gray_t;

  typedef ::color::rgb<double>::category_type           rgb_t;

  typedef ::color::hsi<double>::category_type           hsi_t;
  typedef ::color::hsl<double>::category_type           hsl_t;
  typedef ::color::hsv<double>::category_type           hsv_t;
  
  typedef ::color::YCgCo<double>::category_type       YCgCo_t;
  typedef ::color::YDbDr<double>::category_type       YDbDr_t;
  typedef ::color::yiq<double>::category_type           yiq_t;
  typedef ::color::YPbPr<double>::category_type    YPbPr709_t;
  typedef ::color::yuv<double>::category_type        yuv709_t;


  make_image_conversion< rgb_t,      cmy_t >( "./conv/rgb2cmy.tga",      0.5 );
  make_image_conversion< rgb_t,     cmyk_t >( "./conv/rgb2cmyk.tga",     0.5 );
  make_image_conversion< rgb_t,     gray_t >( "./conv/rgb2gray.tga",     0.5 );
  make_image_conversion< rgb_t,      rgb_t >( "./conv/rgb2rgb.tga",      0.5 );
  make_image_conversion< rgb_t,      hsi_t >( "./conv/rgb2hsi.tga",      0.5 );
  make_image_conversion< rgb_t,      hsl_t >( "./conv/rgb2hsl.tga",      0.5 );
  make_image_conversion< rgb_t,      hsv_t >( "./conv/rgb2hsv.tga",      0.5 );
  make_image_conversion< rgb_t,    YCgCo_t >( "./conv/rgb2YCgCo.tga",    0.5 );
  make_image_conversion< rgb_t,    YDbDr_t >( "./conv/rgb2YDbDr.tga",    0.5 );
  make_image_conversion< rgb_t,      yiq_t >( "./conv/rgb2yiq.tga",      0.5 );
  make_image_conversion< rgb_t, YPbPr709_t >( "./conv/rgb2YPbPr709.tga", 0.5 );
  make_image_conversion< rgb_t,   yuv709_t >( "./conv/rgb2yuv709.tga",   0.5 );

  make_image_conversion< cmy_t,      cmy_t >( "./conv/cmy2cmy.tga",      0.5 );
  make_image_conversion< cmy_t,     cmyk_t >( "./conv/cmy2cmyk.tga",     0.5 );
  make_image_conversion< cmy_t,     gray_t >( "./conv/cmy2gray.tga",     0.5 );
  make_image_conversion< cmy_t,      rgb_t >( "./conv/cmy2rgb.tga",      0.5 );
  make_image_conversion< cmy_t,      hsi_t >( "./conv/cmy2hsi.tga",      0.5 );
  make_image_conversion< cmy_t,      hsl_t >( "./conv/cmy2hsl.tga",      0.5 );
  make_image_conversion< cmy_t,      hsv_t >( "./conv/cmy2hsv.tga",      0.5 );
  make_image_conversion< cmy_t,    YCgCo_t >( "./conv/cmy2YCgCo.tga",    0.5 );
  make_image_conversion< cmy_t,    YDbDr_t >( "./conv/cmy2YDbDr.tga",    0.5 );
  make_image_conversion< cmy_t,      yiq_t >( "./conv/cmy2yiq.tga",      0.5 );
  make_image_conversion< cmy_t, YPbPr709_t >( "./conv/cmy2YPbPr709.tga", 0.5 );
  make_image_conversion< cmy_t,   yuv709_t >( "./conv/cmy2yuv709.tga",   0.5 );

  make_image_conversion< cmyk_t,      cmy_t >( "./conv/cmyk2cmy.tga",      0.5 );
  make_image_conversion< cmyk_t,     cmyk_t >( "./conv/cmyk2cmyk.tga",     0.5 );
  make_image_conversion< cmyk_t,     gray_t >( "./conv/cmyk2gray.tga",     0.5 );
  make_image_conversion< cmyk_t,      rgb_t >( "./conv/cmyk2rgb.tga",      0.5 );
  make_image_conversion< cmyk_t,      hsi_t >( "./conv/cmyk2hsi.tga",      0.5 );
  make_image_conversion< cmyk_t,      hsl_t >( "./conv/cmyk2hsl.tga",      0.5 );
  make_image_conversion< cmyk_t,      hsv_t >( "./conv/cmyk2hsv.tga",      0.5 );
  make_image_conversion< cmyk_t,    YCgCo_t >( "./conv/cmyk2YCgCo.tga",    0.5 );
  make_image_conversion< cmyk_t,    YDbDr_t >( "./conv/cmyk2YDbDr.tga",    0.5 );
  make_image_conversion< cmyk_t,      yiq_t >( "./conv/cmyk2yiq.tga",      0.5 );
  make_image_conversion< cmyk_t, YPbPr709_t >( "./conv/cmyk2YPbPr709.tga", 0.5 );
  make_image_conversion< cmyk_t,   yuv709_t >( "./conv/cmyk2yuv709.tga",   0.5 );

  make_image_conversion< gray_t,      cmy_t >( "./conv/gray2cmy.tga",      0.5 );
  make_image_conversion< gray_t,     cmyk_t >( "./conv/gray2cmyk.tga",     0.5 );
  make_image_conversion< gray_t,     gray_t >( "./conv/gray2gray.tga",     0.5 );
  make_image_conversion< gray_t,      rgb_t >( "./conv/gray2rgb.tga",      0.5 );
  make_image_conversion< gray_t,      hsi_t >( "./conv/gray2hsi.tga",      0.5 );
  make_image_conversion< gray_t,      hsl_t >( "./conv/gray2hsl.tga",      0.5 );
  make_image_conversion< gray_t,      hsv_t >( "./conv/gray2hsv.tga",      0.5 );
  make_image_conversion< gray_t,    YCgCo_t >( "./conv/gray2YCgCo.tga",    0.5 );
  make_image_conversion< gray_t,    YDbDr_t >( "./conv/gray2YDbDr.tga",    0.5 );
  make_image_conversion< gray_t,      yiq_t >( "./conv/gray2yiq.tga",      0.5 );
  make_image_conversion< gray_t, YPbPr709_t >( "./conv/gray2YPbPr709.tga", 0.5 );
  make_image_conversion< gray_t,   yuv709_t >( "./conv/gray2yuv709.tga",   0.5 );

  make_image_conversion< hsi_t,      cmy_t >( "./conv/hsi2cmy.tga",      0.5 );
  make_image_conversion< hsi_t,     cmyk_t >( "./conv/hsi2cmyk.tga",     0.5 );
  make_image_conversion< hsi_t,     gray_t >( "./conv/hsi2gray.tga",     0.5 );
  make_image_conversion< hsi_t,      rgb_t >( "./conv/hsi2rgb.tga",      0.5 );
  make_image_conversion< hsi_t,      hsi_t >( "./conv/hsi2hsi.tga",      0.5 );
  make_image_conversion< hsi_t,      hsl_t >( "./conv/hsi2hsl.tga",      0.5 );
  make_image_conversion< hsi_t,      hsv_t >( "./conv/hsi2hsv.tga",      0.5 );
  make_image_conversion< hsi_t,    YCgCo_t >( "./conv/hsi2YCgCo.tga",    0.5 );
  make_image_conversion< hsi_t,    YDbDr_t >( "./conv/hsi2YDbDr.tga",    0.5 );
  make_image_conversion< hsi_t,      yiq_t >( "./conv/hsi2yiq.tga",      0.5 );
  make_image_conversion< hsi_t, YPbPr709_t >( "./conv/hsi2YPbPr709.tga", 0.5 );
  make_image_conversion< hsi_t,   yuv709_t >( "./conv/hsi2yuv709.tga",   0.5 );

  make_image_conversion< hsl_t,      cmy_t >( "./conv/hsl2cmy.tga",      0.5 );
  make_image_conversion< hsl_t,     cmyk_t >( "./conv/hsl2cmyk.tga",     0.5 );
  make_image_conversion< hsl_t,     gray_t >( "./conv/hsl2gray.tga",     0.5 );
  make_image_conversion< hsl_t,      rgb_t >( "./conv/hsl2rgb.tga",      0.5 );
  make_image_conversion< hsl_t,      hsi_t >( "./conv/hsl2hsi.tga",      0.5 );
  make_image_conversion< hsl_t,      hsl_t >( "./conv/hsl2hsl.tga",      0.5 );
  make_image_conversion< hsl_t,      hsv_t >( "./conv/hsl2hsv.tga",      0.5 );
  make_image_conversion< hsl_t,    YCgCo_t >( "./conv/hsl2YCgCo.tga",    0.5 );
  make_image_conversion< hsl_t,    YDbDr_t >( "./conv/hsl2YDbDr.tga",    0.5 );
  make_image_conversion< hsl_t,      yiq_t >( "./conv/hsl2yiq.tga",      0.5 );
  make_image_conversion< hsl_t, YPbPr709_t >( "./conv/hsl2YPbPr709.tga", 0.5 );
  make_image_conversion< hsl_t,   yuv709_t >( "./conv/hsl2yuv709.tga",   0.5 );

  make_image_conversion< hsv_t,      cmy_t >( "./conv/hsv2cmy.tga",      0.5 );
  make_image_conversion< hsv_t,     cmyk_t >( "./conv/hsv2cmyk.tga",     0.5 );
  make_image_conversion< hsv_t,     gray_t >( "./conv/hsv2gray.tga",     0.5 );
  make_image_conversion< hsv_t,      rgb_t >( "./conv/hsv2rgb.tga",      0.5 );
  make_image_conversion< hsv_t,      hsi_t >( "./conv/hsv2hsi.tga",      0.5 );
  make_image_conversion< hsv_t,      hsl_t >( "./conv/hsv2hsl.tga",      0.5 );
  make_image_conversion< hsv_t,      hsv_t >( "./conv/hsv2hsv.tga",      0.5 );
  make_image_conversion< hsv_t,    YCgCo_t >( "./conv/hsv2YCgCo.tga",    0.5 );
  make_image_conversion< hsv_t,    YDbDr_t >( "./conv/hsv2YDbDr.tga",    0.5 );
  make_image_conversion< hsv_t,      yiq_t >( "./conv/hsv2yiq.tga",      0.5 );
  make_image_conversion< hsv_t, YPbPr709_t >( "./conv/hsv2YPbPr709.tga", 0.5 );
  make_image_conversion< hsv_t,   yuv709_t >( "./conv/hsv2yuv709.tga",   0.5 );
 }
