#include <iostream>
#include <iomanip>
#include <cstdint>

#include "color/color.hpp"


int main( int argc, char *argv[] )
 {
  color::gray<std::uint8_t>   c; //!< Instead of std::uint8_t you may put, std::uint16_t, std::uint32_t, std::uint64_t, double, long double, etc.

  // make it red
  color::make::red( c );

  std::cout << c[0] << ", " << c[1] << ", " << c[2] << std::endl;

  return EXIT_SUCCESS;
 } 