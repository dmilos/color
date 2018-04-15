#include <iostream>
#include <iomanip>
#include <cstdint>

#include "color/color.hpp"

int main( int argc, char *argv[] )
 {
  // Instead of float you may put std::uint8_t,std::uint16_t, std::uint32_t, std::uint64_t, double, long double
  color::hsv<float> c;

  // initialize c before get.
  c = color::constant::turquoise_t{};

  // Here is how to get magenta component.
  auto magenta = color::get::magenta( c );

  // Now do whatever you wan to do
  std::cout << magenta << std::endl;

  return EXIT_SUCCESS;
 }
