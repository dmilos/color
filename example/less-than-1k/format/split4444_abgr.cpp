#include <iostream>
#include <iomanip>

#include "color/color.hpp"


int main( int argc, char *argv[] )
 {
  ::color::abgr< ::color::type::split4444_t > r;

  ::color::make::orange( r ); //!< Fill with some useful information
  ::color::set::alpha( r, 7 );

  std::cout<< (unsigned)r[0] << "," << (unsigned)r[1] << "," << (unsigned)r[2] << "," << (unsigned)r[3];

  std::cout<< std::endl;

  return EXIT_SUCCESS;
 } 