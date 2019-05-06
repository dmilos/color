#include <iostream>
#include <iomanip>

#include "color/color.hpp"

int main( int argc, char *argv[] )
 {
  typedef ::color::rgb<double> color_t; //!< Instead of rgb you may use hsl, hsv, yiq, etc.

  color_t a, b;

  a = ::color::constant::orange_t{};
  b = ::color::constant::lime_t{};

  color_t result;

  result = a + b;

  std::cout<< " orange + lime = ";
  std::cout << result[0] << ", " << result[1] << ", " << result[2] << std::endl;

  result += a; //! Accumulation
  std::cout<< " result += orange";
  std::cout << result[0] << ", " << result[1] << ", " << result[2] << std::endl;

  return EXIT_SUCCESS;
 }
