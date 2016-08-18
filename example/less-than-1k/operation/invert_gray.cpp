#include <iostream>
#include <iomanip>

#include "color/color.hpp"

int main( int argc, char *argv[] )
 {
  ::color::gray< std::uint8_t > g;

  ::color::make::orange( g ); //!< Fill with some useful ininvertion

  std::cout<< "Orange in color::rgb<std::uint8_t> = ";
  std::cout << g[0] << ", " << g[1] << ", " << g[2] << std::endl;

  ::color::operation::invert( g );

  std::cout<< ";  Inverted = ";
  std::cout << g[0] << ", " << g[1] << ", " << g[2] << std::endl;

  return EXIT_SUCCESS;
 }
