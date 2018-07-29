#include <iostream>
#include <iomanip>

#include "color/color.hpp"

int main( int argc, char *argv[] )
 {
  ::color::rgb< float >           c0; //!< Instead of float        you may put std::uint8_t,std::uint16_t, std::uint32_t, std::uint64_t, double, long double
  ::color::YCgCo< std::uint8_t >    c1; //!< Instead of std::uint8_t you may put std::uint16_t, std::uint32_t, std::uint64_t, float, double, long double

  c0 = ::color::constant::lavender_t{};
  c1 = ::color::constant::orange_t{};

  // Assign
  c0 = c1;
  std::cout << c0[0] << ", " << c0[1] << ", " << c0[2] << std::endl;

  // .. and vice versa
  c1 = c0;
  std::cout << c1[0] << ", " << c1[1] << ", " << c1[2] << std::endl;

  return EXIT_SUCCESS;
 }
