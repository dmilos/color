#include <iostream>
#include <iomanip>

#include "color/color.hpp"

int main( int argc, char *argv[] )
 {
  //Instead of rgb and yiq you may use hsl, hsv, yiq, etc.
  //Instead of double you may use float, std::uint8_t, long double

  ::color::rgb<double> a = ::color::constant::orange_t{};
  ::color::yiq<double> b = ::color::constant::chocolate_t{};

  std::cout << ::color::operation::distance< ::color::constant::distance::CIE76_entity >( a, b ) << std::endl;

  return EXIT_SUCCESS;
 }
