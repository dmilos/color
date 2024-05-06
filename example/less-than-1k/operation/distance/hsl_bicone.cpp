#include <iostream>
#include <iomanip>

#include "color/color.hpp"

int main( int argc, char const *argv[] )
 {
  //Instead of hsl you may use hsi or hsv
  //Instead of double you may use float, double, long double

  ::color::hsl<double> aD = ::color::constant::orange_t{};
  ::color::hsl<double> bD = ::color::constant::chocolate_t{};

  std::cout << ::color::operation::distance< ::color::constant::distance::hsl_bicone_entity >( aD, bD ) << std::endl;

  ::color::hsl<float> aF = ::color::constant::orange_t{};
  ::color::hsl<float> bF = ::color::constant::chocolate_t{};

  std::cout << ::color::operation::distance< ::color::constant::distance::hsl_bicone_entity >( aF, bF ) << std::endl;

  return EXIT_SUCCESS;
 }
