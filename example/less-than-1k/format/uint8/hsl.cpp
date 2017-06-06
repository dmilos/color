#include <iostream>
#include <iomanip>

#include "color/color.hpp"


int main( int argc, char *argv[] )
 {
  ::color::hsl< std::uint8_t > hl;

  hl = ::color::constant::orange_t{}; //!< Fill with some useful information

  std::cout<< "Orange in color::cmy<std::uint8_t> = { ";
  std::cout<< std::setw(12) << std::right << (unsigned)hl[0] << ","
           << std::setw(12) << std::right << (unsigned)hl[1] << ","
           << std::setw(12) << std::right << (unsigned)hl[2];
  std::cout<< " };";
  std::cout<< std::endl;
  return EXIT_SUCCESS;
 }
