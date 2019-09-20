#include <iomanip>
#include <iostream>

#include "color/color.hpp"

#include "print.hpp"

using namespace color::operation::arithmetic;

void test_rgb_float_only()
 {
  color::rgb<float>   f;
  f.get(0);
  f.get<0>();
  float ff = f[0];
  f.container();
  // long names discourage usage of it directly.
  color::operation::addition( f,f,f);
  color::operation::addition( f, f);
  color::operation::subtract( f,f,f);
  color::operation::subtract( f, f);
  color::operation::invert( f,f);
  color::operation::invert( f);
  color::operation::scale( f , 0.5 );
  color::operation::scale( f , 0.5, f );
  color::operation::median( f , 0.5, f );
  color::operation::median( f , f, 0.5, f );


  color::operation::convex( f , 0.5, f , f );
  color::operation::convex( f , 0.5, f, 0.1 , f , f );
  color::operation::convex( f , 0.5, f, 0.1 , f ,  0.1 , f, f );


  f = f + f;
  f = f - f;
  f += f;
  f -= f;
  f /= 0.5;
  f *= 0.5;
 }

void test_rgb_uint32_only()
 {
  ::color::rgb<double>   u32;
  ::color::rgb<double>   u32a;
  ::color::rgb<double>   u32b;
  ::color::rgb<double>   u32c;

  u32.get(0);
  u32.get<0>();
  unsigned uu = u32[0];
  u32.container();
  u32.set( 0, 25 );
  u32.set<0>( 26 );
  u32.set( 1, 27 );
  u32.set<1>( 28 );
  u32.set( 2, 29 );
  u32.set<2>( 30 );

  // long names discourage usage of it directly.
  color::operation::addition( u32a, u32b, u32c );
  color::operation::addition( u32a, u32b );
  color::operation::subtract( u32a, u32b, u32c );
  color::operation::subtract( u32a, u32b );
  color::operation::invert( u32a, u32b );
  color::operation::invert( u32a );
  color::operation::scale( u32a, 0.5 );
  color::operation::scale( u32a, 0.5, u32b );
  color::operation::convex( u32a, 0.5, u32b );
  color::operation::convex( u32a, u32b, 0.5, u32c );
  u32a = u32b + u32c;
  u32a = u32b - u32c;
  u32a += u32b;
  u32a -= u32b;
  u32a /= 0.5;
  u32a *= 0.5;
 }

void test_rgb_conversion_intrisic()
 {
  color::rgb_double  d;
  color::rgb_float   f;
  color::rgb_uint32 u32;

  d = d;
  d = f;
  d = u32;

  d.set(0,0.5);
  d.set(1,0.5);
  d.set(2,0.5);
  f = d;
  f = f;
  f = u32;

  u32 = d;
  u32 = f;
  u32 = u32;

}

