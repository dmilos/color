#include <iomanip>
#include <iostream>

#include "./model/set.hpp"

void test_set_invoke()
 {
  test_generic_set<::color::category::rgb_uint8>( 0.5 );
  test_generic_set<::color::category::rgb_uint16>( 0.5 );
  test_generic_set<::color::category::rgb_uint32>( 0.5 );
  test_generic_set<::color::category::rgb_uint64>( 0.5 );
  test_generic_set<::color::category::rgb_float>( 0.5 );
  test_generic_set<::color::category::rgb_double>( 0.5 );

  test_generic_set<::color::category::cmy_uint8>( 0.5 );
  test_generic_set<::color::category::cmy_uint16>( 0.5 );
  test_generic_set<::color::category::cmy_uint32>( 0.5 );
  test_generic_set<::color::category::cmy_uint64>( 0.5 );
  test_generic_set<::color::category::cmy_float>( 0.5 );
  test_generic_set<::color::category::cmy_double>( 0.5 );

  test_generic_set<::color::category::cmyk_uint8>( 0.5 );
  test_generic_set<::color::category::cmyk_uint16>( 0.5 );
  test_generic_set<::color::category::cmyk_uint32>( 0.5 );
  test_generic_set<::color::category::cmyk_uint64>( 0.5 );
  test_generic_set<::color::category::cmyk_float>( 0.5 );
  test_generic_set<::color::category::cmyk_double>( 0.5 );

  test_generic_set<::color::category::gray_uint8>( 0.5 );
  test_generic_set<::color::category::gray_uint16>( 0.5 );
  test_generic_set<::color::category::gray_uint32>( 0.5 );
  test_generic_set<::color::category::gray_uint64>( 0.5 );
  test_generic_set<::color::category::gray_float>( 0.5 );
  test_generic_set<::color::category::gray_double>( 0.5 );


  test_generic_set<::color::category::hsl_uint8>( 0.5 );
  test_generic_set<::color::category::hsl_uint16>( 0.5 );
  test_generic_set<::color::category::hsl_uint32>( 0.5 );
  test_generic_set<::color::category::hsl_uint64>( 0.5 );
  test_generic_set<::color::category::hsl_float>( 0.5 );
  test_generic_set<::color::category::hsl_double>( 0.5 );

  test_generic_set<::color::category::hsv_uint8>( 0.5 );
  test_generic_set<::color::category::hsv_uint16>( 0.5 );
  test_generic_set<::color::category::hsv_uint32>( 0.5 );
  test_generic_set<::color::category::hsv_uint64>( 0.5 );
  test_generic_set<::color::category::hsv_float>( 0.5 );
  test_generic_set<::color::category::hsv_double>( 0.5 );

  test_generic_set<::color::category::hsi_uint8>( 0.5 );
  test_generic_set<::color::category::hsi_uint16>( 0.5 );
  test_generic_set<::color::category::hsi_uint32>( 0.5 );
  test_generic_set<::color::category::hsi_uint64>( 0.5 );
  test_generic_set<::color::category::hsi_float>( 0.5 );
  test_generic_set<::color::category::hsi_double>( 0.5 );

  test_generic_set<::color::category::yiq_uint8>( 0.5 );
  test_generic_set<::color::category::yiq_uint16>( 0.5 );
  test_generic_set<::color::category::yiq_uint32>( 0.5 );
  test_generic_set<::color::category::yiq_uint64>( 0.5 );
  test_generic_set<::color::category::yiq_float>( 0.5 );
  test_generic_set<::color::category::yiq_double>( 0.5 );

  //test_generic_set<::color::category::yuv_uint8>( 0.5 );
  //test_generic_set<::color::category::yuv_uint16>( 0.5 );
  //test_generic_set<::color::category::yuv_uint32>( 0.5 );
  //test_generic_set<::color::category::yuv_uint64>( 0.5 );
  //test_generic_set<::color::category::yuv_float>( 0.5 );
  //test_generic_set<::color::category::yuv_double>( 0.5 );

  test_generic_set<::color::category::xyz_uint8>( 0.5 );
  test_generic_set<::color::category::xyz_uint16>( 0.5 );
  test_generic_set<::color::category::xyz_uint32>( 0.5 );
  test_generic_set<::color::category::xyz_uint64>( 0.5 );
  test_generic_set<::color::category::xyz_float>( 0.5 );
  test_generic_set<::color::category::xyz_double>( 0.5 );


}


