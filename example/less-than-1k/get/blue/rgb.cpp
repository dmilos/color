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

  // Here is how to get red component. Default is: channel extraction
  auto f0 = color::get::red( c );

  // Get red component by using Alvy Ray Smith algorithm.
  auto f1 = color::get::red< ::color::get::constant::rgb::red::channel_entity >( c );

  // Get red component by using Alvy Ray Smith algorithm.
  auto f2 = color::get::red< ::color::get::constant::rgb::red::hsl_star_entity >( c );

  // Now do whatever you wan to do
  std::cout << f0 << " - " << f1 << " - " << f2 << " - " << std::endl;

  return EXIT_SUCCESS;
 }