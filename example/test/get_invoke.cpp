#include <iomanip>
#include <iostream>
#include <typeinfo>

#include "./model/get.hpp"


void test_get_invoke( double value )
 {
  using namespace ::color::category;

  test_generic_get< cmy_uint8   >(); test_generic_get< cmyk_uint8   >(); test_generic_get< rgb_uint8   >();
  test_generic_get< cmy_uint16  >(); test_generic_get< cmyk_uint16  >(); test_generic_get< rgb_uint16  >();
  test_generic_get< cmy_uint32  >(); test_generic_get< cmyk_uint32  >(); test_generic_get< rgb_uint32  >();
  test_generic_get< cmy_uint64  >(); test_generic_get< cmyk_uint64  >(); test_generic_get< rgb_uint64  >();
  test_generic_get< cmy_float   >(); test_generic_get< cmyk_float   >(); test_generic_get< rgb_float   >();
  test_generic_get< cmy_double  >(); test_generic_get< cmyk_double  >(); test_generic_get< rgb_double  >();
  test_generic_get< cmy_ldouble >(); test_generic_get< cmyk_ldouble >(); test_generic_get< rgb_ldouble >();

  test_generic_get< gray_uint8   >();
  test_generic_get< gray_uint16  >();
  test_generic_get< gray_uint32  >();
  test_generic_get< gray_uint64  >();
  test_generic_get< gray_float   >();
  test_generic_get< gray_double  >();
  test_generic_get< gray_ldouble >();

  test_generic_get< hsi_uint8   >(); test_generic_get< hsi_uint8   >(); test_generic_get< hsl_uint8   >(); test_generic_get< hsv_uint8   >(); test_generic_get< hwb_uint8   >();
  test_generic_get< hsi_uint16  >(); test_generic_get< hsi_uint16  >(); test_generic_get< hsl_uint16  >(); test_generic_get< hsv_uint16  >(); test_generic_get< hwb_uint16  >();
  test_generic_get< hsi_uint32  >(); test_generic_get< hsi_uint32  >(); test_generic_get< hsl_uint32  >(); test_generic_get< hsv_uint32  >(); test_generic_get< hwb_uint32  >();
  test_generic_get< hsi_uint64  >(); test_generic_get< hsi_uint64  >(); test_generic_get< hsl_uint64  >(); test_generic_get< hsv_uint64  >(); test_generic_get< hwb_uint64  >();
  test_generic_get< hsi_float   >(); test_generic_get< hsi_float   >(); test_generic_get< hsl_float   >(); test_generic_get< hsv_float   >(); test_generic_get< hwb_float   >();
  test_generic_get< hsi_double  >(); test_generic_get< hsi_double  >(); test_generic_get< hsl_double  >(); test_generic_get< hsv_double  >(); test_generic_get< hwb_double  >();
  test_generic_get< hsi_ldouble >(); test_generic_get< hsi_ldouble >(); test_generic_get< hsl_ldouble >(); test_generic_get< hsv_ldouble >(); test_generic_get< hwb_ldouble >();

  test_generic_get< yiq_uint8   >();  test_generic_get< YDbDr_uint8   >();  test_generic_get< YCgCo_uint8   >();
  test_generic_get< yiq_uint16  >();  test_generic_get< YDbDr_uint16  >();  test_generic_get< YCgCo_uint16  >();
  test_generic_get< yiq_uint32  >();  test_generic_get< YDbDr_uint32  >();  test_generic_get< YCgCo_uint32  >();
  test_generic_get< yiq_uint64  >();  test_generic_get< YDbDr_uint64  >();  test_generic_get< YCgCo_uint64  >();
  test_generic_get< yiq_float   >();  test_generic_get< YDbDr_float   >();  test_generic_get< YCgCo_float   >();
  test_generic_get< yiq_double  >();  test_generic_get< YDbDr_double  >();  test_generic_get< YCgCo_double  >();
  test_generic_get< yiq_ldouble >();  test_generic_get< YDbDr_ldouble >();  test_generic_get< YCgCo_ldouble >();

  test_generic_get< xyz_uint8   >();  test_generic_get< xyy_uint8   >();
  test_generic_get< xyz_uint16  >();  test_generic_get< xyy_uint16  >();
  test_generic_get< xyz_uint32  >();  test_generic_get< xyy_uint32  >();
  test_generic_get< xyz_uint64  >();  test_generic_get< xyy_uint64  >();
  test_generic_get< xyz_float   >();  test_generic_get< xyy_float   >();
  test_generic_get< xyz_double  >();  test_generic_get< xyy_double  >();
  test_generic_get< xyz_ldouble >();  test_generic_get< xyy_ldouble >();

  test_generic_get< luv_uint8   >();   test_generic_get< LuvCH_uint8   >();
  test_generic_get< luv_uint16  >();   test_generic_get< LuvCH_uint16  >();
  test_generic_get< luv_uint32  >();   test_generic_get< LuvCH_uint32  >();
  test_generic_get< luv_uint64  >();   test_generic_get< LuvCH_uint64  >();

  test_generic_get< luv_float   >();   test_generic_get< LuvCH_float   >();
  test_generic_get< luv_double  >();   test_generic_get< LuvCH_double  >();
  test_generic_get< luv_ldouble >();   test_generic_get< LuvCH_ldouble >();

  test_generic_get< lab_uint8  <> >();  
  test_generic_get< LabCH_uint8   >();
  test_generic_get< lab_uint16 <> >();  test_generic_get< LabCH_uint16  >();
  test_generic_get< lab_uint32 <> >();  test_generic_get< LabCH_uint32  >();
  test_generic_get< lab_uint64 <> >();  test_generic_get< LabCH_uint64  >();
  test_generic_get< lab_float  <> >();  test_generic_get< LabCH_float   >();
  test_generic_get< lab_double <> >();  test_generic_get< LabCH_double  >();
  test_generic_get< lab_ldouble<> >();  test_generic_get< LabCH_ldouble >();

  test_generic_get< yuv_uint8  <::color::constant::yuv::BT_601_entity> >(); 
  test_generic_get< yuv_uint16 <::color::constant::yuv::BT_601_entity> >(); 
  test_generic_get< yuv_uint32 <::color::constant::yuv::BT_601_entity> >(); 
  test_generic_get< yuv_uint64 <::color::constant::yuv::BT_601_entity> >(); 
  test_generic_get< yuv_float  <::color::constant::yuv::BT_601_entity> >(); 
  test_generic_get< yuv_double <::color::constant::yuv::BT_601_entity> >(); 
  test_generic_get< yuv_ldouble<::color::constant::yuv::BT_601_entity> >(); 

  test_generic_get< YPbPr_uint8  <::color::constant::YPbPr::BT_2020_entity> >(); 
  test_generic_get< YPbPr_uint16 <::color::constant::YPbPr::BT_2020_entity> >(); 
  test_generic_get< YPbPr_uint32 <::color::constant::YPbPr::BT_2020_entity> >(); 
  test_generic_get< YPbPr_uint64 <::color::constant::YPbPr::BT_2020_entity> >(); 
  test_generic_get< YPbPr_float  <::color::constant::YPbPr::BT_2020_entity> >(); 
  test_generic_get< YPbPr_double <::color::constant::YPbPr::BT_2020_entity> >(); 
  test_generic_get< YPbPr_ldouble<::color::constant::YPbPr::BT_2020_entity> >(); 

  test_generic_get< lms_uint8  <::color::constant::lms::von_Kries_D65_entity> >(); 
  test_generic_get< lms_uint16 <::color::constant::lms::von_Kries_D65_entity> >(); 
  test_generic_get< lms_uint32 <::color::constant::lms::von_Kries_D65_entity> >(); 
  test_generic_get< lms_uint64 <::color::constant::lms::von_Kries_D65_entity> >(); 
  test_generic_get< lms_float  <::color::constant::lms::von_Kries_D65_entity> >(); 
  test_generic_get< lms_double <::color::constant::lms::von_Kries_D65_entity> >(); 
  test_generic_get< lms_ldouble<::color::constant::lms::von_Kries_D65_entity> >(); 
 }