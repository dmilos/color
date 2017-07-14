#include <iostream>
#include <iomanip>

#include "color/color.hpp"

int main( int argc, char *argv[] )
 {
  //Instead of rgb you may use hsl, hsv, yiq, etc.
  ::color::rgb<double> a = ::color::constant::orange_t{};
  //Instead of rgb you may use hsl, hsv, yiq, etc.
  ::color::rgb<double> b = ::color::constant::chocolate_t{};

  std::cout << ::color::operation::distance< ::color::constant::distance::CMC1984_entity >( a, b, 1, 2 ) << std::endl;
  return EXIT_SUCCESS;
 }
