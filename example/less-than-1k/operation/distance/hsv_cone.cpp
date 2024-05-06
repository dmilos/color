#include <iostream>
#include <iomanip>

#include "color/color.hpp"

int main( int argc, char const *argv[] )
 {
  //Instead of hsv you may use hsi or hsv
  //Instead of double you may use float, double, long double

  ::color::hsv<double> aD = ::color::constant::orange_t{};
  ::color::hsv<double> bD = ::color::constant::chocolate_t{};

  std::cout << ::color::operation::distance< ::color::constant::distance::hsv_cone_entity >( aD, bD ) << std::endl;

  ::color::hsv<float> aF = ::color::constant::orange_t{};
  ::color::hsv<float> bF = ::color::constant::chocolate_t{};

  std::cout << ::color::operation::distance< ::color::constant::distance::hsv_cone_entity >( aF, bF ) << std::endl;

  return EXIT_SUCCESS;
 }
