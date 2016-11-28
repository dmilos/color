#include <iostream>
#include <iomanip>

#include "color/color.hpp"


int main( int argc, char *argv[] )
 {
  ::color::argb< ::color::type::split8888_t > r;

  r = ::color::constant::orange_t{}; //!< Fill with some useful information
  ::color::set::alpha( r, 255 );

  std::cout<< (unsigned)r[0] << "," << (unsigned)r[1] << "," << (unsigned)r[2] << "," << (unsigned)r[3];

  std::cout<< std::endl;

  return EXIT_SUCCESS;
 } 