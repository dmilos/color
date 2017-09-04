#include <iostream>
#include <iomanip>

#include "color/color.hpp"

int main( int argc, char *argv[] )
 {
  ::color::cmy< float >           c0; //!< Instead of float        you may put std::uint8_t,std::uint16_t, std::uint32_t, std::uint64_t, double, long double
  ::color::YPbPr< std::uint8_t, ::color::constant::YPbPr::BT_601_entity >    c1; //!< Instead of std::uint8_t you may put std::uint16_t, std::uint32_t, std::uint64_t, float, double, long double

  c0 = ::color::constant::lavender_type{};
  c1 = ::color::constant::orange_type{};

  // Assign
  c0 = c1;
  std::cout << c[0] << ", " << c[1] << ", " << c[2] << std::endl;

  // .. and vice versa
  c1 = c2;

  std::cout << c[0] << ", " << c[1] << ", " << c[2] << std::endl;

  return EXIT_SUCCESS;
 }
