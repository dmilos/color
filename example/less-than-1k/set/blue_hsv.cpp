#include <iostream>
#include <iomanip>
#include <cstdint>

#include "color/color.hpp"

int main( int argc, char *argv[] )
 {
  // Instead of float you may put std::uint8_t,std::uint16_t, std::uint32_t, std::uint64_t, float, double, long double
  color::hsv<float> c;

  // initialize c before get
  c = ::color::constant::turquoise_t{};

  // Show the component before set
  std::cout << color::get::blue( c ) << std::endl;

  // Set the blue
  // WARNING: Works for float, double and long double, for std::uint8_t use value between 0 and 255
  color::set::blue( c, 0.141592653589 );

  // Print changes
  std::cout << color::get::blue( c ) << std::endl;

  return EXIT_SUCCESS;
 }
