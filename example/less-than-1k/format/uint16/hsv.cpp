#include <iostream>
#include <iomanip>

#include "color/color.hpp"


int main( int argc, char *argv[] )
 {
  ::color::hsv< std::uint16_t > hv;

  hv = ::color::constant::orange_t{}; //!< Fill with some useful information

  std::cout<< "Orange in color::cmy<std::uint16_t> = { ";
  std::cout<< std::setw(12) << std::right << (unsigned)hv[0] << ","
           << std::setw(12) << std::right << (unsigned)hv[1] << ","
           << std::setw(12) << std::right << (unsigned)hv[2];
  std::cout<< " };";
  std::cout<< std::endl;
  return EXIT_SUCCESS;
 }
