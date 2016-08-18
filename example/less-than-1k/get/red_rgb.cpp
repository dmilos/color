#include <iostream>
#include <iomanip>
#include <cstdint>

#include "color/color.hpp"

int main( int argc, char *argv[] )
 {
  // Instead of float you may put std::uint8_t,std::uint16_t, std::uint32_t, std::uint64_t, double, long double
  color::rgb<float> c;

  // initialize c before get.
  color::make::turquoise( c );

  // Here is how to get red component.
  auto red = color::get::red( c );

  // Now do whatever you wan to do
  std::cout << red << std::endl;

  return EXIT_SUCCESS;
 }
