#include <iostream>
#include <iomanip>
#include <sstream>

#include <string>
#include <vector>
#include <typeinfo>

#include "color/color.hpp"

#include "../targa.hpp"

#include "../image.hpp"

template
 <
   enum ::color::constant::distance::reference_enum reference_number
  ,typename category_left_name
  ,typename category_right_name
 >
void test_operation_distance_from
 (
   bgr_image_type const& image, std::size_t const& width, std::size_t const& height
  ,::color::model<category_right_name> const& right
  , double const& scale
  ,std::string const& output
 )
 {
  gray_image_type  distance; distance.reserve( image.size() );

  for( auto & pixel : image )
   {
    auto d = ::color::operation::distance< reference_number >( ::color::model<category_left_name>( pixel ), right );

    d *= scale;

    if( 1 < d ) d = 1;

    distance.push_back( gray_color_type( std::uint8_t( 255 * ( 1 - d ) ) ) );
   }

   save_image_gray( output, distance, width, height );
 }

void test_operation_any2any()
 {
  typedef ::color::cmy<double>            cmy_t;             cmy_t           cmy;
  typedef ::color::cmyk<double>          cmyk_t;            cmyk_t          cmyk;

  typedef ::color::gray<double>          gray_t;            gray_t          gray;

  typedef ::color::rgb<double>            rgb_t;             rgb_t           rgb = ::color::constant::aquamarine_t{};
  typedef ::color::bgr<double>            bgr_t;             bgr_t           bgr = ::color::constant::orange_t{};

  typedef ::color::hsi<double>            hsi_t;             hsi_t           hsi;
  typedef ::color::hsl<double>            hsl_t;             hsl_t           hsl;
  typedef ::color::hsv<double>            hsv_t;             hsv_t           hsv;
  typedef ::color::hwb<double>            hwb_t;             hwb_t           hwb;

  typedef ::color::YCgCo<double>        YCgCo_t;           YCgCo_t         YCgCo;
  typedef ::color::YDbDr<double>        YDbDr_t;           YDbDr_t         YDbDr;
  typedef ::color::yiq<double>            yiq_t;             yiq_t           yiq;
  typedef ::color::YPbPr<double>     YPbPr709_t;        YPbPr709_t      YPbPr709;

  typedef ::color::yuv<double>         yuv709_t;          yuv709_t        yuv709;
  typedef ::color::yuv<double, ::color::constant::yuv::BT_601_entity >  yuv601_t;  yuv601_t  yuv601;

  typedef ::color::lab<double>            lab_t;

  typedef ::color::lms<double, ::color::constant::lms::von_Kries_D65_entity>   lms_t;         lms_t          lms;
  typedef ::color::lms<double, ::color::constant::lms::von_Kries_E_entity  >   lmsKE_t;       lmsKE_t       lmsKE;
  typedef ::color::lms<double, ::color::constant::lms::BFD_entity          >   lmsBFD_t;      lmsBFD_t      lmsBFD;
  typedef ::color::lms<double, ::color::constant::lms::MCAT02_entity       >   lmsMC2_t;      lmsMC2_t      lmsMC2;

  typedef ::color::luv<double>         luv_t;
  typedef ::color::LabCH<double>     LabCH_t;
  typedef ::color::LuvCH<double>     LuvCH_t;

  typedef ::color::xyy<double>         xyy_t;
  typedef ::color::xyz<double>         xyz_t;

   rgb_t rgbA; rgbA.container( {1, 0.0, 0.0 } );
   rgb_t rgbB; rgbB.container( {0, 1.0, 1.0 } );
   rgb_t rgbC; rgbC.container( {0, 0.0, 1.0 } );
   rgb_t rgbD; rgbD.container( {0, 1.0, 0.0 } );
   rgb_t rgbE; rgbE.container( {1, 0.5, 0.0} );
   rgb_t rgbF; rgbF.container( {1, 0.0 ,0.5} );

  ::color::operation::distance< ::color::constant::distance::CMC1984_entity >( bgr, rgb, 1, 2 );
  ::color::operation::distance< ::color::constant::distance::CMC1984_entity >( bgr, rgb, 1, 2 );
  ::color::operation::distance< ::color::constant::distance::CMC1984_entity >( bgr, rgb, 1, 2 );
  ::color::operation::distance< ::color::constant::distance::CMC1984_entity >( bgr, rgb, 1, 2 );
  ::color::operation::distance< ::color::constant::distance::CMC1984_entity >( bgr, rgb, 1, 2 );

  ::color::operation::distance< ::color::constant::distance::CIE76_entity >( bgr, rgb );
  ::color::operation::distance< ::color::constant::distance::CIE76_entity >( bgr, rgb );
  ::color::operation::distance< ::color::constant::distance::CIE76_entity >( bgr, rgb );
  ::color::operation::distance< ::color::constant::distance::CIE76_entity >( bgr, rgb );
  ::color::operation::distance< ::color::constant::distance::CIE76_entity >( bgr, rgb );

  ::color::operation::distance< ::color::constant::distance::CIE94__base_entity >( bgr, rgb, 1, 2, 3 );
  ::color::operation::distance< ::color::constant::distance::CIE94__base_entity >( bgr, rgb, 1, 2, 3 );
  ::color::operation::distance< ::color::constant::distance::CIE94__base_entity >( bgr, rgb, 1, 2, 3 );
  ::color::operation::distance< ::color::constant::distance::CIE94__base_entity >( bgr, rgb, 1, 2, 3 );
  ::color::operation::distance< ::color::constant::distance::CIE94__base_entity >( bgr, rgb, 1, 2, 3 );

  ::color::operation::distance< ::color::constant::distance::CIE94_graphics_entity >( bgr, rgb );
  ::color::operation::distance< ::color::constant::distance::CIE94_graphics_entity >( bgr, rgb );
  ::color::operation::distance< ::color::constant::distance::CIE94_graphics_entity >( bgr, rgb );
  ::color::operation::distance< ::color::constant::distance::CIE94_graphics_entity >( bgr, rgb );
  ::color::operation::distance< ::color::constant::distance::CIE94_graphics_entity >( bgr, rgb );

  ::color::operation::distance< ::color::constant::distance::CIE94_textile_entity >( bgr, rgb );
  ::color::operation::distance< ::color::constant::distance::CIE94_textile_entity >( bgr, rgb );
  ::color::operation::distance< ::color::constant::distance::CIE94_textile_entity >( bgr, rgb );
  ::color::operation::distance< ::color::constant::distance::CIE94_textile_entity >( bgr, rgb );
  ::color::operation::distance< ::color::constant::distance::CIE94_textile_entity >( bgr, rgb );

  ::color::operation::distance< ::color::constant::distance::CIEDE2000_entity >( bgr, rgb );
  ::color::operation::distance< ::color::constant::distance::CIEDE2000_entity >( bgr, rgb );
  ::color::operation::distance< ::color::constant::distance::CIEDE2000_entity >( bgr, rgb );
  ::color::operation::distance< ::color::constant::distance::CIEDE2000_entity >( bgr, rgb );
  ::color::operation::distance< ::color::constant::distance::CIEDE2000_entity >( bgr, rgb );

 }
template
 <
   enum ::color::constant::distance::reference_enum reference_number
  ,typename category_name
 >
void test_operation_distance_zero()
 {
  typedef ::color::model< category_name > model_type;
  typedef typename model_type::bound_type bound_type;

  double dmax = -1e6;
  for( auto c0 = bound_type::minimum(0); c0 < bound_type::maximum(0); c0 += (bound_type::maximum(0) - bound_type::minimum(0))/255)
   {
    for( auto c1 = bound_type::minimum(1); c1 < bound_type::maximum(1); c1 += (bound_type::maximum(1) - bound_type::minimum(1))/255)
     {
      for( auto c2 = bound_type::minimum(0); c2 < bound_type::maximum(0); c2 += (bound_type::maximum(2) - bound_type::minimum(2))/255)
       {
        auto m = model_type{ c0, c1, c2 };
        auto d = ::color::operation::distance< reference_number >( m, m );
        if( dmax < d )
         {
          dmax = d;
         }
       }
     }
   }

  std::cout <<  __FUNCTION__<< std::endl;
  std::cout << "    "<< typeid(reference_number).name() << std::endl;
  std::cout << "    "<< reference_number << std::endl;
  std::cout << "     max error: " << dmax << std::endl;
 }


void test_operation_zero_main()
 {
  typedef ::color::rgb<double>::category_type            rgb_t;

  test_operation_distance_zero< ::color::constant::distance::euclid_entity,         rgb_t >();
  test_operation_distance_zero< ::color::constant::distance::CIE76_entity,          rgb_t >();
  test_operation_distance_zero< ::color::constant::distance::CIE94_graphics_entity, rgb_t >();
  test_operation_distance_zero< ::color::constant::distance::CIE94_textile_entity,  rgb_t >();
  test_operation_distance_zero< ::color::constant::distance::CIEDE2000_entity,      rgb_t >();
  test_operation_distance_zero< ::color::constant::distance::CMC1984_entity,        rgb_t >();
  test_operation_distance_zero< ::color::constant::distance::delta_gray_entity,     rgb_t >();
  test_operation_distance_zero< ::color::constant::distance::hsl_special_entity,    rgb_t >();

  test_operation_distance_zero< ::color::constant::distance::rgb_special_entity,    rgb_t >();
 }

void test_operation_distance__all()
 {
  test_operation_any2any();

  typedef ::color::rgb<double>::category_type            rgb_t;
  bgr_image_type image;
  int width=1000;
  int height=1000;

  if( false == load_image( image, width, height, "./palette/hsl-1-100.tga" ) )
   {
    std::cout << "Can not load" <<  "hsl-1-100.tga" << std::endl;
   }

  test_operation_distance_from< ::color::constant::distance::euclid_entity,         rgb_t >( image, width, height, ::color::rgb<double>{ 0,1,1}, 1.00,    "./operation/dist_euclid_rgb2rgb.tga"     );
  test_operation_distance_from< ::color::constant::distance::CIE76_entity,          rgb_t >( image, width, height, ::color::rgb<double>{ 0,1,1}, 0.015,   "./operation/dist_CIE76_rgb2rgb.tga"      );
  test_operation_distance_from< ::color::constant::distance::CIE94_graphics_entity, rgb_t >( image, width, height, ::color::rgb<double>{ 0,1,1}, 0.02,    "./operation/dist_CIE94g_rgb2rgb.tga"     );
  test_operation_distance_from< ::color::constant::distance::CIE94_textile_entity,  rgb_t >( image, width, height, ::color::rgb<double>{ 0,1,1}, 0.02,    "./operation/dist_CIE94t_rgb2rgb.tga"     );
  test_operation_distance_from< ::color::constant::distance::CIEDE2000_entity,      rgb_t >( image, width, height, ::color::rgb<double>{ 0,1,1}, 0.03,    "./operation/dist_CIEDE2000_rgb2rgb.tga"  );
  test_operation_distance_from< ::color::constant::distance::delta_gray_entity,     rgb_t >( image, width, height, ::color::rgb<double>{ 0,1,1}, 3.00,    "./operation/dist_deltaG_rgb2rgb.tga"     );
  test_operation_distance_from< ::color::constant::distance::hsl_special_entity,    rgb_t >( image, width, height, ::color::rgb<double>{ 0,1,1}, 1119.00, "./operation/dist_hslS_rgb2rgb.tga"       );
  test_operation_distance_from< ::color::constant::distance::rgb_special_entity,    rgb_t >( image, width, height, ::color::rgb<double>{ 0,1,1}, 1.00,    "./operation/dist_rgbS_rgb2rgb.tga"       );

  test_operation_zero_main();

}
