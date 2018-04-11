#include <iostream>
#include <iomanip>
#include <cstdint>

#include "color/color.hpp"

int main( int argc, char *argv[] )
 {
  // Instead of float you may put std::uint8_t,std::uint16_t, std::uint32_t, std::uint64_t, double, long double
  color::yiq<float> c;

  // initialize c before get.
  c = color::constant::turquoise_t{};

  // Here is how to get gray component.
  auto g = color::get::gray( c );

  // Now do whatever you wan to do
  std::cout << g << std::endl;

  return EXIT_SUCCESS;
 }
