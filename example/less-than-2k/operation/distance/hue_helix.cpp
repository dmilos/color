#include <iostream>
#include <iomanip>

#include "color/color.hpp"

int main( int argc, char *argv[] )
 {
  //Instead of hsl you may use hsi or hsv
  //Instead of double you may use float, double, long double

  ::color::hsl<double> a = ::color::constant::orange_t{};
  ::color::hsl<double> b = ::color::constant::chocolate_t{};

  std::cout << ::color::operation::distance< ::color::constant::distance::hue_helix_entity >( a, b ) << std::endl;
  std::cout << ::color::operation::distance< ::color::constant::distance::hue_helix_rgb_entity >( a, b ) << std::endl;

  return EXIT_SUCCESS;
 }
