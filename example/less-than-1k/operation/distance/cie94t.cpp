#include <iostream>
#include <iomanip>

#include "color/color.hpp"

int main( int argc, char *argv[] )
 {
  //Instead of rgb you may use hsl, hsv, yiq, etc.
  typedef ::color::rgb<double> color_t;

  color_t a = ::color::constant::orange_t{};
  color_t b = ::color::constant::chocolate_t{};

  std::cout << ::color::operation::distance< ::color::constant::distance::CIE94_textile_entity >( a, b ) << std::endl;
  return EXIT_SUCCESS;
 }
