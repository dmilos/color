#include <iostream>
#include <iomanip>

#include "color/color.hpp"

int main( int argc, char *argv[] )
 {
  ::color::rgb< std::uint8_t > r;

  ::color::make::orange( r ); //!< Fill with some useful ininvertion

  std::cout<< "Orange in color::rgb<std::uint8_t> = ";
  std::cout << r[0] << ", " << r[1] << ", " << r[2] << std::endl;

  ::color::operation::invert( r );

  std::cout<< ";  Inverted = ";
  std::cout << r[0] << ", " << r[1] << ", " << r[2] << std::endl;

  return EXIT_SUCCESS;
 }
