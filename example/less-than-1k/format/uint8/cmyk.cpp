#include <iostream>
#include <iomanip>

#include "color/color.hpp"


int main( int argc, char *argv[] )
 {
  ::color::cmyk< std::uint8_t > ck;

  ck = ::color::constant::orange_t{}; //!< Fill with some useful information

  std::cout<< "Orange in color::cmy<std::uint8_t> = { ";
  std::cout<< std::setw(12) << std::right << (unsigned)ck[0] << ","
           << std::setw(12) << std::right << (unsigned)ck[1] << ","
           << std::setw(12) << std::right << (unsigned)ck[2] << ","
           << std::setw(12) << std::right << (unsigned)ck[3];
  std::cout<< " };";
  std::cout<< std::endl;
  return EXIT_SUCCESS;
 }
