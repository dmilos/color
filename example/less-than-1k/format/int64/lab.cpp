#include <iostream>
#include <iomanip>

#include "color/color.hpp"


int main( int argc, char *argv[] )
 {
  ::color::cmy< std::int64_t > c;

  c = ::color::constant::orange_t{}; //!< Fill with some useful information

  std::cout<< "Orange in color::cmy<std::uint16_t> = { ";
  std::cout<< std::setw(12) << std::right << (unsigned)c[0] << ","
           << std::setw(12) << std::right << (unsigned)c[1] << ","
           << std::setw(12) << std::right << (unsigned)c[2];
  std::cout<< " };";
  std::cout<< std::endl;
  return EXIT_SUCCESS;
 }
