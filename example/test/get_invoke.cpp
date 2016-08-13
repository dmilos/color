#include <iomanip>
#include <iostream>

#include "./model/get.hpp"


void test_get_invoke( double value )
 {
  test_generic_get< ::color::category::rgb_uint8   >();
  test_generic_get< ::color::category::rgb_uint16  >();
  test_generic_get< ::color::category::rgb_uint32  >();
  test_generic_get< ::color::category::rgb_uint64  >();
  test_generic_get< ::color::category::rgb_float   >();
  test_generic_get< ::color::category::rgb_double  >();
  test_generic_get< ::color::category::rgb_ldouble >();

  test_generic_get< ::color::category::gray_uint8   >();
  test_generic_get< ::color::category::gray_uint16  >();
  test_generic_get< ::color::category::gray_uint32  >();
  test_generic_get< ::color::category::gray_uint64  >();
  test_generic_get< ::color::category::gray_float   >();
  test_generic_get< ::color::category::gray_double  >();
  test_generic_get< ::color::category::gray_ldouble >();

  test_generic_get< ::color::category::cmy_uint8   >();
  test_generic_get< ::color::category::cmy_uint16  >();
  test_generic_get< ::color::category::cmy_uint32  >();
  test_generic_get< ::color::category::cmy_uint64  >();
  test_generic_get< ::color::category::cmy_float   >();
  test_generic_get< ::color::category::cmy_double  >();
  test_generic_get< ::color::category::cmy_ldouble >();

  test_generic_get< ::color::category::cmyk_uint8   >();
  test_generic_get< ::color::category::cmyk_uint16  >();
  test_generic_get< ::color::category::cmyk_uint32  >();
  test_generic_get< ::color::category::cmyk_uint64  >();
  test_generic_get< ::color::category::cmyk_float   >();
  test_generic_get< ::color::category::cmyk_double  >();
  test_generic_get< ::color::category::cmyk_ldouble >();

  test_generic_get< ::color::category::hsv_uint8   >();
  test_generic_get< ::color::category::hsv_uint16  >();
  test_generic_get< ::color::category::hsv_uint32  >();
  test_generic_get< ::color::category::hsv_uint64  >();
  test_generic_get< ::color::category::hsv_float   >();
  test_generic_get< ::color::category::hsv_double  >();
  test_generic_get< ::color::category::hsv_ldouble >();

  test_generic_get< ::color::category::hsi_uint8   >();
  test_generic_get< ::color::category::hsi_uint16  >();
  test_generic_get< ::color::category::hsi_uint32  >();
  test_generic_get< ::color::category::hsi_uint64  >();
  test_generic_get< ::color::category::hsi_float   >();
  test_generic_get< ::color::category::hsi_double  >();
  test_generic_get< ::color::category::hsi_ldouble >();


// TODO YUV, YPbPr, etc
 }