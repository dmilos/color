#include <iostream>
#include <iomanip>

#include "color/color.hpp"

using namespace std;
using namespace color;
using namespace color::constant;

template< typename category_name >
 void print( ::color::model<category_name> const& c )
 {
  cout << c[0] << ", " << c[1] << ", " << c[2] << endl;
 }

int main( int argc, char *argv[] )
 {
  cmy<std::uint8_t>    c1;
  cmy<std::uint16_t>   c2;
  cmy<std::uint32_t>   c3;
  cmy<std::uint64_t>   c4;
  cmy<float>           c5;
  cmy<double>          c6;
  cmy<long double>     c7;

  c1 = lavender_t{};
  c2 = lavender_t{};
  c3 = lavender_t{};
  c4 = lavender_t{};
  c5 = lavender_t{};
  c6 = lavender_t{};
  c7 = lavender_t{};

  print( c1 );
  print( c2 );
  print( c3 );
  print( c4 );
  print( c5 );
  print( c6 );
  print( c7 );

  return EXIT_SUCCESS;
 }
