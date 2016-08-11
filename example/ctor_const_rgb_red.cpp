#include <iostream>
#include <iomanip>
#include <cstdint>

#include "color/color.hpp"

int main( int argc, char *argv[] )
 {
  // Here is how to initialize color to contain red
  color::rgb<std::uint8_t>   c( ::color::constant::red_type{} );  //!< Instead of float you may put std::uint8_t,std::uint16_t, std::uint32_t, std::uint64_t, double, long double 

  return EXIT_SUCCESS;
 }
