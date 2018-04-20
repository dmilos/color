#include <iostream>
#include <iomanip>
#include <cstdint>

#include "color/color.hpp"

int main( int argc, char *argv[] )
 {
  // Instead of float you may put std::uint8_t, ..., std::uint64_t, double, long double
  color::hsi<float> c;

  // initialize c before get.
  c = color::constant::turquoise_t{};

  // Here is how to get hue component. This will be direct extraction without calculation.
  auto h = color::get::hue( c );

  // Now do whatever you wan to do
  std::cout << h << std::endl;

  return EXIT_SUCCESS;
 }
