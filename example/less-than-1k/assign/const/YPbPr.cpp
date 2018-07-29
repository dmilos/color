#include <iostream>
#include <iomanip>

#include "color/color.hpp"

int main( int argc, char *argv[] )
 {
  ::color::YPbPr< float >          c; //!< Instead of float you may put std::uint8_t,std::uint16_t, std::uint32_t, std::uint64_t, double, long double

  // Assign constant to instance
  c = ::color::constant::lavender_t{};

  //  now you may do whatever you want to do with c
  std::cout << c[0] << ", " << c[1] << ", " << c[2] << std::endl;

  return EXIT_SUCCESS;
 }
