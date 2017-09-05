#include <iostream>
#include <iomanip>
#include <cstdint>

#include "color/color.hpp"

int main( int argc, char *argv[] )
 {
  color::cmy<float>          c1; //!< Instead of float you may put std::uint8_t,std::uint16_t, std::uint32_t, std::uint64_t, double, long double
  color::yuv<std::uint32_t>  c2; //!< Instead of uint32_t you may put std::uint8_t,std::uint16_t, std::uint32_t, std::uint64_t, double, long double

  // Do some initialization
  c1 = color::constant::red_t{};

  // Here is how to reformat/convert from one to another
  c2 = c1;

  // And vice versa
  c1 = c2;

  return EXIT_SUCCESS;
 }

