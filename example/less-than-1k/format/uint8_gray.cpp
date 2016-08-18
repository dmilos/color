#include <iostream>
#include <iomanip>

#include "color/color.hpp"


int main( int argc, char *argv[] )
 {
  ::color::gray< std::uint8_t > g;

  ::color::make::orange( g ); //!< Fill with some useful information

  std::cout<< "Orange in color::cmy<std::uint8_t> = { ";
  std::cout<< std::setw(12) << std::right << (unsigned)g[0];
  std::cout<< " };";
  std::cout<< std::endl;
  return EXIT_SUCCESS;
 }
