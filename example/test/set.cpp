#include <iomanip>
#include <iostream>

#include "./model/set.hpp"

void test_set()
 {
  test_generic_set<::color::category::rgb_uint8>( 0.5 );
  test_generic_set<::color::category::rgb_uint16>( 0.5 );
  test_generic_set<::color::category::rgb_uint32>( 0.5 );
  test_generic_set<::color::category::rgb_uint64>( 0.5 );
  test_generic_set<::color::category::rgb_float>( 0.5 );
  test_generic_set<::color::category::rgb_double>( 0.5 );

  test_generic_set<::color::category::hsl_uint8>( 0.5 );
  test_generic_set<::color::category::hsl_uint16>( 0.5 );
  test_generic_set<::color::category::hsl_uint32>( 0.5 );
  test_generic_set<::color::category::hsl_uint64>( 0.5 );
  test_generic_set<::color::category::hsl_float>( 0.5 );
  test_generic_set<::color::category::hsl_double>( 0.5 );

  test_generic_set<::color::category::cmy_uint8>( 0.5 );
  test_generic_set<::color::category::cmy_uint16>( 0.5 );
  test_generic_set<::color::category::cmy_uint32>( 0.5 );
  test_generic_set<::color::category::cmy_uint64>( 0.5 );
  test_generic_set<::color::category::cmy_float>( 0.5 );
  test_generic_set<::color::category::cmy_double>( 0.5 );
 }


