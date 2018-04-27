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
   , bool interleave = false
  )
  {
   color::rgb<double> r, o;

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
       o = r;

       right = r;
       left = right;
       r = left;

      image[ y*width + x] = r;
      if( true ==  interleave )
       {
        if( ( 0 == (y % 2) ) && (  0 == (x % 2) ) )
         {
          image[ y*width + x] = o;
         }
       }
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

  typedef ::color::bgr< ::color::type::split233_t>::category_type bgr_split233_t;
  typedef ::color::bgr< ::color::type::split323_t>::category_type bgr_split323_t;
  typedef ::color::bgr< ::color::type::split332_t>::category_type bgr_split332_t;
  typedef ::color::bgr< ::color::type::split422_t>::category_type bgr_split422_t;

  typedef ::color::bgr< ::color::type::split422_t>::category_type bgr_split422_t;
  typedef ::color::bgr< ::color::type::split242_t>::category_type bgr_split242_t;
  typedef ::color::bgr< ::color::type::split224_t>::category_type bgr_split224_t;

  typedef ::color::bgr< ::color::type::split556_t>::category_type bgr_split556_t;
  typedef ::color::bgr< ::color::type::split565_t>::category_type bgr_split565_t;
  typedef ::color::bgr< ::color::type::split655_t>::category_type bgr_split655_t;


  make_image_conversion< rgb_t, bgr_uint8_t    >( "./conv-rgb/bgr_uint8_2bgr.tga",     0.5 );
  make_image_conversion< rgb_t, bgr_uint16_t   >( "./conv-rgb/bgr_uint16_2bgr.tga",    0.5 );
  make_image_conversion< rgb_t, bgr_uint32_t   >( "./conv-rgb/bgr_uint32_2bgr.tga",    0.5 );
  make_image_conversion< rgb_t, bgr_uint64_t   >( "./conv-rgb/bgr_uint64_2bgr.tga",    0.5 );
  make_image_conversion< rgb_t, bgr_float_t    >( "./conv-rgb/bgr_float_2bgr.tga",     0.5 );
  make_image_conversion< rgb_t, bgr_double_t   >( "./conv-rgb/bgr_double_2bgr.tga",    0.5 );
  make_image_conversion< rgb_t, bgr_ldouble_t  >( "./conv-rgb/bgr_ldouble_2bgr.tga",   0.5 );
  make_image_conversion< rgb_t, bgr_split233_t >( "./conv-rgb/bgr_split233_2bgr.tga",  0.5 );
  make_image_conversion< rgb_t, bgr_split323_t >( "./conv-rgb/bgr_split323_2bgr.tga",  0.5 );
  make_image_conversion< rgb_t, bgr_split332_t >( "./conv-rgb/bgr_split332_2bgr.tga",  0.5 );

  make_image_conversion< rgb_t, bgr_split422_t >( "./conv-rgb/bgr_split422_2bgr.tga",  0.5 );
  make_image_conversion< rgb_t, bgr_split242_t >( "./conv-rgb/bgr_split242_2bgr.tga",  0.5 );
  make_image_conversion< rgb_t, bgr_split224_t >( "./conv-rgb/bgr_split224_2bgr.tga",  0.5 );

  make_image_conversion< rgb_t, bgr_split556_t >( "./conv-rgb/bgr_split556_2bgr.tga",  0.5 );
  make_image_conversion< rgb_t, bgr_split565_t >( "./conv-rgb/bgr_split565_2bgr.tga",  0.5 );
  make_image_conversion< rgb_t, bgr_split655_t >( "./conv-rgb/bgr_split655_2bgr.tga",  0.5 );
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

  typedef ::color::rgb< ::color::type::split233_t>::category_type rgb_split233_t;
  typedef ::color::rgb< ::color::type::split323_t>::category_type rgb_split323_t;
  typedef ::color::rgb< ::color::type::split332_t>::category_type rgb_split332_t;

  typedef ::color::rgb< ::color::type::split422_t>::category_type rgb_split422_t;
  typedef ::color::rgb< ::color::type::split242_t>::category_type rgb_split242_t;
  typedef ::color::rgb< ::color::type::split224_t>::category_type rgb_split224_t;

  typedef ::color::rgb< ::color::type::split556_t>::category_type rgb_split556_t;
  typedef ::color::rgb< ::color::type::split565_t>::category_type rgb_split565_t;
  typedef ::color::rgb< ::color::type::split655_t>::category_type rgb_split655_t;


  make_image_conversion< rgb_t, rgb_uint8_t    >( "./conv-rgb/rgb_uint8_2rgb.tga",      0.5 );
  make_image_conversion< rgb_t, rgb_uint16_t   >( "./conv-rgb/rgb_uint16_2rgb.tga",      0.5 );
  make_image_conversion< rgb_t, rgb_uint32_t   >( "./conv-rgb/rgb_uint32_2rgb.tga",      0.5 );
  make_image_conversion< rgb_t, rgb_uint64_t   >( "./conv-rgb/rgb_uint64_2rgb.tga",      0.5 );
  make_image_conversion< rgb_t, rgb_float_t    >( "./conv-rgb/rgb_float_2rgb.tga",      0.5 );
  make_image_conversion< rgb_t, rgb_double_t   >( "./conv-rgb/rgb_double_2rgb.tga",      0.5 );
  make_image_conversion< rgb_t, rgb_ldouble_t  >( "./conv-rgb/rgb_ldouble_2rgb.tga",      0.5 );
  make_image_conversion< rgb_t, rgb_split233_t >( "./conv-rgb/rgb_split233_2rgb.tga",      0.5 );
  make_image_conversion< rgb_t, rgb_split323_t >( "./conv-rgb/rgb_split323_2rgb.tga",      0.5 );
  make_image_conversion< rgb_t, rgb_split332_t >( "./conv-rgb/rgb_split332_2rgb.tga",      0.5 );

  make_image_conversion< rgb_t, rgb_split422_t >( "./conv-rgb/rgb_split422_2rgb.tga",      0.5 );
  make_image_conversion< rgb_t, rgb_split242_t >( "./conv-rgb/rgb_split242_2rgb.tga",      0.5 );
  make_image_conversion< rgb_t, rgb_split224_t >( "./conv-rgb/rgb_split224_2rgb.tga",      0.5 );

  make_image_conversion< rgb_t, rgb_split556_t >( "./conv-rgb/rgb_split556_2rgb.tga",      0.5 );
  make_image_conversion< rgb_t, rgb_split565_t >( "./conv-rgb/rgb_split565_2rgb.tga",      0.5 );
  make_image_conversion< rgb_t, rgb_split655_t >( "./conv-rgb/rgb_split655_2rgb.tga",      0.5 );
 }

void image_conversion()
 {
  image_rgb_conversion();
  image_bgr_conversion();

  typedef ::color::cmy<double>::category_type           cmy_t;
  typedef ::color::cmyk<double>::category_type         cmyk_t;

  typedef ::color::gray<double>::category_type         gray_t;

  typedef ::color::rgb<double>::category_type           rgb_t;
  typedef ::color::bgr<double>::category_type           bgr_t;

  typedef ::color::hsi<double>::category_type           hsi_t;
  typedef ::color::hsl<double>::category_type           hsl_t;
  typedef ::color::hsv<double>::category_type           hsv_t;
  typedef ::color::hwb<double>::category_type           hwb_t;

  typedef ::color::YCgCo<double>::category_type       YCgCo_t;
  typedef ::color::YDbDr<double>::category_type       YDbDr_t;
  typedef ::color::yiq<double>::category_type           yiq_t;
  typedef ::color::YPbPr<double>::category_type    YPbPr709_t;
  typedef ::color::yuv<double>::category_type        yuv709_t;
  typedef ::color::yuv<double, ::color::constant::yuv::BT_601_entity >::category_type        yuv601_t;

  typedef ::color::lab<double, ::color::constant::lab::CIE_entity >::category_type           labCIE_t;
  typedef ::color::lab<double, ::color::constant::lab::Hunter_entity >::category_type        labHunter_t;

  typedef ::color::lms<double, ::color::constant::lms::von_Kries_D65_entity>::category_type        lms_t;
//typedef ::color::lms<double, ::color::constant::lms::von_Kries_E_entity  >::category_type        lmsKE_t;
//typedef ::color::lms<double, ::color::constant::lms::BFD_entity          >::category_type        lmsBFD_t;
//typedef ::color::lms<double, ::color::constant::lms::MCAT02_entity       >::category_type        lmsMC2_t;
  typedef ::color::luv<double>::category_type        luv_t;
  typedef ::color::LabCH<double>::category_type    LabCH_t;
  typedef ::color::LuvCH<double>::category_type    LuvCH_t;

  typedef ::color::xyy<double>::category_type        xyy_t;
  typedef ::color::xyz<double>::category_type        xyz_t;

  make_image_conversion<         bgr_t,      bgr_t >( "./conv/bgr2bgr.tga",       0.5 );
  make_image_conversion<         cmy_t,      bgr_t >( "./conv/bgr2cmy.tga",       0.5 );
  make_image_conversion<        cmyk_t,      bgr_t >( "./conv/bgr2cmyk.tga",      0.5 );
  make_image_conversion<        gray_t,      bgr_t >( "./conv/bgr2gray.tga",      0.5 );
  make_image_conversion<         rgb_t,      bgr_t >( "./conv/bgr2rgb.tga",       0.5 );
  make_image_conversion<         hsi_t,      bgr_t >( "./conv/bgr2hsi.tga",       0.5 );
  make_image_conversion<         hsl_t,      bgr_t >( "./conv/bgr2hsl.tga",       0.5 );
  make_image_conversion<         hsv_t,      bgr_t >( "./conv/bgr2hsv.tga",       0.5 );
  make_image_conversion<         hwb_t,      bgr_t >( "./conv/bgr2hwb.tga",       0.5 );
  make_image_conversion<       YCgCo_t,      bgr_t >( "./conv/bgr2YCgCo.tga",     0.5 );
  make_image_conversion<       YDbDr_t,      bgr_t >( "./conv/bgr2YDbDr.tga",     0.5 );
  make_image_conversion<         yiq_t,      bgr_t >( "./conv/bgr2yiq.tga",       0.5 );
  make_image_conversion<    YPbPr709_t,      bgr_t >( "./conv/bgr2YPbPr709.tga",  0.5 );
  make_image_conversion<      yuv601_t,      bgr_t >( "./conv/bgr2yuv601.tga",    0.5 );
  make_image_conversion<      yuv709_t,      bgr_t >( "./conv/bgr2yuv709.tga",    0.5 );
  make_image_conversion<         xyz_t,      bgr_t >( "./conv/bgr2xyz.tga",       0.5 );
  make_image_conversion<      labCIE_t,      bgr_t >( "./conv/bgr2labCIE.tga",    0.5 );
  make_image_conversion<   labHunter_t,      bgr_t >( "./conv/bgr2labHunter.tga", 0.5 );
  make_image_conversion<         lms_t,      bgr_t >( "./conv/bgr2lms.tga",       0.5 );
  make_image_conversion<         luv_t,      bgr_t >( "./conv/bgr2luv.tga",       0.5 );
  make_image_conversion<       LabCH_t,      bgr_t >( "./conv/bgr2LabCH.tga",     0.5 );
  make_image_conversion<       LuvCH_t,      bgr_t >( "./conv/bgr2LuvCH.tga",     0.5 );
  make_image_conversion<         xyy_t,      bgr_t >( "./conv/bgr2xyy.tga",       0.5 );

  make_image_conversion<         bgr_t,      rgb_t >( "./conv/rgb2bgr.tga",       0.5 );
  make_image_conversion<         cmy_t,      rgb_t >( "./conv/rgb2cmy.tga",       0.5 );
  make_image_conversion<        cmyk_t,      rgb_t >( "./conv/rgb2cmyk.tga",      0.5 );
  make_image_conversion<        gray_t,      rgb_t >( "./conv/rgb2gray.tga",      0.5 );
  make_image_conversion<         rgb_t,      rgb_t >( "./conv/rgb2rgb.tga",       0.5 );
  make_image_conversion<         hsi_t,      rgb_t >( "./conv/rgb2hsi.tga",       0.5 );
  make_image_conversion<         hsl_t,      rgb_t >( "./conv/rgb2hsl.tga",       0.5 );
  make_image_conversion<         hsv_t,      rgb_t >( "./conv/rgb2hsv.tga",       0.5 );
  make_image_conversion<         hwb_t,      rgb_t >( "./conv/rgb2hwb.tga",       0.5 );
  make_image_conversion<       YCgCo_t,      rgb_t >( "./conv/rgb2YCgCo.tga",     0.5 );
  make_image_conversion<       YDbDr_t,      rgb_t >( "./conv/rgb2YDbDr.tga",     0.5 );
  make_image_conversion<         yiq_t,      rgb_t >( "./conv/rgb2yiq.tga",       0.5 );
  make_image_conversion<    YPbPr709_t,      rgb_t >( "./conv/rgb2YPbPr709.tga",  0.5 );
  make_image_conversion<      yuv601_t,      rgb_t >( "./conv/rgb2yuv601.tga",    0.5 );
  make_image_conversion<      yuv709_t,      rgb_t >( "./conv/rgb2yuv709.tga",    0.5 );
  make_image_conversion<         xyz_t,      rgb_t >( "./conv/rgb2xyz.tga",       0.5 );
  make_image_conversion<      labCIE_t,      rgb_t >( "./conv/rgb2labCIE.tga",    0.5 );
  make_image_conversion<   labHunter_t,      rgb_t >( "./conv/rgb2labHunter.tga", 0.5 );
  make_image_conversion<         lms_t,      rgb_t >( "./conv/rgb2lms.tga",       0.5 );
  make_image_conversion<         luv_t,      rgb_t >( "./conv/rgb2luv.tga",       0.5 );
  make_image_conversion<       LabCH_t,      rgb_t >( "./conv/rgb2LabCH.tga",     0.5 );
  make_image_conversion<       LuvCH_t,      rgb_t >( "./conv/rgb2LuvCH.tga",     0.5 );
  make_image_conversion<         xyy_t,      rgb_t >( "./conv/rgb2xyy.tga",       0.5 );

  make_image_conversion<         bgr_t,      cmy_t >( "./conv/cmy2bgr.tga",       0.5 );
  make_image_conversion<         cmy_t,      cmy_t >( "./conv/cmy2cmy.tga",       0.5 );
  make_image_conversion<        cmyk_t,      cmy_t >( "./conv/cmy2cmyk.tga",      0.5 );
  make_image_conversion<        gray_t,      cmy_t >( "./conv/cmy2gray.tga",      0.5 );
  make_image_conversion<         rgb_t,      cmy_t >( "./conv/cmy2rgb.tga",       0.5 );
  make_image_conversion<         hsi_t,      cmy_t >( "./conv/cmy2hsi.tga",       0.5 );
  make_image_conversion<         hsl_t,      cmy_t >( "./conv/cmy2hsl.tga",       0.5 );
  make_image_conversion<         hsv_t,      cmy_t >( "./conv/cmy2hsv.tga",       0.5 );
  make_image_conversion<         hwb_t,      cmy_t >( "./conv/cmy2hwb.tga",       0.5 );
  make_image_conversion<       YCgCo_t,      cmy_t >( "./conv/cmy2YCgCo.tga",     0.5 );
  make_image_conversion<       YDbDr_t,      cmy_t >( "./conv/cmy2YDbDr.tga",     0.5 );
  make_image_conversion<         yiq_t,      cmy_t >( "./conv/cmy2yiq.tga",       0.5 );
  make_image_conversion<    YPbPr709_t,      cmy_t >( "./conv/cmy2YPbPr709.tga",  0.5 );
  make_image_conversion<      yuv601_t,      cmy_t >( "./conv/cmy2yuv601.tga",    0.5 );
  make_image_conversion<      yuv709_t,      cmy_t >( "./conv/cmy2yuv709.tga",    0.5 );
  make_image_conversion<         xyz_t,      cmy_t >( "./conv/cmy2xyz.tga",       0.5 );
  make_image_conversion<      labCIE_t,      cmy_t >( "./conv/cmy2labCIE.tga",    0.5 );
  make_image_conversion<   labHunter_t,      cmy_t >( "./conv/cmy2labHunter.tga", 0.5 );
  make_image_conversion<         lms_t,      cmy_t >( "./conv/cmy2lms.tga",       0.5 );
  make_image_conversion<         luv_t,      cmy_t >( "./conv/cmy2luv.tga",       0.5 );
  make_image_conversion<       LabCH_t,      cmy_t >( "./conv/cmy2LabCH.tga",     0.5 );
  make_image_conversion<       LuvCH_t,      cmy_t >( "./conv/cmy2LuvCH.tga",     0.5 );
  make_image_conversion<         xyy_t,      cmy_t >( "./conv/cmy2xyy.tga",       0.5 );

  make_image_conversion<         bgr_t,     cmyk_t >( "./conv/cmyk2bgr.tga",      0.5 );
  make_image_conversion<         cmy_t,     cmyk_t >( "./conv/cmyk2cmy.tga",      0.5 );
  make_image_conversion<        cmyk_t,     cmyk_t >( "./conv/cmyk2cmyk.tga",     0.5 );
  make_image_conversion<        gray_t,     cmyk_t >( "./conv/cmyk2gray.tga",     0.5 );
  make_image_conversion<         rgb_t,     cmyk_t >( "./conv/cmyk2rgb.tga",      0.5 );
  make_image_conversion<         hsi_t,     cmyk_t >( "./conv/cmyk2hsi.tga",      0.5 );
  make_image_conversion<         hsl_t,     cmyk_t >( "./conv/cmyk2hsl.tga",      0.5 );
  make_image_conversion<         hsv_t,     cmyk_t >( "./conv/cmyk2hsv.tga",      0.5 );
  make_image_conversion<         hwb_t,     cmyk_t >( "./conv/cmyk2hwb.tga",      0.5 );
  make_image_conversion<       YCgCo_t,     cmyk_t >( "./conv/cmyk2YCgCo.tga",    0.5 );
  make_image_conversion<       YDbDr_t,     cmyk_t >( "./conv/cmyk2YDbDr.tga",    0.5 );
  make_image_conversion<         yiq_t,     cmyk_t >( "./conv/cmyk2yiq.tga",      0.5 );
  make_image_conversion<    YPbPr709_t,     cmyk_t >( "./conv/cmyk2YPbPr709.tga", 0.5 );
  make_image_conversion<      yuv601_t,     cmyk_t >( "./conv/cmyk2yuv601.tga",   0.5 );
  make_image_conversion<      yuv709_t,     cmyk_t >( "./conv/cmyk2yuv709.tga",   0.5 );
  make_image_conversion<        xyz_t,      cmyk_t >( "./conv/cmyk2xyz.tga",      0.5 );
  make_image_conversion<     labCIE_t,      cmyk_t >( "./conv/cmyk2labCIE.tga",   0.5 );
  make_image_conversion<  labHunter_t,      cmyk_t >( "./conv/cmyk2labHunter.tga",0.5 );
  make_image_conversion<        lms_t,      cmyk_t >( "./conv/cmyk2lms.tga",      0.5 );
  make_image_conversion<        luv_t,      cmyk_t >( "./conv/cmyk2luv.tga",      0.5 );
  make_image_conversion<      LabCH_t,      cmyk_t >( "./conv/cmyk2LabCH.tga",    0.5 );
  make_image_conversion<      LuvCH_t,      cmyk_t >( "./conv/cmyk2LuvCH.tga",    0.5 );
  make_image_conversion<        xyy_t,      cmyk_t >( "./conv/cmyk2xyy.tga",      0.5 );

  make_image_conversion<         bgr_t,     gray_t >( "./conv/gray2bgr.tga",      0.5 );
  make_image_conversion<         cmy_t,     gray_t >( "./conv/gray2cmy.tga",      0.5 );
  make_image_conversion<        cmyk_t,     gray_t >( "./conv/gray2cmyk.tga",     0.5 );
  make_image_conversion<        gray_t,     gray_t >( "./conv/gray2gray.tga",     0.5 );
  make_image_conversion<         rgb_t,     gray_t >( "./conv/gray2rgb.tga",      0.5 );
  make_image_conversion<         hsi_t,     gray_t >( "./conv/gray2hsi.tga",      0.5 );
  make_image_conversion<         hsl_t,     gray_t >( "./conv/gray2hsl.tga",      0.5 );
  make_image_conversion<         hsv_t,     gray_t >( "./conv/gray2hsv.tga",      0.5 );
  make_image_conversion<         hwb_t,     gray_t >( "./conv/gray2hwb.tga",      0.5 );
  make_image_conversion<       YCgCo_t,     gray_t >( "./conv/gray2YCgCo.tga",    0.5 );
  make_image_conversion<       YDbDr_t,     gray_t >( "./conv/gray2YDbDr.tga",    0.5 );
  make_image_conversion<         yiq_t,     gray_t >( "./conv/gray2yiq.tga",      0.5 );
  make_image_conversion<    YPbPr709_t,     gray_t >( "./conv/gray2YPbPr709.tga", 0.5 );
  make_image_conversion<      yuv601_t,     gray_t >( "./conv/gray2yuv601.tga",   0.5 );
  make_image_conversion<      yuv709_t,     gray_t >( "./conv/gray2yuv709.tga",   0.5 );
  make_image_conversion<         xyz_t,     gray_t >( "./conv/gray2xyz.tga",      0.5 );
  make_image_conversion<      labCIE_t,     gray_t >( "./conv/gray2labCIE.tga",   0.5 );
  make_image_conversion<   labHunter_t,     gray_t >( "./conv/gray2labHunter.tga",0.5 );
  make_image_conversion<         lms_t,     gray_t >( "./conv/gray2lms.tga",      0.5 );
  make_image_conversion<         luv_t,     gray_t >( "./conv/gray2luv.tga",      0.5 );
  make_image_conversion<       LabCH_t,     gray_t >( "./conv/gray2LabCH.tga",    0.5 );
  make_image_conversion<       LuvCH_t,     gray_t >( "./conv/gray2LuvCH.tga",    0.5 );
  make_image_conversion<         xyy_t,     gray_t >( "./conv/gray2xyy.tga",      0.5 );

  make_image_conversion<         bgr_t,      hsi_t >( "./conv/hsi2bgr.tga",       0.5 );
  make_image_conversion<         cmy_t,      hsi_t >( "./conv/hsi2cmy.tga",       0.5 );
  make_image_conversion<        cmyk_t,      hsi_t >( "./conv/hsi2cmyk.tga",      0.5 );
  make_image_conversion<        gray_t,      hsi_t >( "./conv/hsi2gray.tga",      0.5 );
  make_image_conversion<         rgb_t,      hsi_t >( "./conv/hsi2rgb.tga",       0.5 );
  make_image_conversion<         hsi_t,      hsi_t >( "./conv/hsi2hsi.tga",       0.5 );
  make_image_conversion<         hsl_t,      hsi_t >( "./conv/hsi2hsl.tga",       0.5 );
  make_image_conversion<         hsv_t,      hsi_t >( "./conv/hsi2hsv.tga",       0.5 );
  make_image_conversion<         hwb_t,      hsi_t >( "./conv/hsi2hwb.tga",       0.5 );
  make_image_conversion<       YCgCo_t,      hsi_t >( "./conv/hsi2YCgCo.tga",     0.5 );
  make_image_conversion<       YDbDr_t,      hsi_t >( "./conv/hsi2YDbDr.tga",     0.5 );
  make_image_conversion<         yiq_t,      hsi_t >( "./conv/hsi2yiq.tga",       0.5 );
  make_image_conversion<    YPbPr709_t,      hsi_t >( "./conv/hsi2YPbPr709.tga",  0.5 );
  make_image_conversion<      yuv601_t,      hsi_t >( "./conv/hsi2yuv601.tga",    0.5 );
  make_image_conversion<      yuv709_t,      hsi_t >( "./conv/hsi2yuv709.tga",    0.5 );
  make_image_conversion<         xyz_t,      hsi_t >( "./conv/hsi2xyz.tga",       0.5 );
  make_image_conversion<      labCIE_t,      hsi_t >( "./conv/hsi2labCIE.tga",    0.5 );
  make_image_conversion<   labHunter_t,      hsi_t >( "./conv/hsi2labHunter.tga", 0.5 );
  make_image_conversion<         lms_t,      hsi_t >( "./conv/hsi2lms.tga",       0.5 );
  make_image_conversion<         luv_t,      hsi_t >( "./conv/hsi2luv.tga",       0.5 );
  make_image_conversion<       LabCH_t,      hsi_t >( "./conv/hsi2LabCH.tga",     0.5 );
  make_image_conversion<       LuvCH_t,      hsi_t >( "./conv/hsi2LuvCH.tga",     0.5 );
  make_image_conversion<         xyy_t,      hsi_t >( "./conv/hsi2xyy.tga",       0.5 );

  make_image_conversion<         bgr_t,      hsl_t >( "./conv/hsl2bgr.tga",       0.5 );
  make_image_conversion<         cmy_t,      hsl_t >( "./conv/hsl2cmy.tga",       0.5 );
  make_image_conversion<        cmyk_t,      hsl_t >( "./conv/hsl2cmyk.tga",      0.5 );
  make_image_conversion<        gray_t,      hsl_t >( "./conv/hsl2gray.tga",      0.5 );
  make_image_conversion<         rgb_t,      hsl_t >( "./conv/hsl2rgb.tga",       0.5 );
  make_image_conversion<         hsi_t,      hsl_t >( "./conv/hsl2hsi.tga",       0.5 );
  make_image_conversion<         hsl_t,      hsl_t >( "./conv/hsl2hsl.tga",       0.5 );
  make_image_conversion<         hsv_t,      hsl_t >( "./conv/hsl2hsv.tga",       0.5 );
  make_image_conversion<         hwb_t,      hsl_t >( "./conv/hsl2hwb.tga",       0.5 );
  make_image_conversion<       YCgCo_t,      hsl_t >( "./conv/hsl2YCgCo.tga",     0.5 );
  make_image_conversion<       YDbDr_t,      hsl_t >( "./conv/hsl2YDbDr.tga",     0.5 );
  make_image_conversion<         yiq_t,      hsl_t >( "./conv/hsl2yiq.tga",       0.5 );
  make_image_conversion<    YPbPr709_t,      hsl_t >( "./conv/hsl2YPbPr709.tga",  0.5 );
  make_image_conversion<      yuv601_t,      hsl_t >( "./conv/hsl2yuv601.tga",    0.5 );
  make_image_conversion<      yuv709_t,      hsl_t >( "./conv/hsl2yuv709.tga",    0.5 );
  make_image_conversion<         xyz_t,      hsl_t >( "./conv/hsl2xyz.tga",       0.5 );
  make_image_conversion<      labCIE_t,      hsl_t >( "./conv/hsl2labCIE.tga",    0.5 );
  make_image_conversion<   labHunter_t,      hsl_t >( "./conv/hsl2labHunter.tga", 0.5 );
  make_image_conversion<         lms_t,      hsl_t >( "./conv/hsl2lms.tga",       0.5 );
  make_image_conversion<         luv_t,      hsl_t >( "./conv/hsl2luv.tga",       0.5 );
  make_image_conversion<       LabCH_t,      hsl_t >( "./conv/hsl2LabCH.tga",     0.5 );
  make_image_conversion<       LuvCH_t,      hsl_t >( "./conv/hsl2LuvCH.tga",     0.5 );
  make_image_conversion<         xyy_t,      hsl_t >( "./conv/hsl2xyy.tga",       0.5 );

  make_image_conversion<         bgr_t,      hsv_t >( "./conv/hsv2bgr.tga",       0.5 );
  make_image_conversion<         cmy_t,      hsv_t >( "./conv/hsv2cmy.tga",       0.5 );
  make_image_conversion<        cmyk_t,      hsv_t >( "./conv/hsv2cmyk.tga",      0.5 );
  make_image_conversion<        gray_t,      hsv_t >( "./conv/hsv2gray.tga",      0.5 );
  make_image_conversion<         rgb_t,      hsv_t >( "./conv/hsv2rgb.tga",       0.5 );
  make_image_conversion<         hsi_t,      hsv_t >( "./conv/hsv2hsi.tga",       0.5 );
  make_image_conversion<         hsl_t,      hsv_t >( "./conv/hsv2hsl.tga",       0.5 );
  make_image_conversion<         hsv_t,      hsv_t >( "./conv/hsv2hsv.tga",       0.5 );
  make_image_conversion<         hwb_t,      hsv_t >( "./conv/hsv2hwb.tga",       0.5 );
  make_image_conversion<       YCgCo_t,      hsv_t >( "./conv/hsv2YCgCo.tga",     0.5 );
  make_image_conversion<       YDbDr_t,      hsv_t >( "./conv/hsv2YDbDr.tga",     0.5 );
  make_image_conversion<         yiq_t,      hsv_t >( "./conv/hsv2yiq.tga",       0.5 );
  make_image_conversion<    YPbPr709_t,      hsv_t >( "./conv/hsv2YPbPr709.tga",  0.5 );
  make_image_conversion<      yuv601_t,      hsv_t >( "./conv/hsv2yuv601.tga",    0.5 );
  make_image_conversion<      yuv709_t,      hsv_t >( "./conv/hsv2yuv709.tga",    0.5 );
  make_image_conversion<         xyz_t,      hsv_t >( "./conv/hsv2xyz.tga",       0.5 );
  make_image_conversion<      labCIE_t,      hsv_t >( "./conv/hsv2labCIE.tga",    0.5 );
  make_image_conversion<   labHunter_t,      hsv_t >( "./conv/hsv2labHunter.tga", 0.5 );
  make_image_conversion<         lms_t,      hsv_t >( "./conv/hsv2lms.tga",       0.5 );
  make_image_conversion<         luv_t,      hsv_t >( "./conv/hsv2luv.tga",       0.5 );
  make_image_conversion<       LabCH_t,      hsv_t >( "./conv/hsv2LabCH.tga",     0.5 );
  make_image_conversion<       LuvCH_t,      hsv_t >( "./conv/hsv2LuvCH.tga",     0.5 );
  make_image_conversion<         xyy_t,      hsv_t >( "./conv/hsv2xyy.tga",       0.5 );

  make_image_conversion<         bgr_t,      hwb_t >( "./conv/hwb2bgr.tga",       0.5 );
  make_image_conversion<         cmy_t,      hwb_t >( "./conv/hwb2cmy.tga",       0.5 );
  make_image_conversion<        cmyk_t,      hwb_t >( "./conv/hwb2cmyk.tga",      0.5 );
  make_image_conversion<        gray_t,      hwb_t >( "./conv/hwb2gray.tga",      0.5 );
  make_image_conversion<         rgb_t,      hwb_t >( "./conv/hwb2rgb.tga",       0.5 );
  make_image_conversion<         hsi_t,      hwb_t >( "./conv/hwb2hsi.tga",       0.5 );
  make_image_conversion<         hsl_t,      hwb_t >( "./conv/hwb2hsl.tga",       0.5 );
  make_image_conversion<         hsv_t,      hwb_t >( "./conv/hwb2hsv.tga",       0.5 );
  make_image_conversion<         hwb_t,      hwb_t >( "./conv/hwb2hwb.tga",       0.5 );
  make_image_conversion<       YCgCo_t,      hwb_t >( "./conv/hwb2YCgCo.tga",     0.5 );
  make_image_conversion<       YDbDr_t,      hwb_t >( "./conv/hwb2YDbDr.tga",     0.5 );
  make_image_conversion<         yiq_t,      hwb_t >( "./conv/hwb2yiq.tga",       0.5 );
  make_image_conversion<    YPbPr709_t,      hwb_t >( "./conv/hwb2YPbPr709.tga",  0.5 );
  make_image_conversion<      yuv601_t,      hwb_t >( "./conv/hwb2yuv601.tga",    0.5 );
  make_image_conversion<      yuv709_t,      hwb_t >( "./conv/hwb2yuv709.tga",    0.5 );
  make_image_conversion<      labCIE_t,      hwb_t >( "./conv/hwb2labCIE.tga",    0.5 );
  make_image_conversion<   labHunter_t,      hwb_t >( "./conv/hwb2labHunter.tga", 0.5 );
  make_image_conversion<         lms_t,      hwb_t >( "./conv/hwb2lms.tga",       0.5 );
  make_image_conversion<         luv_t,      hwb_t >( "./conv/hwb2luv.tga",       0.5 );
  make_image_conversion<       LabCH_t,      hwb_t >( "./conv/hwb2LabCH.tga",     0.5 );
  make_image_conversion<       LuvCH_t,      hwb_t >( "./conv/hwb2LuvCH.tga",     0.5 );
  make_image_conversion<         xyy_t,      hwb_t >( "./conv/hwb2xyy.tga",       0.5 );
  make_image_conversion<         xyz_t,      hwb_t >( "./conv/hwb2xyz.tga",       0.5 );

  make_image_conversion<         bgr_t,    YCgCo_t >( "./conv/YCgCo2bgr.tga",      0.5 );
  make_image_conversion<         cmy_t,    YCgCo_t >( "./conv/YCgCo2cmy.tga",      0.5 );
  make_image_conversion<        cmyk_t,    YCgCo_t >( "./conv/YCgCo2cmyk.tga",     0.5 );
  make_image_conversion<        gray_t,    YCgCo_t >( "./conv/YCgCo2gray.tga",     0.5 );
  make_image_conversion<         rgb_t,    YCgCo_t >( "./conv/YCgCo2rgb.tga",      0.5 );
  make_image_conversion<         hsi_t,    YCgCo_t >( "./conv/YCgCo2hsi.tga",      0.5 );
  make_image_conversion<         hsl_t,    YCgCo_t >( "./conv/YCgCo2hsl.tga",      0.5 );
  make_image_conversion<         hsv_t,    YCgCo_t >( "./conv/YCgCo2hsv.tga",      0.5 );
  make_image_conversion<         hwb_t,    YCgCo_t >( "./conv/YCgCo2hwb.tga",      0.5 );
  make_image_conversion<       YCgCo_t,    YCgCo_t >( "./conv/YCgCo2YCgCo.tga",    0.5 );
  make_image_conversion<       YDbDr_t,    YCgCo_t >( "./conv/YCgCo2YDbDr.tga",    0.5 );
  make_image_conversion<         yiq_t,    YCgCo_t >( "./conv/YCgCo2yiq.tga",      0.5 );
  make_image_conversion<    YPbPr709_t,    YCgCo_t >( "./conv/YCgCo2YPbPr709.tga", 0.5 );
  make_image_conversion<      yuv601_t,    YCgCo_t >( "./conv/YCgCo2yuv601.tga",   0.5 );
  make_image_conversion<      yuv709_t,    YCgCo_t >( "./conv/YCgCo2yuv709.tga",   0.5 );
  make_image_conversion<      labCIE_t,    YCgCo_t >( "./conv/YCgCo2labCIE.tga",   0.5 );
  make_image_conversion<   labHunter_t,    YCgCo_t >( "./conv/YCgCo2labHunter.tga",0.5 );
  make_image_conversion<         lms_t,    YCgCo_t >( "./conv/YCgCo2lms.tga",      0.5 );
  make_image_conversion<         luv_t,    YCgCo_t >( "./conv/YCgCo2luv.tga",      0.5 );
  make_image_conversion<       LabCH_t,    YCgCo_t >( "./conv/YCgCo2LabCH.tga",    0.5 );
  make_image_conversion<       LuvCH_t,    YCgCo_t >( "./conv/YCgCo2LuvCH.tga",    0.5 );
  make_image_conversion<         xyy_t,    YCgCo_t >( "./conv/YCgCo2xyy.tga",      0.5 );
  make_image_conversion<         xyz_t,    YCgCo_t >( "./conv/YCgCo2xyz.tga",      0.5 );

  make_image_conversion<         bgr_t,    YDbDr_t >( "./conv/YDbDr2bgr.tga",      0.5 );
  make_image_conversion<         cmy_t,    YDbDr_t >( "./conv/YDbDr2cmy.tga",      0.5 );
  make_image_conversion<        cmyk_t,    YDbDr_t >( "./conv/YDbDr2cmyk.tga",     0.5 );
  make_image_conversion<        gray_t,    YDbDr_t >( "./conv/YDbDr2gray.tga",     0.5 );
  make_image_conversion<         rgb_t,    YDbDr_t >( "./conv/YDbDr2rgb.tga",      0.5 );
  make_image_conversion<         hsi_t,    YDbDr_t >( "./conv/YDbDr2hsi.tga",      0.5 );
  make_image_conversion<         hsl_t,    YDbDr_t >( "./conv/YDbDr2hsl.tga",      0.5 );
  make_image_conversion<         hsv_t,    YDbDr_t >( "./conv/YDbDr2hsv.tga",      0.5 );
  make_image_conversion<         hwb_t,    YDbDr_t >( "./conv/YDbDr2hwb.tga",      0.5 );
  make_image_conversion<       YCgCo_t,    YDbDr_t >( "./conv/YDbDr2YCgCo.tga",    0.5 );
  make_image_conversion<       YDbDr_t,    YDbDr_t >( "./conv/YDbDr2YDbDr.tga",    0.5 );
  make_image_conversion<         yiq_t,    YDbDr_t >( "./conv/YDbDr2yiq.tga",      0.5 );
  make_image_conversion<    YPbPr709_t,    YDbDr_t >( "./conv/YDbDr2YPbPr709.tga", 0.5 );
  make_image_conversion<      yuv601_t,    YDbDr_t >( "./conv/YDbDr2yuv601.tga",   0.5 );
  make_image_conversion<      yuv709_t,    YDbDr_t >( "./conv/YDbDr2yuv709.tga",   0.5 );
  make_image_conversion<      labCIE_t,    YDbDr_t >( "./conv/YDbDr2labCIE.tga",   0.5 );
  make_image_conversion<   labHunter_t,    YDbDr_t >( "./conv/YDbDr2labHunter.tga",0.5 );
  make_image_conversion<         lms_t,    YDbDr_t >( "./conv/YDbDr2lms.tga",      0.5 );
  make_image_conversion<         luv_t,    YDbDr_t >( "./conv/YDbDr2luv.tga",      0.5 );
  make_image_conversion<       LabCH_t,    YDbDr_t >( "./conv/YDbDr2LabCH.tga",    0.5 );
  make_image_conversion<       LuvCH_t,    YDbDr_t >( "./conv/YDbDr2LuvCH.tga",    0.5 );
  make_image_conversion<         xyy_t,    YDbDr_t >( "./conv/YDbDr2xyy.tga",      0.5 );
  make_image_conversion<         xyz_t,    YDbDr_t >( "./conv/YDbDr2xyz.tga",      0.5 );

  make_image_conversion<         bgr_t,      yiq_t >( "./conv/yiq2bgr.tga",        0.5 );
  make_image_conversion<         cmy_t,      yiq_t >( "./conv/yiq2cmy.tga",        0.5 );
  make_image_conversion<        cmyk_t,      yiq_t >( "./conv/yiq2cmyk.tga",       0.5 );
  make_image_conversion<        gray_t,      yiq_t >( "./conv/yiq2gray.tga",       0.5 );
  make_image_conversion<         rgb_t,      yiq_t >( "./conv/yiq2rgb.tga",        0.5 );
  make_image_conversion<         hsi_t,      yiq_t >( "./conv/yiq2hsi.tga",        0.5 );
  make_image_conversion<         hsl_t,      yiq_t >( "./conv/yiq2hsl.tga",        0.5 );
  make_image_conversion<         hsv_t,      yiq_t >( "./conv/yiq2hsv.tga",        0.5 );
  make_image_conversion<         hwb_t,      yiq_t >( "./conv/yiq2hwb.tga",        0.5 );
  make_image_conversion<       YCgCo_t,      yiq_t >( "./conv/yiq2YCgCo.tga",      0.5 );
  make_image_conversion<       YDbDr_t,      yiq_t >( "./conv/yiq2YDbDr.tga",      0.5 );
  make_image_conversion<         yiq_t,      yiq_t >( "./conv/yiq2yiq.tga",        0.5 );
  make_image_conversion<    YPbPr709_t,      yiq_t >( "./conv/yiq2YPbPr709.tga",   0.5 );
  make_image_conversion<      yuv601_t,      yiq_t >( "./conv/yiq2yuv601.tga",     0.5 );
  make_image_conversion<      yuv709_t,      yiq_t >( "./conv/yiq2yuv709.tga",     0.5 );
  make_image_conversion<         xyz_t,      yiq_t >( "./conv/yiq2xyz.tga",        0.5 );
  make_image_conversion<      labCIE_t,      yiq_t >( "./conv/yiq2labCIE.tga",     0.5 );
  make_image_conversion<   labHunter_t,      yiq_t >( "./conv/yiq2labHunter.tga",  0.5 );
  make_image_conversion<         lms_t,      yiq_t >( "./conv/yiq2lms.tga",        0.5 );
  make_image_conversion<         luv_t,      yiq_t >( "./conv/yiq2luv.tga",        0.5 );
  make_image_conversion<       LabCH_t,      yiq_t >( "./conv/yiq2LabCH.tga",      0.5 );
  make_image_conversion<       LuvCH_t,      yiq_t >( "./conv/yiq2LuvCH.tga",      0.5 );
  make_image_conversion<         xyy_t,      yiq_t >( "./conv/yiq2xyy.tga",        0.5 );

  make_image_conversion<         bgr_t, YPbPr709_t >( "./conv/YPbPr709_2bgr.tga",      0.5 );
  make_image_conversion<         cmy_t, YPbPr709_t >( "./conv/YPbPr709_2cmy.tga",      0.5 );
  make_image_conversion<        cmyk_t, YPbPr709_t >( "./conv/YPbPr709_2cmyk.tga",     0.5 );
  make_image_conversion<        gray_t, YPbPr709_t >( "./conv/YPbPr709_2gray.tga",     0.5 );
  make_image_conversion<         rgb_t, YPbPr709_t >( "./conv/YPbPr709_2rgb.tga",      0.5 );
  make_image_conversion<         hsi_t, YPbPr709_t >( "./conv/YPbPr709_2hsi.tga",      0.5 );
  make_image_conversion<         hsl_t, YPbPr709_t >( "./conv/YPbPr709_2hsl.tga",      0.5 );
  make_image_conversion<         hsv_t, YPbPr709_t >( "./conv/YPbPr709_2hsv.tga",      0.5 );
  make_image_conversion<         hwb_t, YPbPr709_t >( "./conv/YPbPr709_2hwb.tga",      0.5 );
  make_image_conversion<       YCgCo_t, YPbPr709_t >( "./conv/YPbPr709_2YCgCo.tga",    0.5 );
  make_image_conversion<       YDbDr_t, YPbPr709_t >( "./conv/YPbPr709_2YDbDr.tga",    0.5 );
  make_image_conversion<         yiq_t, YPbPr709_t >( "./conv/YPbPr709_2yiq.tga",      0.5 );
  make_image_conversion<    YPbPr709_t, YPbPr709_t >( "./conv/YPbPr709_2YPbPr709.tga", 0.5 );
  make_image_conversion<      yuv601_t, YPbPr709_t >( "./conv/YPbPr709_2yuv601.tga",   0.5 );
  make_image_conversion<      yuv709_t, YPbPr709_t >( "./conv/YPbPr709_2yuv709.tga",   0.5 );
  make_image_conversion<         xyz_t, YPbPr709_t >( "./conv/YPbPr709_2xyz.tga",      0.5 );
  make_image_conversion<      labCIE_t, YPbPr709_t >( "./conv/YPbPr709_2labCIE.tga",   0.5 );
  make_image_conversion<   labHunter_t, YPbPr709_t >( "./conv/YPbPr709_2labHunter.tga",0.5 );
  make_image_conversion<         lms_t, YPbPr709_t >( "./conv/YPbPr709_2lms.tga",      0.5 );
  make_image_conversion<         luv_t, YPbPr709_t >( "./conv/YPbPr709_2luv.tga",      0.5 );
  make_image_conversion<       LabCH_t, YPbPr709_t >( "./conv/YPbPr709_2LabCH.tga",    0.5 );
  make_image_conversion<       LuvCH_t, YPbPr709_t >( "./conv/YPbPr709_2LuvCH.tga",    0.5 );
  make_image_conversion<         xyy_t, YPbPr709_t >( "./conv/YPbPr709_2xyy.tga",      0.5 );

  make_image_conversion<         bgr_t,   yuv601_t >( "./conv/yuv601_2bgr.tga",        0.5 );
  make_image_conversion<         cmy_t,   yuv601_t >( "./conv/yuv601_2cmy.tga",        0.5 );
  make_image_conversion<        cmyk_t,   yuv601_t >( "./conv/yuv601_2cmyk.tga",       0.5 );
  make_image_conversion<        gray_t,   yuv601_t >( "./conv/yuv601_2gray.tga",       0.5 );
  make_image_conversion<         rgb_t,   yuv601_t >( "./conv/yuv601_2rgb.tga",        0.5 );
  make_image_conversion<         hsi_t,   yuv601_t >( "./conv/yuv601_2hsi.tga",        0.5 );
  make_image_conversion<         hsl_t,   yuv601_t >( "./conv/yuv601_2hsl.tga",        0.5 );
  make_image_conversion<         hsv_t,   yuv601_t >( "./conv/yuv601_2hsv.tga",        0.5 );
  make_image_conversion<         hwb_t,   yuv601_t >( "./conv/yuv601_2hwb.tga",        0.5 );
  make_image_conversion<       YCgCo_t,   yuv601_t >( "./conv/yuv601_2YCgCo.tga",      0.5 );
  make_image_conversion<       YDbDr_t,   yuv601_t >( "./conv/yuv601_2YDbDr.tga",      0.5 );
  make_image_conversion<         yiq_t,   yuv601_t >( "./conv/yuv601_2yiq.tga",        0.5 );
  make_image_conversion<    YPbPr709_t,   yuv601_t >( "./conv/yuv601_2YPbPr709.tga",   0.5 );
  make_image_conversion<      yuv601_t,   yuv601_t >( "./conv/yuv601_2yuv601.tga",     0.5 );
  make_image_conversion<      yuv709_t,   yuv601_t >( "./conv/yuv601_2yuv709.tga",     0.5 );
  make_image_conversion<         xyz_t,   yuv601_t >( "./conv/yuv601_2xyz.tga",        0.5 );
  make_image_conversion<      labCIE_t,   yuv601_t >( "./conv/yuv601_2labCIE.tga",    0.5 );
  make_image_conversion<   labHunter_t,   yuv601_t >( "./conv/yuv601_2labHunter.tga",  0.5 );
  make_image_conversion<         lms_t,   yuv601_t >( "./conv/yuv601_2lms.tga",        0.5 );
  make_image_conversion<         luv_t,   yuv601_t >( "./conv/yuv601_2luv.tga",        0.5 );
  make_image_conversion<       LabCH_t,   yuv601_t >( "./conv/yuv601_2LabCH.tga",      0.5 );
  make_image_conversion<       LuvCH_t,   yuv601_t >( "./conv/yuv601_2LuvCH.tga",      0.5 );
  make_image_conversion<         xyy_t,   yuv601_t >( "./conv/yuv601_2xyy.tga",        0.5 );

  make_image_conversion<         bgr_t,   yuv709_t >( "./conv/yuv709_2bgr.tga",        0.5 );
  make_image_conversion<         cmy_t,   yuv709_t >( "./conv/yuv709_2cmy.tga",        0.5 );
  make_image_conversion<        cmyk_t,   yuv709_t >( "./conv/yuv709_2cmyk.tga",       0.5 );
  make_image_conversion<        gray_t,   yuv709_t >( "./conv/yuv709_2gray.tga",       0.5 );
  make_image_conversion<         rgb_t,   yuv709_t >( "./conv/yuv709_2rgb.tga",        0.5 );
  make_image_conversion<         hsi_t,   yuv709_t >( "./conv/yuv709_2hsi.tga",        0.5 );
  make_image_conversion<         hsl_t,   yuv709_t >( "./conv/yuv709_2hsl.tga",        0.5 );
  make_image_conversion<         hsv_t,   yuv709_t >( "./conv/yuv709_2hsv.tga",        0.5 );
  make_image_conversion<         hwb_t,   yuv709_t >( "./conv/yuv709_2hwb.tga",        0.5 );
  make_image_conversion<       YCgCo_t,   yuv709_t >( "./conv/yuv709_2YCgCo.tga",      0.5 );
  make_image_conversion<       YDbDr_t,   yuv709_t >( "./conv/yuv709_2YDbDr.tga",      0.5 );
  make_image_conversion<         yiq_t,   yuv709_t >( "./conv/yuv709_2yiq.tga",        0.5 );
  make_image_conversion<    YPbPr709_t,   yuv709_t >( "./conv/yuv709_2YPbPr709.tga",   0.5 );
  make_image_conversion<      yuv601_t,   yuv709_t >( "./conv/yuv709_2yuv601.tga",     0.5 );
  make_image_conversion<      yuv709_t,   yuv709_t >( "./conv/yuv709_2yuv709.tga",     0.5 );
  make_image_conversion<        xyz_t,    yuv709_t >( "./conv/yuv709_2xyz.tga",        0.5 );
  make_image_conversion<      labCIE_t,   yuv709_t >( "./conv/yuv709_2labCIE.tga",    0.5 );
  make_image_conversion<   labHunter_t,   yuv709_t >( "./conv/yuv709_2labHunter.tga",  0.5 );
  make_image_conversion<         lms_t,   yuv709_t >( "./conv/yuv709_2lms.tga",        0.5 );
  make_image_conversion<         luv_t,   yuv709_t >( "./conv/yuv709_2luv.tga",        0.5 );
  make_image_conversion<       LabCH_t,   yuv709_t >( "./conv/yuv709_2LabCH.tga",          0.5 );
  make_image_conversion<       LuvCH_t,   yuv709_t >( "./conv/yuv709_2LuvCH.tga",          0.5 );
  make_image_conversion<         xyy_t,   yuv709_t >( "./conv/yuv709_2xyy.tga",        0.5 );
                         
  make_image_conversion<         bgr_t,   labCIE_t >( "./conv/labCIE2bgr.tga",            0.5 );
  make_image_conversion<         cmy_t,   labCIE_t >( "./conv/labCIE2cmy.tga",            0.5 );
  make_image_conversion<        cmyk_t,   labCIE_t >( "./conv/labCIE2cmyk.tga",           0.5 );
  make_image_conversion<        gray_t,   labCIE_t >( "./conv/labCIE2gray.tga",           0.5 );
  make_image_conversion<         rgb_t,   labCIE_t >( "./conv/labCIE2rgb.tga",            0.5 );
  make_image_conversion<         hsi_t,   labCIE_t >( "./conv/labCIE2hsi.tga",            0.5 );
  make_image_conversion<         hsl_t,   labCIE_t >( "./conv/labCIE2hsl.tga",            0.5 );
  make_image_conversion<         hsv_t,   labCIE_t >( "./conv/labCIE2hsv.tga",            0.5 );
  make_image_conversion<         hwb_t,   labCIE_t >( "./conv/labCIE2hwb.tga",            0.5 );
  make_image_conversion<       YCgCo_t,   labCIE_t >( "./conv/labCIE2YCgCo.tga",          0.5 );
  make_image_conversion<       YDbDr_t,   labCIE_t >( "./conv/labCIE2YDbDr.tga",          0.5 );
  make_image_conversion<         yiq_t,   labCIE_t >( "./conv/labCIE2yiq.tga",            0.5 );
  make_image_conversion<    YPbPr709_t,   labCIE_t >( "./conv/labCIE2YPbPr709.tga",       0.5 );
  make_image_conversion<      yuv601_t,   labCIE_t >( "./conv/labCIE2yuv601.tga",         0.5 );
  make_image_conversion<      yuv709_t,   labCIE_t >( "./conv/labCIE2yuv709.tga",         0.5 );
  make_image_conversion<         xyz_t,   labCIE_t >( "./conv/labCIE2xyz.tga",            0.5 );
  make_image_conversion<      labCIE_t,   labCIE_t >( "./conv/labCIE2labCIE.tga",         0.5 );
  make_image_conversion<   labHunter_t,   labCIE_t >( "./conv/labCIE2labHunter.tga",      0.5 );
  make_image_conversion<         lms_t,   labCIE_t >( "./conv/labCIE2lms.tga",            0.5 );
  make_image_conversion<         luv_t,   labCIE_t >( "./conv/labCIE2luv.tga",            0.5 );
  make_image_conversion<       LabCH_t,   labCIE_t >( "./conv/labCIE2LabCH.tga",          0.5 );
  make_image_conversion<       LuvCH_t,   labCIE_t >( "./conv/labCIE2LuvCH.tga",          0.5 );
  make_image_conversion<         xyy_t,   labCIE_t >( "./conv/labCIE2xyy.tga",            0.5 );

  make_image_conversion<         bgr_t,labHunter_t >( "./conv/labHunter2bgr.tga",         0.5 );
  make_image_conversion<         cmy_t,labHunter_t >( "./conv/labHunter2cmy.tga",         0.5 );
  make_image_conversion<        cmyk_t,labHunter_t >( "./conv/labHunter2cmyk.tga",        0.5 );
  make_image_conversion<        gray_t,labHunter_t >( "./conv/labHunter2gray.tga",        0.5 );
  make_image_conversion<         rgb_t,labHunter_t >( "./conv/labHunter2rgb.tga",         0.5 );
  make_image_conversion<         hsi_t,labHunter_t >( "./conv/labHunter2hsi.tga",         0.5 );
  make_image_conversion<         hsl_t,labHunter_t >( "./conv/labHunter2hsl.tga",         0.5 );
  make_image_conversion<         hsv_t,labHunter_t >( "./conv/labHunter2hsv.tga",         0.5 );
  make_image_conversion<         hwb_t,labHunter_t >( "./conv/labHunter2hwb.tga",         0.5 );
  make_image_conversion<       YCgCo_t,labHunter_t >( "./conv/labHunter2YCgCo.tga",       0.5 );
  make_image_conversion<       YDbDr_t,labHunter_t >( "./conv/labHunter2YDbDr.tga",       0.5 );
  make_image_conversion<         yiq_t,labHunter_t >( "./conv/labHunter2yiq.tga",         0.5 );
  make_image_conversion<    YPbPr709_t,labHunter_t >( "./conv/labHunter2YPbPr709.tga",    0.5 );
  make_image_conversion<      yuv601_t,labHunter_t >( "./conv/labHunter2yuv601.tga",      0.5 );
  make_image_conversion<      yuv709_t,labHunter_t >( "./conv/labHunter2yuv709.tga",      0.5 );
  make_image_conversion<         xyz_t,labHunter_t >( "./conv/labHunter2xyz.tga",         0.5 );
  make_image_conversion<      labCIE_t,labHunter_t >( "./conv/labHunter2labCIE.tga",      0.5 );
  make_image_conversion<   labHunter_t,labHunter_t >( "./conv/labHunter2labHunter.tga",   0.5 );
  make_image_conversion<         lms_t,labHunter_t >( "./conv/labHunter2lms.tga",         0.5 );
  make_image_conversion<         luv_t,labHunter_t >( "./conv/labHunter2luv.tga",         0.5 );
  make_image_conversion<       LabCH_t,labHunter_t >( "./conv/labHunter2LabCH.tga",       0.5 );
  make_image_conversion<       LuvCH_t,labHunter_t >( "./conv/labHunter2LuvCH.tga",       0.5 );
  make_image_conversion<         xyy_t,labHunter_t >( "./conv/labHunter2xyy.tga",         0.5 );


  make_image_conversion<         bgr_t,      lms_t >( "./conv/lms2bgr.tga",            0.5 );
  make_image_conversion<         cmy_t,      lms_t >( "./conv/lms2cmy.tga",            0.5 );
  make_image_conversion<        cmyk_t,      lms_t >( "./conv/lms2cmyk.tga",           0.5 );
  make_image_conversion<        gray_t,      lms_t >( "./conv/lms2gray.tga",           0.5 );
  make_image_conversion<         rgb_t,      lms_t >( "./conv/lms2rgb.tga",            0.5 );
  make_image_conversion<         hsi_t,      lms_t >( "./conv/lms2hsi.tga",            0.5 );
  make_image_conversion<         hsl_t,      lms_t >( "./conv/lms2hsl.tga",            0.5 );
  make_image_conversion<         hsv_t,      lms_t >( "./conv/lms2hsv.tga",            0.5 );
  make_image_conversion<         hwb_t,      lms_t >( "./conv/lms2hwb.tga",            0.5 );
  make_image_conversion<       YCgCo_t,      lms_t >( "./conv/lms2YCgCo.tga",          0.5 );
  make_image_conversion<       YDbDr_t,      lms_t >( "./conv/lms2YDbDr.tga",          0.5 );
  make_image_conversion<         yiq_t,      lms_t >( "./conv/lms2yiq.tga",            0.5 );
  make_image_conversion<    YPbPr709_t,      lms_t >( "./conv/lms2YPbPr709.tga",       0.5 );
  make_image_conversion<      yuv601_t,      lms_t >( "./conv/lms2yuv601.tga",         0.5 );
  make_image_conversion<      yuv709_t,      lms_t >( "./conv/lms2yuv709.tga",         0.5 );
  make_image_conversion<         xyz_t,      lms_t >( "./conv/lms2xyz.tga",            0.5 );
  make_image_conversion<      labCIE_t,      lms_t >( "./conv/lms2labCIE.tga",         0.5 );
  make_image_conversion<   labHunter_t,      lms_t >( "./conv/lms2labHunter.tga",      0.5 );
  make_image_conversion<         lms_t,      lms_t >( "./conv/lms2lms.tga",            0.5 );
  make_image_conversion<         luv_t,      lms_t >( "./conv/lms2luv.tga",            0.5 );
  make_image_conversion<       LabCH_t,      lms_t >( "./conv/lms2LabCH.tga",          0.5 );
  make_image_conversion<       LuvCH_t,      lms_t >( "./conv/lms2LuvCH.tga",          0.5 );
  make_image_conversion<         xyy_t,      lms_t >( "./conv/lms2xyy.tga",            0.5 );
                         
  make_image_conversion<         bgr_t,      luv_t >( "./conv/luv2bgr.tga",            0.5 );
  make_image_conversion<         cmy_t,      luv_t >( "./conv/luv2cmy.tga",            0.5 );
  make_image_conversion<        cmyk_t,      luv_t >( "./conv/luv2cmyk.tga",           0.5 );
  make_image_conversion<        gray_t,      luv_t >( "./conv/luv2gray.tga",           0.5 );
  make_image_conversion<         rgb_t,      luv_t >( "./conv/luv2rgb.tga",            0.5 );
  make_image_conversion<         hsi_t,      luv_t >( "./conv/luv2hsi.tga",            0.5 );
  make_image_conversion<         hsl_t,      luv_t >( "./conv/luv2hsl.tga",            0.5 );
  make_image_conversion<         hsv_t,      luv_t >( "./conv/luv2hsv.tga",            0.5 );
  make_image_conversion<         hwb_t,      luv_t >( "./conv/luv2hwb.tga",            0.5 );
  make_image_conversion<       YCgCo_t,      luv_t >( "./conv/luv2YCgCo.tga",          0.5 );
  make_image_conversion<       YDbDr_t,      luv_t >( "./conv/luv2YDbDr.tga",          0.5 );
  make_image_conversion<         yiq_t,      luv_t >( "./conv/luv2yiq.tga",            0.5 );
  make_image_conversion<    YPbPr709_t,      luv_t >( "./conv/luv2YPbPr709.tga",       0.5 );
  make_image_conversion<      yuv601_t,      luv_t >( "./conv/luv2yuv601.tga",         0.5 );
  make_image_conversion<      yuv709_t,      luv_t >( "./conv/luv2yuv709.tga",         0.5 );
  make_image_conversion<         xyz_t,      luv_t >( "./conv/luv2xyz.tga",            0.5 );
  make_image_conversion<      labCIE_t,      luv_t >( "./conv/luv2labCIE.tga",         0.5 );
  make_image_conversion<   labHunter_t,      luv_t >( "./conv/luv2labHunter.tga",      0.5 );
  make_image_conversion<         lms_t,      luv_t >( "./conv/luv2lms.tga",            0.5 );
  make_image_conversion<         luv_t,      luv_t >( "./conv/luv2luv.tga",            0.5 );
  make_image_conversion<       LabCH_t,      luv_t >( "./conv/luv2LabCH.tga",          0.5 );
  make_image_conversion<       LuvCH_t,      luv_t >( "./conv/luv2LuvCH.tga",          0.5 );
  make_image_conversion<         xyy_t,      luv_t >( "./conv/luv2xyy.tga",            0.5 );

  make_image_conversion<         bgr_t,      LuvCH_t >( "./conv/LuvCH2bgr.tga",            0.5 );
  make_image_conversion<         cmy_t,      LuvCH_t >( "./conv/LuvCH2cmy.tga",            0.5 );
  make_image_conversion<        cmyk_t,      LuvCH_t >( "./conv/LuvCH2cmyk.tga",           0.5 );
  make_image_conversion<        gray_t,      LuvCH_t >( "./conv/LuvCH2gray.tga",           0.5 );
  make_image_conversion<         rgb_t,      LuvCH_t >( "./conv/LuvCH2rgb.tga",            0.5 );
  make_image_conversion<         hsi_t,      LuvCH_t >( "./conv/LuvCH2hsi.tga",            0.5 );
  make_image_conversion<         hsl_t,      LuvCH_t >( "./conv/LuvCH2hsl.tga",            0.5 );
  make_image_conversion<         hsv_t,      LuvCH_t >( "./conv/LuvCH2hsv.tga",            0.5 );
  make_image_conversion<         hwb_t,      LuvCH_t >( "./conv/LuvCH2hwb.tga",            0.5 );
  make_image_conversion<       YCgCo_t,      LuvCH_t >( "./conv/LuvCH2YCgCo.tga",          0.5 );
  make_image_conversion<       YDbDr_t,      LuvCH_t >( "./conv/LuvCH2YDbDr.tga",          0.5 );
  make_image_conversion<         yiq_t,      LuvCH_t >( "./conv/LuvCH2yiq.tga",            0.5 );
  make_image_conversion<    YPbPr709_t,      LuvCH_t >( "./conv/LuvCH2YPbPr709.tga",       0.5 );
  make_image_conversion<      yuv601_t,      LuvCH_t >( "./conv/LuvCH2yuv601.tga",         0.5 );
  make_image_conversion<      yuv709_t,      LuvCH_t >( "./conv/LuvCH2yuv709.tga",         0.5 );
  make_image_conversion<         xyz_t,      LuvCH_t >( "./conv/LuvCH2xyz.tga",            0.5 );
  make_image_conversion<      labCIE_t,      LuvCH_t >( "./conv/LuvCH2labCIE.tga",         0.5 );
  make_image_conversion<   labHunter_t,      LuvCH_t >( "./conv/LuvCH2labHunter.tga",      0.5 );
  make_image_conversion<         lms_t,      LuvCH_t >( "./conv/LuvCH2lms.tga",            0.5 );
  make_image_conversion<         luv_t,      LuvCH_t >( "./conv/LuvCH2luv.tga",            0.5 );
  make_image_conversion<       LabCH_t,      LuvCH_t >( "./conv/LuvCH2LabCH.tga",          0.5 );
  make_image_conversion<       LuvCH_t,      LuvCH_t >( "./conv/LuvCH2LuvCH.tga",          0.5 );
  make_image_conversion<         xyy_t,      LuvCH_t >( "./conv/LuvCH2xyy.tga",            0.5 );

  make_image_conversion<         bgr_t,      LabCH_t >( "./conv/LabCH2bgr.tga",            0.5 );
  make_image_conversion<         cmy_t,      LabCH_t >( "./conv/LabCH2cmy.tga",            0.5 );
  make_image_conversion<        cmyk_t,      LabCH_t >( "./conv/LabCH2cmyk.tga",           0.5 );
  make_image_conversion<        gray_t,      LabCH_t >( "./conv/LabCH2gray.tga",           0.5 );
  make_image_conversion<         rgb_t,      LabCH_t >( "./conv/LabCH2rgb.tga",            0.5 );
  make_image_conversion<         hsi_t,      LabCH_t >( "./conv/LabCH2hsi.tga",            0.5 );
  make_image_conversion<         hsl_t,      LabCH_t >( "./conv/LabCH2hsl.tga",            0.5 );
  make_image_conversion<         hsv_t,      LabCH_t >( "./conv/LabCH2hsv.tga",            0.5 );
  make_image_conversion<         hwb_t,      LabCH_t >( "./conv/LabCH2hwb.tga",            0.5 );
  make_image_conversion<       YCgCo_t,      LabCH_t >( "./conv/LabCH2YCgCo.tga",          0.5 );
  make_image_conversion<       YDbDr_t,      LabCH_t >( "./conv/LabCH2YDbDr.tga",          0.5 );
  make_image_conversion<         yiq_t,      LabCH_t >( "./conv/LabCH2yiq.tga",            0.5 );
  make_image_conversion<    YPbPr709_t,      LabCH_t >( "./conv/LabCH2YPbPr709.tga",       0.5 );
  make_image_conversion<      yuv601_t,      LabCH_t >( "./conv/LabCH2yuv601.tga",         0.5 );
  make_image_conversion<      yuv709_t,      LabCH_t >( "./conv/LabCH2yuv709.tga",         0.5 );
  make_image_conversion<         xyz_t,      LabCH_t >( "./conv/LabCH2xyz.tga",            0.5 );
  make_image_conversion<      labCIE_t,      LabCH_t >( "./conv/LabCH2labCIE.tga",         0.5 );
  make_image_conversion<   labHunter_t,      LabCH_t >( "./conv/LabCH2labHunter.tga",      0.5 );
  make_image_conversion<         lms_t,      LabCH_t >( "./conv/LabCH2lms.tga",            0.5 );
  make_image_conversion<         luv_t,      LabCH_t >( "./conv/LabCH2luv.tga",            0.5 );
  make_image_conversion<       LabCH_t,      LabCH_t >( "./conv/LabCH2LabCH.tga",          0.5 );
  make_image_conversion<       LuvCH_t,      LabCH_t >( "./conv/LabCH2LuvCH.tga",          0.5 );
  make_image_conversion<         xyy_t,      LabCH_t >( "./conv/LabCH2xyy.tga",            0.5 );

  make_image_conversion<         bgr_t,      xyy_t >( "./conv/xyy2bgr.tga",            0.5 );
  make_image_conversion<         cmy_t,      xyy_t >( "./conv/xyy2cmy.tga",            0.5 );
  make_image_conversion<        cmyk_t,      xyy_t >( "./conv/xyy2cmyk.tga",           0.5 );
  make_image_conversion<        gray_t,      xyy_t >( "./conv/xyy2gray.tga",           0.5 );
  make_image_conversion<         rgb_t,      xyy_t >( "./conv/xyy2rgb.tga",            0.5 );
  make_image_conversion<         hsi_t,      xyy_t >( "./conv/xyy2hsi.tga",            0.5 );
  make_image_conversion<         hsl_t,      xyy_t >( "./conv/xyy2hsl.tga",            0.5 );
  make_image_conversion<         hsv_t,      xyy_t >( "./conv/xyy2hsv.tga",            0.5 );
  make_image_conversion<         hwb_t,      xyy_t >( "./conv/xyy2hwb.tga",            0.5 );
  make_image_conversion<       YCgCo_t,      xyy_t >( "./conv/xyy2YCgCo.tga",          0.5 );
  make_image_conversion<       YDbDr_t,      xyy_t >( "./conv/xyy2YDbDr.tga",          0.5 );
  make_image_conversion<         yiq_t,      xyy_t >( "./conv/xyy2yiq.tga",            0.5 );
  make_image_conversion<    YPbPr709_t,      xyy_t >( "./conv/xyy2YPbPr709.tga",       0.5 );
  make_image_conversion<      yuv601_t,      xyy_t >( "./conv/xyy2yuv601.tga",         0.5 );
  make_image_conversion<      yuv709_t,      xyy_t >( "./conv/xyy2yuv709.tga",         0.5 );
  make_image_conversion<      labCIE_t,      xyy_t >( "./conv/xyy2labCIE.tga",         0.5 );
  make_image_conversion<   labHunter_t,      xyy_t >( "./conv/xyy2labHunter.tga",      0.5 );
  make_image_conversion<         lms_t,      xyy_t >( "./conv/xyy2lms.tga",            0.5 );
  make_image_conversion<         luv_t,      xyy_t >( "./conv/xyy2luv.tga",            0.5 );
  make_image_conversion<       LabCH_t,      xyy_t >( "./conv/xyy2LabCH.tga",          0.5 );
  make_image_conversion<       LuvCH_t,      xyy_t >( "./conv/xyy2LuvCH.tga",          0.5 );
  make_image_conversion<         xyy_t,      xyy_t >( "./conv/xyy2xyy.tga",            0.5 );
  make_image_conversion<         xyz_t,      xyy_t >( "./conv/xyy2xyz.tga",            0.5 );

  make_image_conversion<         bgr_t,      xyz_t >( "./conv/xyz2bgr.tga",            0.5 );
  make_image_conversion<         cmy_t,      xyz_t >( "./conv/xyz2cmy.tga",            0.5 );
  make_image_conversion<        cmyk_t,      xyz_t >( "./conv/xyz2cmyk.tga",           0.5 );
  make_image_conversion<        gray_t,      xyz_t >( "./conv/xyz2gray.tga",           0.5 );
  make_image_conversion<         rgb_t,      xyz_t >( "./conv/xyz2rgb.tga",            0.5 );
  make_image_conversion<         hsi_t,      xyz_t >( "./conv/xyz2hsi.tga",            0.5 );
  make_image_conversion<         hsl_t,      xyz_t >( "./conv/xyz2hsl.tga",            0.5 );
  make_image_conversion<         hsv_t,      xyz_t >( "./conv/xyz2hsv.tga",            0.5 );
  make_image_conversion<         hwb_t,      xyz_t >( "./conv/xyz2hwb.tga",            0.5 );
  make_image_conversion<       YCgCo_t,      xyz_t >( "./conv/xyz2YCgCo.tga",          0.5 );
  make_image_conversion<       YDbDr_t,      xyz_t >( "./conv/xyz2YDbDr.tga",          0.5 );
  make_image_conversion<         yiq_t,      xyz_t >( "./conv/xyz2yiq.tga",            0.5 );
  make_image_conversion<    YPbPr709_t,      xyz_t >( "./conv/xyz2YPbPr709.tga",       0.5 );
  make_image_conversion<      yuv601_t,      xyz_t >( "./conv/xyz2yuv601.tga",         0.5 );
  make_image_conversion<      yuv709_t,      xyz_t >( "./conv/xyz2yuv709.tga",         0.5 );
  make_image_conversion<      labCIE_t,      xyz_t >( "./conv/xyz2labCIE.tga",         0.5 );
  make_image_conversion<   labHunter_t,      xyz_t >( "./conv/xyz2labHunter.tga",      0.5 );
  make_image_conversion<         lms_t,      xyz_t >( "./conv/xyz2lms.tga",            0.5 );
  make_image_conversion<         luv_t,      xyz_t >( "./conv/xyz2luv.tga",            0.5 );
  make_image_conversion<       LabCH_t,      xyz_t >( "./conv/xyz2LabCH.tga",          0.5 );
  make_image_conversion<       LuvCH_t,      xyz_t >( "./conv/xyz2LuvCH.tga",          0.5 );
  make_image_conversion<         xyy_t,      xyz_t >( "./conv/xyz2xyy.tga",            0.5 );
  make_image_conversion<         xyz_t,      xyz_t >( "./conv/xyz2xyz.tga",            0.5 );

  make_image_conversion<         bgr_t,      LabCH_t >( "./conv/LabCH2bgr.tga",            0.5 );
  make_image_conversion<         cmy_t,      LabCH_t >( "./conv/LabCH2cmy.tga",            0.5 );
  make_image_conversion<        cmyk_t,      LabCH_t >( "./conv/LabCH2cmyk.tga",           0.5 );
  make_image_conversion<        gray_t,      LabCH_t >( "./conv/LabCH2gray.tga",           0.5 );
  make_image_conversion<         rgb_t,      LabCH_t >( "./conv/LabCH2rgb.tga",            0.5 );
  make_image_conversion<         hsi_t,      LabCH_t >( "./conv/LabCH2hsi.tga",            0.5 );
  make_image_conversion<         hsl_t,      LabCH_t >( "./conv/LabCH2hsl.tga",            0.5 );
  make_image_conversion<         hsv_t,      LabCH_t >( "./conv/LabCH2hsv.tga",            0.5 );
  make_image_conversion<         hwb_t,      LabCH_t >( "./conv/LabCH2hwb.tga",            0.5 );
  make_image_conversion<       YCgCo_t,      LabCH_t >( "./conv/LabCH2YCgCo.tga",          0.5 );
  make_image_conversion<       YDbDr_t,      LabCH_t >( "./conv/LabCH2YDbDr.tga",          0.5 );
  make_image_conversion<         yiq_t,      LabCH_t >( "./conv/LabCH2yiq.tga",            0.5 );
  make_image_conversion<    YPbPr709_t,      LabCH_t >( "./conv/LabCH2YPbPr709.tga",       0.5 );
  make_image_conversion<      yuv601_t,      LabCH_t >( "./conv/LabCH2yuv601.tga",         0.5 );
  make_image_conversion<      yuv709_t,      LabCH_t >( "./conv/LabCH2yuv709.tga",         0.5 );
  make_image_conversion<       LabCH_t,      LabCH_t >( "./conv/LabCH2LabCH.tga",          0.5 );
  make_image_conversion<       LuvCH_t,      LabCH_t >( "./conv/LabCH2LuvCH.tga",          0.5 );
  make_image_conversion<      labCIE_t,      LabCH_t >( "./conv/LabCH2labCIE.tga",         0.5 );
  make_image_conversion<   labHunter_t,      LabCH_t >( "./conv/LabCH2labHunter.tga",      0.5 );
  make_image_conversion<         lms_t,      LabCH_t >( "./conv/LabCH2lms.tga",            0.5 );
  make_image_conversion<         luv_t,      LabCH_t >( "./conv/LabCH2luv.tga",            0.5 );
  make_image_conversion<         xyy_t,      LabCH_t >( "./conv/LabCH2xyy.tga",            0.5 );
  make_image_conversion<         xyz_t,      LabCH_t >( "./conv/LabCH2xyz.tga",            0.5 );

  make_image_conversion<         bgr_t,      LuvCH_t >( "./conv/LuvCH2bgr.tga",            0.5 );
  make_image_conversion<         cmy_t,      LuvCH_t >( "./conv/LuvCH2cmy.tga",            0.5 );
  make_image_conversion<        cmyk_t,      LuvCH_t >( "./conv/LuvCH2cmyk.tga",           0.5 );
  make_image_conversion<        gray_t,      LuvCH_t >( "./conv/LuvCH2gray.tga",           0.5 );
  make_image_conversion<         rgb_t,      LuvCH_t >( "./conv/LuvCH2rgb.tga",            0.5 );
  make_image_conversion<         hsi_t,      LuvCH_t >( "./conv/LuvCH2hsi.tga",            0.5 );
  make_image_conversion<         hsl_t,      LuvCH_t >( "./conv/LuvCH2hsl.tga",            0.5 );
  make_image_conversion<         hsv_t,      LuvCH_t >( "./conv/LuvCH2hsv.tga",            0.5 );
  make_image_conversion<         hwb_t,      LuvCH_t >( "./conv/LuvCH2hwb.tga",            0.5 );
  make_image_conversion<       YCgCo_t,      LuvCH_t >( "./conv/LuvCH2YCgCo.tga",          0.5 );
  make_image_conversion<       YDbDr_t,      LuvCH_t >( "./conv/LuvCH2YDbDr.tga",          0.5 );
  make_image_conversion<         yiq_t,      LuvCH_t >( "./conv/LuvCH2yiq.tga",            0.5 );
  make_image_conversion<    YPbPr709_t,      LuvCH_t >( "./conv/LuvCH2YPbPr709.tga",       0.5 );
  make_image_conversion<      yuv601_t,      LuvCH_t >( "./conv/LuvCH2yuv601.tga",         0.5 );
  make_image_conversion<      yuv709_t,      LuvCH_t >( "./conv/LuvCH2yuv709.tga",         0.5 );
  make_image_conversion<       LabCH_t,      LuvCH_t >( "./conv/LuvCH2LabCH.tga",          0.5 );
  make_image_conversion<       LuvCH_t,      LuvCH_t >( "./conv/LuvCH2LuvCH.tga",          0.5 );
  make_image_conversion<      labCIE_t,      LuvCH_t >( "./conv/LuvCH2labCIE.tga",         0.5 );
  make_image_conversion<   labHunter_t,      LuvCH_t >( "./conv/LuvCHlabHunter.tga",      0.5 );
  make_image_conversion<         lms_t,      LuvCH_t >( "./conv/LuvCH2lms.tga",            0.5 );
  make_image_conversion<         luv_t,      LuvCH_t >( "./conv/LuvCH2luv.tga",            0.5 );
  make_image_conversion<         xyy_t,      LuvCH_t >( "./conv/LuvCH2xyy.tga",            0.5 );
  make_image_conversion<         xyz_t,      LuvCH_t >( "./conv/LuvCH2xyz.tga",            0.5 );

 }
