#include <iostream>
#include <iomanip>

#include "color/color.hpp"


int main( int argc, char *argv[] )
 {
  ::color::argb< float > r;

  r = ::color::constant::orange_t{}; //!< Fill with some useful information
  ::color::set::alpha( r, 1 );

  std::cout<< (float)r[0] << "," << (float)r[1] << "," << (float)r[2] << "," << (float)r[3];

  std::cout<< std::endl;

  return EXIT_SUCCESS;
 }
