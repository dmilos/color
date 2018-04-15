#include <iostream>
#include <iomanip>
#include <cstdint>

#include "color/color.hpp"

int main( int argc, char *argv[] )
 {
  // Instead of float you may put std::uint8_t,std::uint16_t, std::uint32_t, std::uint64_t, double, long double
  color::gray<float> c;

  // initialize c before get. Actually this is gray version of turquoise
  c = color::constant::turquoise_t{};

  // Here is how to get yellow component or what is left. Cause thi is gray.
  auto yellow = color::get::yellow( c );

  // Now do whatever you wan to do
  std::cout << yellow << std::endl;

  return EXIT_SUCCESS;
 }
