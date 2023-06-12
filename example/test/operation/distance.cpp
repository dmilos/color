#include <iostream>
#include <iomanip>
#include <sstream>

#include <string>
#include <vector>
#include <typeinfo>

#include "color/color.hpp"

#include "../targa.hpp"

#include "../image.hpp"


void distance_check_hue_euclid(  )
 {
  typedef ::color::hsl<double> hsl_t;

  std::cout << __FUNCTION__ << std::endl;
  std::cout << "{ 60,50,50}, {120,50,50}: "<<::color::operation::distance< ::color::constant::distance::hue_euclid_entity >( hsl_t{ 60,50,50}, hsl_t{120,50,50} ) << std::endl;
  std::cout << "{120,50,50}, { 60,50,50}: "<<::color::operation::distance< ::color::constant::distance::hue_euclid_entity >( hsl_t{120,50,50}, hsl_t{ 60,50,50} ) << std::endl;
  std::cout << "-" << std::endl;
  std::cout << "{ 60,50,50}, {180,50,50}: "<<::color::operation::distance< ::color::constant::distance::hue_euclid_entity >( hsl_t{ 60,50,50}, hsl_t{180,50,50} ) << std::endl;
  std::cout << "{180,50,50}, { 60,50,50}: "<<::color::operation::distance< ::color::constant::distance::hue_euclid_entity >( hsl_t{180,50,50}, hsl_t{ 60,50,50} ) << std::endl;
  std::cout << "-" << std::endl;
  std::cout << "{ 60,50,50}, {240,50,50}: "<<::color::operation::distance< ::color::constant::distance::hue_euclid_entity >( hsl_t{ 60,50,50}, hsl_t{240,50,50} ) << std::endl;
  std::cout << "{240,50,50}, { 60,50,50}: "<<::color::operation::distance< ::color::constant::distance::hue_euclid_entity >( hsl_t{240,50,50}, hsl_t{ 60,50,50} ) << std::endl;
  std::cout << "-" << std::endl;
  std::cout << "{ 60,50,50}, {300,50,50}: "<<::color::operation::distance< ::color::constant::distance::hue_euclid_entity >( hsl_t{ 60,50,50}, hsl_t{300,50,50} ) << std::endl;
  std::cout << "{300,50,50}, { 60,50,50}: "<<::color::operation::distance< ::color::constant::distance::hue_euclid_entity >( hsl_t{300,50,50}, hsl_t{ 60,50,50} ) << std::endl;
  std::cout << "-" << std::endl;
  std::cout << "{120,50,50}, {180,50,50}: "<<::color::operation::distance< ::color::constant::distance::hue_euclid_entity >( hsl_t{120,50,50}, hsl_t{180,50,50} ) << std::endl;
  std::cout << "{180,50,50}, {120,50,50}: "<<::color::operation::distance< ::color::constant::distance::hue_euclid_entity >( hsl_t{180,50,50}, hsl_t{120,50,50} ) << std::endl;
  std::cout << "-" << std::endl;
  std::cout << "{120,50,50}, {240,50,50}: "<<::color::operation::distance< ::color::constant::distance::hue_euclid_entity >( hsl_t{120,50,50}, hsl_t{240,50,50} ) << std::endl;
  std::cout << "{240,50,50}, {120,50,50}: "<<::color::operation::distance< ::color::constant::distance::hue_euclid_entity >( hsl_t{240,50,50}, hsl_t{120,50,50} ) << std::endl;
  std::cout << "-" << std::endl;
  std::cout << "{120,50,50}, {300,50,50}: "<<::color::operation::distance< ::color::constant::distance::hue_euclid_entity >( hsl_t{120,50,50}, hsl_t{300,50,50} ) << std::endl;
  std::cout << "{300,50,50}, {120,50,50}: "<<::color::operation::distance< ::color::constant::distance::hue_euclid_entity >( hsl_t{300,50,50}, hsl_t{120,50,50} ) << std::endl;
  std::cout << "-" << std::endl;
  std::cout << "{180,50,50}, {240,50,50}: "<<::color::operation::distance< ::color::constant::distance::hue_euclid_entity >( hsl_t{180,50,50}, hsl_t{240,50,50} ) << std::endl;
  std::cout << "{240,50,50}, {180,50,50}: "<<::color::operation::distance< ::color::constant::distance::hue_euclid_entity >( hsl_t{240,50,50}, hsl_t{180,50,50} ) << std::endl;
  std::cout << "-" << std::endl;
  std::cout << "{180,50,50}, {300,50,50}: "<<::color::operation::distance< ::color::constant::distance::hue_euclid_entity >( hsl_t{180,50,50}, hsl_t{300,50,50} ) << std::endl;
  std::cout << "{300,50,50}, {180,50,50}: "<<::color::operation::distance< ::color::constant::distance::hue_euclid_entity >( hsl_t{300,50,50}, hsl_t{180,50,50} ) << std::endl;
  std::cout << "-" << std::endl;
  std::cout << "{240,50,50}, {300,50,50}: "<<::color::operation::distance< ::color::constant::distance::hue_euclid_entity >( hsl_t{240,50,50}, hsl_t{300,50,50} ) << std::endl;
  std::cout << "{300,50,50}, {240,50,50}: "<<::color::operation::distance< ::color::constant::distance::hue_euclid_entity >( hsl_t{300,50,50}, hsl_t{240,50,50} ) << std::endl;
 }

void distance_check_hue_helix(  )
 {
  typedef ::color::hsl<double> hsl_t;

  std::cout << __FUNCTION__ << std::endl;
  std::cout << "{ 60,50,50}, {120,50,50}: "<<::color::operation::distance< ::color::constant::distance::hue_helix_entity >( hsl_t{ 60,50,50}, hsl_t{120,50,50} ) << std::endl;
  std::cout << "{120,50,50}, { 60,50,50}: "<<::color::operation::distance< ::color::constant::distance::hue_helix_entity >( hsl_t{120,50,50}, hsl_t{ 60,50,50} ) << std::endl;
  std::cout << "-" << std::endl;
  std::cout << "{ 60,50,50}, {180,50,50}: "<<::color::operation::distance< ::color::constant::distance::hue_helix_entity >( hsl_t{ 60,50,50}, hsl_t{180,50,50} ) << std::endl;
  std::cout << "{180,50,50}, { 60,50,50}: "<<::color::operation::distance< ::color::constant::distance::hue_helix_entity >( hsl_t{180,50,50}, hsl_t{ 60,50,50} ) << std::endl;
  std::cout << "-" << std::endl;
  std::cout << "{ 60,50,50}, {240,50,50}: "<<::color::operation::distance< ::color::constant::distance::hue_helix_entity >( hsl_t{ 60,50,50}, hsl_t{240,50,50} ) << std::endl;
  std::cout << "{240,50,50}, { 60,50,50}: "<<::color::operation::distance< ::color::constant::distance::hue_helix_entity >( hsl_t{240,50,50}, hsl_t{ 60,50,50} ) << std::endl;
  std::cout << "-" << std::endl;
  std::cout << "{ 60,50,50}, {300,50,50}: "<<::color::operation::distance< ::color::constant::distance::hue_helix_entity >( hsl_t{ 60,50,50}, hsl_t{300,50,50} ) << std::endl;
  std::cout << "{300,50,50}, { 60,50,50}: "<<::color::operation::distance< ::color::constant::distance::hue_helix_entity >( hsl_t{300,50,50}, hsl_t{ 60,50,50} ) << std::endl;
  std::cout << "-" << std::endl;
  std::cout << "{120,50,50}, {180,50,50}: "<<::color::operation::distance< ::color::constant::distance::hue_helix_entity >( hsl_t{120,50,50}, hsl_t{180,50,50} ) << std::endl;
  std::cout << "{180,50,50}, {120,50,50}: "<<::color::operation::distance< ::color::constant::distance::hue_helix_entity >( hsl_t{180,50,50}, hsl_t{120,50,50} ) << std::endl;
  std::cout << "-" << std::endl;
  std::cout << "{120,50,50}, {240,50,50}: "<<::color::operation::distance< ::color::constant::distance::hue_helix_entity >( hsl_t{120,50,50}, hsl_t{240,50,50} ) << std::endl;
  std::cout << "{240,50,50}, {120,50,50}: "<<::color::operation::distance< ::color::constant::distance::hue_helix_entity >( hsl_t{240,50,50}, hsl_t{120,50,50} ) << std::endl;
  std::cout << "-" << std::endl;
  std::cout << "{120,50,50}, {300,50,50}: "<<::color::operation::distance< ::color::constant::distance::hue_helix_entity >( hsl_t{120,50,50}, hsl_t{300,50,50} ) << std::endl;
  std::cout << "{300,50,50}, {120,50,50}: "<<::color::operation::distance< ::color::constant::distance::hue_helix_entity >( hsl_t{300,50,50}, hsl_t{120,50,50} ) << std::endl;
  std::cout << "-" << std::endl;
  std::cout << "{180,50,50}, {240,50,50}: "<<::color::operation::distance< ::color::constant::distance::hue_helix_entity >( hsl_t{180,50,50}, hsl_t{240,50,50} ) << std::endl;
  std::cout << "{240,50,50}, {180,50,50}: "<<::color::operation::distance< ::color::constant::distance::hue_helix_entity >( hsl_t{240,50,50}, hsl_t{180,50,50} ) << std::endl;
  std::cout << "-" << std::endl;
  std::cout << "{180,50,50}, {300,50,50}: "<<::color::operation::distance< ::color::constant::distance::hue_helix_entity >( hsl_t{180,50,50}, hsl_t{300,50,50} ) << std::endl;
  std::cout << "{300,50,50}, {180,50,50}: "<<::color::operation::distance< ::color::constant::distance::hue_helix_entity >( hsl_t{300,50,50}, hsl_t{180,50,50} ) << std::endl;
  std::cout << "-" << std::endl;
  std::cout << "{240,50,50}, {300,50,50}: "<<::color::operation::distance< ::color::constant::distance::hue_helix_entity >( hsl_t{240,50,50}, hsl_t{300,50,50} ) << std::endl;
  std::cout << "{300,50,50}, {240,50,50}: "<<::color::operation::distance< ::color::constant::distance::hue_helix_entity >( hsl_t{300,50,50}, hsl_t{240,50,50} ) << std::endl;
 }

void distance_check_hue_rgb_helix()
 {
  typedef ::color::hsl<double> hsl_t;

  std::cout << __FUNCTION__ << std::endl;
  std::cout << "{ 60,50,50}, {120,50,50}: "<<::color::operation::distance< ::color::constant::distance::hue_helix_rgb_entity >( hsl_t{ 60,50,50}, hsl_t{120,50,50} ) << std::endl;
  std::cout << "{120,50,50}, { 60,50,50}: "<<::color::operation::distance< ::color::constant::distance::hue_helix_rgb_entity >( hsl_t{120,50,50}, hsl_t{ 60,50,50} ) << std::endl;
  std::cout << "-" << std::endl;
  std::cout << "{ 60,50,50}, {180,50,50}: "<<::color::operation::distance< ::color::constant::distance::hue_helix_rgb_entity >( hsl_t{ 60,50,50}, hsl_t{180,50,50} ) << std::endl;
  std::cout << "{180,50,50}, { 60,50,50}: "<<::color::operation::distance< ::color::constant::distance::hue_helix_rgb_entity >( hsl_t{180,50,50}, hsl_t{ 60,50,50} ) << std::endl;
  std::cout << "-" << std::endl;
  std::cout << "{ 60,50,50}, {240,50,50}: "<<::color::operation::distance< ::color::constant::distance::hue_helix_rgb_entity >( hsl_t{ 60,50,50}, hsl_t{240,50,50} ) << std::endl;
  std::cout << "{240,50,50}, { 60,50,50}: "<<::color::operation::distance< ::color::constant::distance::hue_helix_rgb_entity >( hsl_t{240,50,50}, hsl_t{ 60,50,50} ) << std::endl;
  std::cout << "-" << std::endl;
  std::cout << "{ 60,50,50}, {300,50,50}: "<<::color::operation::distance< ::color::constant::distance::hue_helix_rgb_entity >( hsl_t{ 60,50,50}, hsl_t{300,50,50} ) << std::endl;
  std::cout << "{300,50,50}, { 60,50,50}: "<<::color::operation::distance< ::color::constant::distance::hue_helix_rgb_entity >( hsl_t{300,50,50}, hsl_t{ 60,50,50} ) << std::endl;
  std::cout << "-" << std::endl;
  std::cout << "{120,50,50}, {180,50,50}: "<<::color::operation::distance< ::color::constant::distance::hue_helix_rgb_entity >( hsl_t{120,50,50}, hsl_t{180,50,50} ) << std::endl;
  std::cout << "{180,50,50}, {120,50,50}: "<<::color::operation::distance< ::color::constant::distance::hue_helix_rgb_entity >( hsl_t{180,50,50}, hsl_t{120,50,50} ) << std::endl;
  std::cout << "-" << std::endl;
  std::cout << "{120,50,50}, {240,50,50}: "<<::color::operation::distance< ::color::constant::distance::hue_helix_rgb_entity >( hsl_t{120,50,50}, hsl_t{240,50,50} ) << std::endl;
  std::cout << "{240,50,50}, {120,50,50}: "<<::color::operation::distance< ::color::constant::distance::hue_helix_rgb_entity >( hsl_t{240,50,50}, hsl_t{120,50,50} ) << std::endl;
  std::cout << "-" << std::endl;
  std::cout << "{120,50,50}, {300,50,50}: "<<::color::operation::distance< ::color::constant::distance::hue_helix_rgb_entity >( hsl_t{120,50,50}, hsl_t{300,50,50} ) << std::endl;
  std::cout << "{300,50,50}, {120,50,50}: "<<::color::operation::distance< ::color::constant::distance::hue_helix_rgb_entity >( hsl_t{300,50,50}, hsl_t{120,50,50} ) << std::endl;
  std::cout << "-" << std::endl;
  std::cout << "{180,50,50}, {240,50,50}: "<<::color::operation::distance< ::color::constant::distance::hue_helix_rgb_entity >( hsl_t{180,50,50}, hsl_t{240,50,50} ) << std::endl;
  std::cout << "{240,50,50}, {180,50,50}: "<<::color::operation::distance< ::color::constant::distance::hue_helix_rgb_entity >( hsl_t{240,50,50}, hsl_t{180,50,50} ) << std::endl;
  std::cout << "-" << std::endl;
  std::cout << "{180,50,50}, {300,50,50}: "<<::color::operation::distance< ::color::constant::distance::hue_helix_rgb_entity >( hsl_t{180,50,50}, hsl_t{300,50,50}, 0.001 ) << std::endl;
  std::cout << "{300,50,50}, {180,50,50}: "<<::color::operation::distance< ::color::constant::distance::hue_helix_rgb_entity >( hsl_t{300,50,50}, hsl_t{180,50,50}, 0.001 ) << std::endl;
  std::cout << "-" << std::endl;
  std::cout << "{240,50,50}, {300,50,50}: "<<::color::operation::distance< ::color::constant::distance::hue_helix_rgb_entity >( hsl_t{240,50,50}, hsl_t{300,50,50} ) << std::endl;
  std::cout << "{300,50,50}, {240,50,50}: "<<::color::operation::distance< ::color::constant::distance::hue_helix_rgb_entity >( hsl_t{300,50,50}, hsl_t{240,50,50} ) << std::endl;
 }

template
 <
   enum ::color::constant::distance::reference_enum reference_number
  ,typename category_name
 >
void test_operation_distance_from
 (
   bgr_image_type const& image, std::size_t const& width, std::size_t const& height
  ,::color::model<category_name> const& right
  , double const& scale
  ,std::string const& output
 )
 {
  bgr_image_type  distance; distance.reserve( image.size() );
  double maximum = 0;
  std::size_t count = 0;
  for( auto & pixel : image )
   {
    ++count;
    auto dd = ::color::operation::distance< reference_number >( ::color::model<category_name>( pixel ), right );
    auto dr = ::color::operation::distance< reference_number >( right, ::color::model<category_name>( pixel ) );
    
    //if( 0.01 < fabs( dd-dr ) ) 
    // {
    //  distance.push_back( ::color::constant::blue_t{} );
    //  if( 0 == ( count % 4 )  )
    //  continue;
    // }

    maximum = std::max<double>( maximum, dd );
    dd *= scale;

    if( 1 < dd ) dd = 1;
    dd = pow( 1 - dd,  1.5 );
    dd = dd * fabs( sin( 20 * dd * 3.14159265359 / 2.0 ) );

    distance.push_back( bgr_color_type( gray_color_type( std::uint8_t( 255 * dd ) ) ) );
   }

  std::cout << __FUNCTION__ << " - " << reference_number << " - " << output << "; MAX: " << maximum << std::endl;
  save_image24( output, distance, width, height );
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
  typedef ::color::lms<double, ::color::constant::lms::CAT97_entity        >   lmsC97_t;      lmsC97_t      lmsC97;
  typedef ::color::lms<double, ::color::constant::lms::CAT02_entity        >   lmsC20_t;      lmsC20_t      lmsC20;

  typedef ::color::luv<double>         luv_t;
  typedef ::color::LabCH<double>     LabCH_t;
  typedef ::color::LuvCH<double>     LuvCH_t;

  typedef ::color::xyy<double>         xyy_t;
  typedef ::color::xyz<double>         xyz_t;

  typedef ::color::tsl<double>         tsl_t;

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

  ::color::operation::distance< ::color::constant::distance::maxwell_entity >( bgr, rgb );
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
  test_operation_distance_zero< ::color::constant::distance::hue_euclid_entity,     rgb_t >();
  test_operation_distance_zero< ::color::constant::distance::hue_helix_entity,      rgb_t >();
  test_operation_distance_zero< ::color::constant::distance::hue_helix_rgb_entity,  rgb_t >();
  test_operation_distance_zero< ::color::constant::distance::rgb_special_entity,    rgb_t >();
  test_operation_distance_zero< ::color::constant::distance::maxwell_entity,        rgb_t >();
 }

void test_operation_distance__all()
 {
  typedef ::color::rgb<double>::category_type            rgb_t;
  typedef ::color::hsi<double>::category_type            hsi_t;
  typedef ::color::hsl<double>::category_type            hsl_t;
  typedef ::color::hsv<double>::category_type            hsv_t;
  bgr_image_type image;
  int width=1000;
  int height=1000;

  distance_check_hue_euclid();
  distance_check_hue_helix();
  distance_check_hue_rgb_helix();

  std::string root = "z:/work/code/cpp/prj/github/color/work/example/test/out";

  if( false == load_image( image, width, height, root + "/palette/hsl-1-100.tga" ) )
   {
    std::cout << "Can not load" <<  "hsl-1-100.tga" << std::endl;
   }





  test_operation_distance_from< ::color::constant::distance::euclid_entity,         rgb_t >( image, width, height, ::color::rgb<double>{ 0,1,0},  1.5/1.72979,              "./operation/dist_euclid_rgb2rgb.tga"     );

  test_operation_distance_from< ::color::constant::distance::CIE76_entity,          rgb_t >( image, width, height, ::color::rgb<double>{ 0,1,0},  1.5/258.683,       "./operation/dist_CIE76_rgb2rgb.tga"      );

  test_operation_distance_from< ::color::constant::distance::CMC1984_entity,        rgb_t >( image, width, height, ::color::rgb<double>{ 0,1,0},  1.5/206.433,   "./operation/dist_CMC1984_rgb2rgb.tga"     );

  test_operation_distance_from< ::color::constant::distance::CIE94_graphics_entity, rgb_t >( image, width, height, ::color::rgb<double>{ 0,1,0},  1.5/148.471,           "./operation/dist_CIE94g_rgb2rgb.tga"     );
  test_operation_distance_from< ::color::constant::distance::CIE94_textile_entity,  rgb_t >( image, width, height, ::color::rgb<double>{ 0,1,0},  1.5/127.556,           "./operation/dist_CIE94t_rgb2rgb.tga"     );
  test_operation_distance_from< ::color::constant::distance::CIEDE2000_entity,      rgb_t >( image, width, height, ::color::rgb<double>{ 0,1,0},  1.5/155.242,           "./operation/dist_CIEDE2000_rgb2rgb.tga"  );

  test_operation_distance_from< ::color::constant::distance::delta_gray_entity,     rgb_t >( image, width, height, ::color::rgb<double>{ 0,1,0},  1.00/0.999434,           "./operation/dist_deltaG_rgb2rgb.tga"     );

  test_operation_distance_from< ::color::constant::distance::hue_euclid_entity,     hsi_t >( image, width, height, ::color::hsi<double>( ::color::rgb<double>{0,1,0} ),  1.5 / 3.36182,    "./operation/dist_hsiE.tga"      );

  test_operation_distance_from< ::color::constant::distance::hue_euclid_entity,     hsl_t >( image, width, height, ::color::hsl<double>( ::color::rgb<double>{0,1,0} ),  1.5 / 3.24936,    "./operation/dist_hslE.tga"      );

  test_operation_distance_from< ::color::constant::distance::hue_euclid_entity,     hsv_t >( image, width, height, ::color::hsv<double>( ::color::rgb<double>{0,1,0} ),  1.5 / 3.29572,    "./operation/dist_hsvE.tga"      );

  test_operation_distance_from< ::color::constant::distance::hue_helix_entity,      hsi_t >( image, width, height, ::color::hsi<double>( ::color::rgb<double>{0,1,0} ),  1.5 / 360.0,  "./operation/dist_hsiH.tga"      );

  test_operation_distance_from< ::color::constant::distance::hue_helix_entity,      hsl_t >( image, width, height, ::color::hsl<double>( ::color::rgb<double>{0,1,0} ),  1.5 / 360.0,  "./operation/dist_hslH.tga"      );

  test_operation_distance_from< ::color::constant::distance::hue_helix_entity,      hsv_t >( image, width, height, ::color::hsv<double>( ::color::rgb<double>{0,1,0} ),  1.5 / 360.0,  "./operation/dist_hsvH.tga"      );

  test_operation_distance_from< ::color::constant::distance::hue_helix_rgb_entity,  hsi_t >( image, width, height, ::color::hsi<double>( ::color::rgb<double>{0,1,0} ),  1.5 / 3.1415926,    "./operation/dist_hsiHr.tga"      );
  test_operation_distance_from< ::color::constant::distance::hue_helix_rgb_entity,  hsl_t >( image, width, height, ::color::hsl<double>( ::color::rgb<double>{0,1,0} ),  1.5 / 3.1415926,    "./operation/dist_hslHr.tga"      );
  test_operation_distance_from< ::color::constant::distance::hue_helix_rgb_entity,  hsv_t >( image, width, height, ::color::hsv<double>( ::color::rgb<double>{0,1,0} ),  1.5 / 3.1415926,    "./operation/dist_hsvHr.tga"      );

  test_operation_distance_from< ::color::constant::distance::rgb_special_entity,    rgb_t >( image, width, height, ::color::rgb<double>{ 0,1,1},  1.0 / 1.0,           "./operation/dist_rgbS_rgb2rgb.tga"       );
  test_operation_distance_from< ::color::constant::distance::maxwell_entity,        rgb_t >( image, width, height, ::color::rgb<double>{ 0,1,1},  1.0 / 1.0,           "./operation/dist_maxwell_rgb2rgb.tga"       );

  test_operation_any2any();
  test_operation_zero_main();
}
