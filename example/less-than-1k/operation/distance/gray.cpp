#include <iostream>
#include <iomanip>

#include "color/color.hpp"

int main( int argc, char *argv[] )
 {
  //Instead of rgb you may use hsl, hsv, yiq, etc.
  //Instead of double you may use float, std::uint8_t, long double
  typedef ::color::rgb<double> color_t;

  color_t a = ::color::constant::orange_t{};
  color_t b = ::color::constant::chocolate_t{};

  // a and b must be the same type
  std::cout << ::color::operation::distance< ::color::constant::distance::delta_gray_entity >( a, b ) << std::endl;
  return EXIT_SUCCESS;
 }
