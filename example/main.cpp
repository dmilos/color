

#include "./model/invoke.hpp"
#include "./model/operation.hpp"
#include "./model/make.hpp"



int main(int argc, char const *argv[])
 {
  color::rgb<std::uint32_t> u32;
  color::rgb<float> f;
  color::rgb<double> d;

  color::make::black(f);
  color::make::gray50(f);
  color::make::white(f);

  f = d;
  u32 = f;

  /*test_invoke< color::category::generic_bool       > ();
  test_invoke< color::category::generic_number  <1> >();
  test_invoke< color::category::generic_uint8   <1> >();
  test_invoke< color::category::generic_uint16  <1> >();
  test_invoke< color::category::generic_uint32  <1> >();
  test_invoke< color::category::generic_uint64  <1> >();
  test_invoke< color::category::generic_float   <1> >();
  test_invoke< color::category::generic_double  <1> >();
  test_invoke< color::category::generic_ldouble <1> >();
  */

  test_invoke< color::category::rgb_uint8   >();
  test_invoke< color::category::rgb_uint16  >();
  test_invoke< color::category::rgb_uint32  >();
  test_invoke< color::category::rgb_uint64  >();
  test_invoke< color::category::rgb_float   >();
  test_invoke< color::category::rgb_double  >();
  test_invoke< color::category::rgb_ldouble >();
  
  test_operation< color::category::rgb_uint8   >();
  test_operation< color::category::rgb_uint16  >();
  test_operation< color::category::rgb_uint32  >();
  test_operation< color::category::rgb_uint64  >();
  test_operation< color::category::rgb_float   >();
  test_operation< color::category::rgb_double  >();
  test_operation< color::category::rgb_ldouble >();

  test_make< color::category::rgb_uint8   >();
  test_make< color::category::rgb_uint16  >();
  test_make< color::category::rgb_uint32  >();
  test_make< color::category::rgb_uint64  >();
  test_make< color::category::rgb_float   >();
  test_make< color::category::rgb_double  >();
  test_make< color::category::rgb_ldouble >();

  return 0;
 }
