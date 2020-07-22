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

  // Here is how to get magenta component.
  auto magenta1 = color::get::magenta( c );
  // Get magenta component with special algorithm.
  auto magenta2 = color::get::magenta<color::get::constant::cmy::magenta::hsl_star_entity>( c );

  // Now do whatever you wan to do
  std::cout << magenta1 << std::endl;
  std::cout << magenta2 << std::endl;

  return EXIT_SUCCESS;
 }
