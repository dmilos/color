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
 }


