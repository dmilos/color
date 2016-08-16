#include <iostream>
#include <iomanip>

#include "color/color.hpp"


int main( int argc, char *argv[] )
 {
  ::color::rgba< ::color::type::split2222_t > r;

  ::color::make::orange( r ); //!< Fill with some useful information
  ::color::set::alpha( c, 1 );

  std::cout<< (unsigned)r[0] << "," << (unsigned)r[1] << "," << (unsigned)r[2] << "," << (unsigned)r[3];

  std::cout<< std::endl;

  return EXIT_SUCCESS;
 }
