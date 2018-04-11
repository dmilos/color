#include <iostream>
#include <iomanip>

#include "color/color.hpp"

int main( int argc, char *argv[] )
 {
  //!< Instead of std::uint8_t    you may put: std::uint16_t, std::uint32_t, std::uint64_t, float, double, long double  
  ::color::yuv< std::uint8_t > yv;

  yv = ::color::constant::orange_t{}; //!< Fill with some useful information

  std::cout<< "Orange in color::rgb<std::uint8_t> = ";
  std::cout << yv[0] << ", " << yv[1] << ", " << yv[2] << std::endl;
  
  ::color::operation::invert( yv );
  
  std::cout<< ";  Inverted = "; 
  std::cout << yv[0] << ", " << yv[1] << ", " << yv[2] << std::endl;

  return EXIT_SUCCESS;
 }
