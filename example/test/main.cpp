
#include "color/color.hpp"

#include "./model/invoke.hpp"
#include "./model/operation.hpp"
#include "./model/make.hpp"
#include "./model/intrisic_conversion.hpp"
#include "./model/set.hpp"
#include "./model/get.hpp"

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

  //test_invoke< color::category::rgb_uint8   >();
  test_invoke< color::category::rgb_uint16  >();
  test_invoke< color::category::rgb_uint32  >();
  test_invoke< color::category::rgb_uint64  >();
  test_invoke< color::category::rgb_float   >();
  test_invoke< color::category::rgb_double  >();
  test_invoke< color::category::rgb_ldouble >();

  //test_operation< color::category::rgb_uint8   >();
  test_operation< color::category::rgb_uint16  >();
  test_operation< color::category::rgb_uint32  >();
  test_operation< color::category::rgb_uint64  >();
  test_operation< color::category::rgb_float   >();
  test_operation< color::category::rgb_double  >();
  test_operation< color::category::rgb_ldouble >();

  //test_make< color::category::rgb_uint8   >();
  test_make< color::category::rgb_uint16  >();
  test_make< color::category::rgb_uint32  >();
  test_make< color::category::rgb_uint64  >();
  test_make< color::category::rgb_float   >();
  test_make< color::category::rgb_double  >();
  test_make< color::category::rgb_ldouble >();

  test_intrisic_conversion< color::rgb >();
  test_intrisic_conversion< color::gray >();

  //test_get< color::category::rgb_uint8  >();
  test_get< color::category::rgb_uint16 >();
  test_get< color::category::rgb_uint32 >();
  test_get< color::category::rgb_uint64 >();
  test_get< color::category::rgb_float  >();
  test_get< color::category::rgb_double >();
  test_get< color::category::rgb_ldouble>();

  //test_set< color::category::rgb_uint8   >();
  test_set< color::category::rgb_uint16  >( 6 );
  test_set< color::category::rgb_uint32  >(   50  );
  test_set< color::category::rgb_uint64  >( 1500  );
  test_set< color::category::rgb_float   >( 0.76  );
  test_set< color::category::rgb_double  >( 1.99  );
  test_set< color::category::rgb_ldouble >( 0.256 );

  // Problem !!!!
  color::gray<std::uint64_t> g2( { 64, 127 , 192} );

  test_set< color::category::gray_bool  >( true );
  test_set< color::category::gray_uint8   >( 128 );
  test_set< color::category::gray_uint16  >( 12812 );
  test_set< color::category::gray_uint32  >(   50  );
  test_set< color::category::gray_uint64  >( 1500  );
  test_set< color::category::gray_float   >( 0.76  );
  test_set< color::category::gray_double  >( 1.99  );
  test_set< color::category::gray_ldouble >( 0.256 );

  {
   color::rgb<bool>           c0( { true, false, false} );
   color::rgb<float>          c1( { 0.5, 0.6,0.7}  );
   color::rgb<std::uint64_t>  c2( { 64, 127 , 192} );
   color::rgb<std::uint32_t>  c3( { 64, 127 , 192} );
   color::rgb<std::uint16_t>  c4( { 64, 127 , 192} );
   color::rgb<std::uint8_t>   c5( { 64, 127 , 192} );
  }
  return 0;
 }
