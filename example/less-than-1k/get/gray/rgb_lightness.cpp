#include <iostream>
#include <iomanip>
#include <cstdint>

#include "color/color.hpp"

int main( int argc, char *argv[] )
 {
  // Instead of float you may put uint8_t, uint16_t, ..., (long) double
  color::rgb<float> c;

  // initialize c before get.
  c = color::constant::aqua_t{};

  // Here is how to get gray component. Use L component from lab model
  auto g0 = color::get::gray< color::get::constant::rgb::gray::lightness_entity >( c );

  // Now do whatever you wan to do
  std::cout << g0 << std::endl;

  return EXIT_SUCCESS;
 }
