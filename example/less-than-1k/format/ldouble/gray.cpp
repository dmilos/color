#include <iostream>
#include <iomanip>

#include "color/color.hpp"

int main( int argc, char *argv[] )
 {
  ::color::gray< long double > c; //!< Make an instance

  c = ::color::constant::orange_t{}; //!< Fill with some useful information

  std::cout<< "Orange in color::gray<long double> = { ";
  std::cout<< std::setw(12) << std::right << c[0];
  std::cout<< " };";
  std::cout<< std::endl;

 return EXIT_SUCCESS;
 }
