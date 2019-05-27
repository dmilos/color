#include <iostream>
#include <iomanip>
#include <cstdint>

#include "color/color.hpp"

int main( int argc, char *argv[] )
 {
  // Instead of float you may put std::uint8_t, ..., std::uint64_t, double, long double
  color::rgb<float> c;

  // initialize c before get.
  c = color::constant::turquoise_t{};

  // Here is how to get green component. Default is: channel extraction
  auto f0 = color::get::green( c );

  // Get green component by channel extraction.
  auto f1 = color::get::green< ::color::get::constant::rgb::green::channel_entity >( c );

  // Get green component by using some my algorithm.
  auto f2 = color::get::green< ::color::get::constant::rgb::green::hsl_star_entity >( c );

  // Now do whatever you wan to do
  std::cout << f0 << " - " << f1 << " - " << f2 << " - " << std::endl;

  return EXIT_SUCCESS;
 }