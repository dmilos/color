#include <iostream>
#include <iomanip>
#include <cstdint>

#include "color/color.hpp"

int main( int argc, char *argv[] )
 {
  // Instead of float you may put std::uint8_t,std::uint16_t, std::uint32_t, std::uint64_t, double, long double
  color::yuv<float> c;

  // initialize c before get.
  c = color::constant::turquoise_t{};

  // Here is how to get yellow component.
  auto yellow = color::get::yellow( c );

  // Now do whatever you wan to do
  std::cout << yellow << std::endl;

  return EXIT_SUCCESS;
 }
