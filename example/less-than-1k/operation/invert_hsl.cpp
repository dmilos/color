#include <iostream>
#include <iomanip>

#include "color/color.hpp"

int main( int argc, char *argv[] )
 {
  ::color::hsl< std::uint8_t > hl;

  ::color::make::orange( hl ); //!< Fill with some useful ininvertion

  std::cout<< "Orange in color::rgb<std::uint8_t> = ";
  std::cout << hl[0] << ", " << hl[1] << ", " << hl[2] << std::endl;

  ::color::operation::invert( hl );

  std::cout<< ";  Inverted = ";
  std::cout << hl[0] << ", " << hl[1] << ", " << hl[2] << std::endl;

  return EXIT_SUCCESS;
 }
