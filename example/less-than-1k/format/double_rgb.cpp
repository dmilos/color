#include <iostream>
#include <iomanip>

#include "color/color.hpp"

int main( int argc, char *argv[] )
 {
  ::color::rgb< double > r; //!< Make an instance

  r = ::color::constant::orange_type{}; //!< Fill with some useful information

  std::cout<< "Orange in color::rgb<double> = { ";
  std::cout<< std::setw(12) << std::right << r[0] << ","
           << std::setw(12) << std::right << r[1] << ","
           << std::setw(12) << std::right << r[2];
  std::cout<< " };";
  std::cout<< std::endl;

 return EXIT_SUCCESS;
 }
