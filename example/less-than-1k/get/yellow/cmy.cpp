#include <iostream>
#include <iomanip>
#include <cstdint>

#include "color/color.hpp"

int main( int argc, char *argv[] )
 {
  // Instead of float you may put std::uint8_t,std::uint16_t, std::uint32_t, std::uint64_t, double, long double
  color::cmy<float> c;

  // initialize c before get.
  c = color::constant::turquoise_t{};

  // Here is how to get yellow component.
  auto yellow1 = color::get::yellow( c );
  // Get yellow component with special algorithm.
  auto yellow2 = color::get::yellow<color::get::constant::cmy::yellow::hsl_star_entity>( c );

  // Now do whatever you wan to do
  std::cout << yellow1 << std::endl;
  std::cout << yellow2 << std::endl;

  return EXIT_SUCCESS;
 }
