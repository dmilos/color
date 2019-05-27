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

  // Here is how to get blue component. Default is: channel extraction
  auto f0 = color::get::blue( c );

  // Get blue component by channel extraction.
  auto f1 = color::get::blue< ::color::get::constant::rgb::blue::channel_entity >( c );

  // Get blue component by using some my algorithm.
  auto f2 = color::get::blue< ::color::get::constant::rgb::blue::hsl_star_entity >( c );

  // Now do whatever you wan to do
  std::cout << f0 << " - " << f1 << " - " << f2 << " - " << std::endl;

  return EXIT_SUCCESS;
 }