#include <iostream>
#include <iomanip>

#include "color/color.hpp"

int main( int argc, char *argv[] )
 {
  ::color::yuv< std::uint8_t > yv;

  yv = ::color::constant::orange_t{}; //!< Fill with some useful information

  std::cout<< "Orange in color::rgb<std::uint8_t> = ";
  std::cout << yv[0] << ", " << yv[1] << ", " << yv[2] << std::endl;
  
  ::color::operation::invert( yv );
  
  std::cout<< ";  Inverted = "; 
  std::cout << yv[0] << ", " << yv[1] << ", " << yv[2] << std::endl;

  return EXIT_SUCCESS;
 }
