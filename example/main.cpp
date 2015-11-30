#include "../src/color.hpp"
#include "../src/generic/operation/operation.hpp"

using namespace color::operation::arithmetic;


int main(int argc, char const *argv[])
 {
  color::rgb_double d;
  color::rgb_float f;
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
  
  f += color::rgb_float( d );
  


  return 0;
 }