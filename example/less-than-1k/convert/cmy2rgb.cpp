#include <iostream>
#include <iomanip>
#include <cstdint>

#include "color/color.hpp"

int main( int argc, char *argv[] )
 {
  color::cmy<float>          c; //!< Instead of float you may put std::uint8_t,std::uint16_t, std::uint32_t, std::uint64_t, double, long double
  color::rgb<std::uint32_t>  r; //!< Instead of uint32_t you may put std::uint8_t,std::uint16_t, std::uint32_t, std::uint64_t, double, long double

  // Do some initialization
  c = color::constant::red_t{};

  // Here is how to convert from one to another
  r = c;

  return EXIT_SUCCESS;
 }

