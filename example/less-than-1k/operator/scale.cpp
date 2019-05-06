#include <iostream>
#include <iomanip>

#include "color/color.hpp"

int main( int argc, char *argv[] )
 {
  typedef ::color::rgb<double> color_t; //!< Instead of rgb you may use hsl, hsv, yiq, etc.

  color_t a;

  a = ::color::constant::orange_t{};

  color_t result;

  result = a * 2;

  std::cout<< " ( orange * 2 ) = ";
  std::cout << result[0] << ", " << result[1] << ", " << result[2] << std::endl;

  std::cout<< " ( orange *= 2 ) = ";
  result = ::color::constant::orange_t{};
  result *= 2;
  std::cout << result[0] << ", " << result[1] << ", " << result[2] << std::endl;

  return EXIT_SUCCESS;
 }
