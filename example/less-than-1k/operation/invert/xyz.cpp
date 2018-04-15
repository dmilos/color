#include <iostream>
#include <iomanip>

#include "color/color.hpp"

int main( int argc, char *argv[] )
 {
  //!< Instead of std::uint8_t    you may put: std::uint16_t, std::uint32_t, std::uint64_t, float, double, long double  
  ::color::xyz< std::uint8_t > r;

  r = ::color::constant::orange_t{}; //!< Fill with some useful ininvertion

  std::cout<< "Orange in color::xyzac<std::uint8_t> = ";
  std::cout << r[0] << ", " << r[1] << ", " << r[2] << std::endl;

  ::color::operation::invert( r );

  std::cout<< ";  Inverted = ";
  std::cout << r[0] << ", " << r[1] << ", " << r[2] << std::endl;

  return EXIT_SUCCESS;
 }
