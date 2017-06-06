#include <iostream>
#include <iomanip>

#include "color/color.hpp"


int main( int argc, char *argv[] )
 {
  ::color::yuv< std::uint16_t > yv;

  yv = ::color::constant::orange_t{}; //!< Fill with some useful information

  std::cout<< "Orange in color::cmy<std::uint16_t> = { ";
  std::cout<< std::setw(12) << std::right << (unsigned)yv[0] << ","
           << std::setw(12) << std::right << (unsigned)yv[1] << ","
           << std::setw(12) << std::right << (unsigned)yv[2];
  std::cout<< " };";
  std::cout<< std::endl;

  return EXIT_SUCCESS;
 }
