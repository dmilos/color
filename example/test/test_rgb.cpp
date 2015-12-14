#include <iomanip>
#include <iostream>

#include "../src/color.hpp"

using namespace color::operation::arithmetic;

void test_rgb_float_only()
 {
  color::rgb_float   f;
  f.get(0);
  f.get<0>();
  float ff = f[0];
  f.container();
  // long names discourage usage of it directly.
  color::operation::addition::full( f,f,f);
  color::operation::addition::accumulate( f, f);
  color::operation::subtract::full( f,f,f);
  color::operation::subtract::accumulate( f, f);
  color::operation::invert::full( f,f);
  color::operation::invert::accumulate( f);
  color::operation::scale::accumulate( f , 0.5 );
  color::operation::scale::full( f , 0.5, f );
  color::operation::convex::accumulate( f , 0.5, f );
  color::operation::convex::full( f , f, 0.5, f );
  f = f + f;
  f = f - f;
  f += f;
  f -= f;
  f /= 0.5;
  f *= 0.5;
 }

void print( color::rgb_uint32 const& u32 )
 {
  std::cout << "[";

   std::cout << " " << u32.get<0>() << ", ";
   std::cout << " " << u32.get<1>() << ", ";
   std::cout << " " << u32.get<2>() << "  ";

  std::cout << "]" << std::endl;
 }

void test_rgb_uint32_only()
 {
  color::rgb_uint32   u32;
  color::rgb_uint32   u32a;
  color::rgb_uint32   u32b;
  color::rgb_uint32   u32c;
  print( u32 );
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
  print( u32 );
  // long names discourage usage of it directly.
  color::operation::addition::full( u32a, u32b, u32c );
  color::operation::addition::accumulate( u32a, u32b );
  color::operation::subtract::full( u32a, u32b, u32c );
  color::operation::subtract::accumulate( u32a, u32b );
  color::operation::invert::full( u32a, u32b );
  color::operation::invert::accumulate( u32a );
  color::operation::scale::accumulate( u32a, 0.5 );
  color::operation::scale::full( u32a, 0.5, u32b );
  color::operation::convex::accumulate( u32a, 0.5, u32b );
  color::operation::convex::full( u32a, u32b, 0.5, u32c );
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

  {
   //auto r = ::color::make::red< ::color::category::rgb_float >();
  }

 }



