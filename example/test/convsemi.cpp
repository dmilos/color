#include <iostream>
#include <fstream>
#include <iomanip>
#include <typeinfo>
#include <vector>

#include "./targa.hpp"

#include "color/color.hpp"

typedef std::vector< ::color::bgr< std::uint8_t  > > image_type;

template< typename category_left_name, typename category_right_name >
 void make_image_conversion
  (
   std::string const& name
   ,double blue
  )
  {
   color::rgb<double> r;

   color::model< category_left_name>  left;
   color::model< category_right_name> right;

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

       right = r;
       left = right;
       r = left;

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

void image_bgr_conversion()
 {
  typedef ::color::rgb< double         >::category_type  rgb_t;

  typedef ::color::bgr< std::uint8_t   >::category_type  bgr_uint8_t;
  typedef ::color::bgr< std::uint16_t  >::category_type  bgr_uint16_t;
  typedef ::color::bgr< std::uint32_t  >::category_type  bgr_uint32_t;
  typedef ::color::bgr< std::uint64_t  >::category_type  bgr_uint64_t;
  typedef ::color::bgr< float          >::category_type  bgr_float_t;
  typedef ::color::bgr< double         >::category_type  bgr_double_t;
  typedef ::color::bgr< long    double >::category_type  bgr_ldouble_t;

  typedef ::color::bgr< ::color::type::split233_t >::category_type bgr_split233_t;
  typedef ::color::bgr< ::color::type::split323_t >::category_type bgr_split323_t;
  typedef ::color::bgr< ::color::type::split332_t >::category_type bgr_split332_t;
  typedef ::color::bgr< ::color::type::split422_t >::category_type bgr_split422_t;
  typedef ::color::bgr< ::color::type::split556_t >::category_type bgr_split556_t;
  typedef ::color::bgr< ::color::type::split565_t >::category_type bgr_split565_t;
  typedef ::color::bgr< ::color::type::split655_t >::category_type bgr_split655_t;


  make_image_conversion< rgb_t, bgr_uint8_t    >( "./conv-rgb/rgb2bgr_uint8.tga",     0.5 );
  make_image_conversion< rgb_t, bgr_uint16_t   >( "./conv-rgb/rgb2bgr_uint16.tga",    0.5 );
  make_image_conversion< rgb_t, bgr_uint32_t   >( "./conv-rgb/rgb2bgr_uint32.tga",    0.5 );
  make_image_conversion< rgb_t, bgr_uint64_t   >( "./conv-rgb/rgb2bgr_uint64.tga",    0.5 );
  make_image_conversion< rgb_t, bgr_float_t    >( "./conv-rgb/rgb2bgr_float.tga",     0.5 );
  make_image_conversion< rgb_t, bgr_double_t   >( "./conv-rgb/rgb2bgr_double.tga",    0.5 );
  make_image_conversion< rgb_t, bgr_ldouble_t  >( "./conv-rgb/rgb2bgr_ldouble.tga",   0.5 );
  make_image_conversion< rgb_t, bgr_split233_t >( "./conv-rgb/rgb2bgr_split233.tga",  0.5 );
  make_image_conversion< rgb_t, bgr_split323_t >( "./conv-rgb/rgb2bgr_split323.tga",  0.5 );
  make_image_conversion< rgb_t, bgr_split332_t >( "./conv-rgb/rgb2bgr_split332.tga",  0.5 );
  make_image_conversion< rgb_t, bgr_split422_t >( "./conv-rgb/rgb2bgr_split422.tga",  0.5 );
  make_image_conversion< rgb_t, bgr_split556_t >( "./conv-rgb/rgb2bgr_split556.tga",  0.5 );
  make_image_conversion< rgb_t, bgr_split565_t >( "./conv-rgb/rgb2bgr_split565.tga",  0.5 );
  make_image_conversion< rgb_t, bgr_split655_t >( "./conv-rgb/rgb2bgr_split655.tga",  0.5 );
 }


void image_rgb_conversion()
 {
  typedef ::color::rgb< double         >::category_type  rgb_t;

  typedef ::color::rgb< std::uint8_t   >::category_type  rgb_uint8_t;
  typedef ::color::rgb< std::uint16_t  >::category_type  rgb_uint16_t;
  typedef ::color::rgb< std::uint32_t  >::category_type  rgb_uint32_t;
  typedef ::color::rgb< std::uint64_t  >::category_type  rgb_uint64_t;
  typedef ::color::rgb< float          >::category_type  rgb_float_t;
  typedef ::color::rgb< double         >::category_type  rgb_double_t;
  typedef ::color::rgb< long    double >::category_type  rgb_ldouble_t;

  typedef ::color::rgb< ::color::type::split233_t >::category_type rgb_split233_t;
  typedef ::color::rgb< ::color::type::split323_t >::category_type rgb_split323_t;
  typedef ::color::rgb< ::color::type::split332_t >::category_type rgb_split332_t;
  typedef ::color::rgb< ::color::type::split422_t >::category_type rgb_split422_t;
  typedef ::color::rgb< ::color::type::split556_t >::category_type rgb_split556_t;
  typedef ::color::rgb< ::color::type::split565_t >::category_type rgb_split565_t;
  typedef ::color::rgb< ::color::type::split655_t >::category_type rgb_split655_t;


  make_image_conversion< rgb_t, rgb_uint8_t    >( "./conv-rgb/rgb2rgb_uint8.tga",      0.5 );
  make_image_conversion< rgb_t, rgb_uint16_t   >( "./conv-rgb/rgb2rgb_uint16.tga",      0.5 );
  make_image_conversion< rgb_t, rgb_uint32_t   >( "./conv-rgb/rgb2rgb_uint32.tga",      0.5 );
  make_image_conversion< rgb_t, rgb_uint64_t   >( "./conv-rgb/rgb2rgb_uint64.tga",      0.5 );
  make_image_conversion< rgb_t, rgb_float_t    >( "./conv-rgb/rgb2rgb_float.tga",      0.5 );
  make_image_conversion< rgb_t, rgb_double_t   >( "./conv-rgb/rgb2rgb_double.tga",      0.5 );
  make_image_conversion< rgb_t, rgb_ldouble_t  >( "./conv-rgb/rgb2rgb_ldouble.tga",      0.5 );
  make_image_conversion< rgb_t, rgb_split233_t >( "./conv-rgb/rgb2rgb_split233.tga",      0.5 );
  make_image_conversion< rgb_t, rgb_split323_t >( "./conv-rgb/rgb2rgb_split323.tga",      0.5 );
  make_image_conversion< rgb_t, rgb_split332_t >( "./conv-rgb/rgb2rgb_split332.tga",      0.5 );
  make_image_conversion< rgb_t, rgb_split422_t >( "./conv-rgb/rgb2rgb_split422.tga",      0.5 );
  make_image_conversion< rgb_t, rgb_split556_t >( "./conv-rgb/rgb2rgb_split556.tga",      0.5 );
  make_image_conversion< rgb_t, rgb_split565_t >( "./conv-rgb/rgb2rgb_split565.tga",      0.5 );
  make_image_conversion< rgb_t, rgb_split655_t >( "./conv-rgb/rgb2rgb_split655.tga",      0.5 );
 }

void image_conversion()
 {
  image_rgb_conversion();
  image_bgr_conversion();

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

  make_image_conversion< YCgCo_t,      cmy_t >( "./conv/YCgCo2cmy.tga",      0.5 );
  make_image_conversion< YCgCo_t,     cmyk_t >( "./conv/YCgCo2cmyk.tga",     0.5 );
  make_image_conversion< YCgCo_t,     gray_t >( "./conv/YCgCo2gray.tga",     0.5 );
  make_image_conversion< YCgCo_t,      rgb_t >( "./conv/YCgCo2rgb.tga",      0.5 );
  make_image_conversion< YCgCo_t,      hsi_t >( "./conv/YCgCo2hsi.tga",      0.5 );
  make_image_conversion< YCgCo_t,      hsl_t >( "./conv/YCgCo2hsl.tga",      0.5 );
  make_image_conversion< YCgCo_t,      hsv_t >( "./conv/YCgCo2hsv.tga",      0.5 );
  make_image_conversion< YCgCo_t,    YCgCo_t >( "./conv/YCgCo2YCgCo.tga",    0.5 );
  make_image_conversion< YCgCo_t,    YDbDr_t >( "./conv/YCgCo2YDbDr.tga",    0.5 );
  make_image_conversion< YCgCo_t,      yiq_t >( "./conv/YCgCo2yiq.tga",      0.5 );
  make_image_conversion< YCgCo_t, YPbPr709_t >( "./conv/YCgCo2YPbPr709.tga", 0.5 );
  make_image_conversion< YCgCo_t,   yuv709_t >( "./conv/YCgCo2yuv709.tga",   0.5 );

  make_image_conversion< YDbDr_t,      cmy_t >( "./conv/YDbDr2cmy.tga",      0.5 );
  make_image_conversion< YDbDr_t,     cmyk_t >( "./conv/YDbDr2cmyk.tga",     0.5 );
  make_image_conversion< YDbDr_t,     gray_t >( "./conv/YDbDr2gray.tga",     0.5 );
  make_image_conversion< YDbDr_t,      rgb_t >( "./conv/YDbDr2rgb.tga",      0.5 );
  make_image_conversion< YDbDr_t,      hsi_t >( "./conv/YDbDr2hsi.tga",      0.5 );
  make_image_conversion< YDbDr_t,      hsl_t >( "./conv/YDbDr2hsl.tga",      0.5 );
  make_image_conversion< YDbDr_t,      hsv_t >( "./conv/YDbDr2hsv.tga",      0.5 );
  make_image_conversion< YDbDr_t,    YCgCo_t >( "./conv/YDbDr2YCgCo.tga",    0.5 );
  make_image_conversion< YDbDr_t,    YDbDr_t >( "./conv/YDbDr2YDbDr.tga",    0.5 );
  make_image_conversion< YDbDr_t,      yiq_t >( "./conv/YDbDr2yiq.tga",      0.5 );
  make_image_conversion< YDbDr_t, YPbPr709_t >( "./conv/YDbDr2YPbPr709.tga", 0.5 );
  make_image_conversion< YDbDr_t,   yuv709_t >( "./conv/YDbDr2yuv709.tga",   0.5 );

  make_image_conversion< yiq_t,      cmy_t >( "./conv/yiq2cmy.tga",      0.5 );
  make_image_conversion< yiq_t,     cmyk_t >( "./conv/yiq2cmyk.tga",     0.5 );
  make_image_conversion< yiq_t,     gray_t >( "./conv/yiq2gray.tga",     0.5 );
  make_image_conversion< yiq_t,      rgb_t >( "./conv/yiq2rgb.tga",      0.5 );
  make_image_conversion< yiq_t,      hsi_t >( "./conv/yiq2hsi.tga",      0.5 );
  make_image_conversion< yiq_t,      hsl_t >( "./conv/yiq2hsl.tga",      0.5 );
  make_image_conversion< yiq_t,      hsv_t >( "./conv/yiq2hsv.tga",      0.5 );
  make_image_conversion< yiq_t,    YCgCo_t >( "./conv/yiq2YCgCo.tga",    0.5 );
  make_image_conversion< yiq_t,    YDbDr_t >( "./conv/yiq2YDbDr.tga",    0.5 );
  make_image_conversion< yiq_t,      yiq_t >( "./conv/yiq2yiq.tga",      0.5 );
  make_image_conversion< yiq_t, YPbPr709_t >( "./conv/yiq2YPbPr709.tga", 0.5 );
  make_image_conversion< yiq_t,   yuv709_t >( "./conv/yiq2yuv709.tga",   0.5 );

  make_image_conversion< YPbPr709_t,      cmy_t >( "./conv/YPbPr709_2cmy.tga",      0.5 );
  make_image_conversion< YPbPr709_t,     cmyk_t >( "./conv/YPbPr709_2cmyk.tga",     0.5 );
  make_image_conversion< YPbPr709_t,     gray_t >( "./conv/YPbPr709_2gray.tga",     0.5 );
  make_image_conversion< YPbPr709_t,      rgb_t >( "./conv/YPbPr709_2rgb.tga",      0.5 );
  make_image_conversion< YPbPr709_t,      hsi_t >( "./conv/YPbPr709_2hsi.tga",      0.5 );
  make_image_conversion< YPbPr709_t,      hsl_t >( "./conv/YPbPr709_2hsl.tga",      0.5 );
  make_image_conversion< YPbPr709_t,      hsv_t >( "./conv/YPbPr709_2hsv.tga",      0.5 );
  make_image_conversion< YPbPr709_t,    YCgCo_t >( "./conv/YPbPr709_2YCgCo.tga",    0.5 );
  make_image_conversion< YPbPr709_t,    YDbDr_t >( "./conv/YPbPr709_2YDbDr.tga",    0.5 );
  make_image_conversion< YPbPr709_t,      yiq_t >( "./conv/YPbPr709_2yiq.tga",      0.5 );
  make_image_conversion< YPbPr709_t, YPbPr709_t >( "./conv/YPbPr709_2YPbPr709.tga", 0.5 );
  make_image_conversion< YPbPr709_t,   yuv709_t >( "./conv/YPbPr709_2yuv709.tga",   0.5 );

  make_image_conversion< yuv709_t,      cmy_t >( "./conv/yuv709_2cmy.tga",      0.5 );
  make_image_conversion< yuv709_t,     cmyk_t >( "./conv/yuv709_2cmyk.tga",     0.5 );
  make_image_conversion< yuv709_t,     gray_t >( "./conv/yuv709_2gray.tga",     0.5 );
  make_image_conversion< yuv709_t,      rgb_t >( "./conv/yuv709_2rgb.tga",      0.5 );
  make_image_conversion< yuv709_t,      hsi_t >( "./conv/yuv709_2hsi.tga",      0.5 );
  make_image_conversion< yuv709_t,      hsl_t >( "./conv/yuv709_2hsl.tga",      0.5 );
  make_image_conversion< yuv709_t,      hsv_t >( "./conv/yuv709_2hsv.tga",      0.5 );
  make_image_conversion< yuv709_t,    YCgCo_t >( "./conv/yuv709_2YCgCo.tga",    0.5 );
  make_image_conversion< yuv709_t,    YDbDr_t >( "./conv/yuv709_2YDbDr.tga",    0.5 );
  make_image_conversion< yuv709_t,      yiq_t >( "./conv/yuv709_2yiq.tga",      0.5 );
  make_image_conversion< yuv709_t, YPbPr709_t >( "./conv/yuv709_2YPbPr709.tga", 0.5 );
  make_image_conversion< yuv709_t,   yuv709_t >( "./conv/yuv709_2yuv709.tga",   0.5 );
 }
