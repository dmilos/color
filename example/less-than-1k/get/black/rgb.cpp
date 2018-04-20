#include <iostream>
#include <iomanip>
#include <cstdint>

#include "color/color.hpp"

int main( int argc, char *argv[] )
 {
  // Instead of float you may put std::uint8_t,std::uint16_t, std::uint32_t, std::uint64_t, double, long double
  color::rgb<float> c;

  // initialize c before get.
  c = color::constant::turquoise_t{};

  // Here is how to get black component. Default is:Alvy Ray Smith algorithm
  auto f0 = color::get::black( c );

  // Get black component by using Alvy Ray Smith algorithm.
  auto f1 = color::get::black< ::color::get::constant::rgb::black::alvy_entity >( c );

  // Get black component by using Alvy Ray Smith algorithm.
  auto f2 = color::get::black< ::color::get::constant::rgb::black::hsl_star_entity >( c );

  // Now do whatever you wan to do
  std::cout << f0 << " - " << f1 << " - " << f2 << " - " << std::endl;

  return EXIT_SUCCESS;
 }