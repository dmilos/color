#include <iostream>
#include <iomanip>
#include <stdint>

#include "color/color.hpp"

int main( int argc, char *argv[] )
 {
  color::rgb<float>          f; //!< Instead of float you may put std::uint8_t,std::uint16_t, std::uint32_t, std::uint64_t, double, long double
  color::gray<std::uint32_t> g; //!< Instead of uint32_t you may put std::uint8_t,std::uint16_t, std::uint32_t, std::uint64_t, double, long double

  // Here is how to convert from one to another
  f = g;

  return EXIT_SUCCESS;
 }

