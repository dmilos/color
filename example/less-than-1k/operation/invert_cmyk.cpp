#include <iostream>
#include <iomanip>

#include "color/color.hpp"

int main( int argc, char *argv[] )
 {
  ::color::cmyk< std::uint8_t > c;

  ::color::make::orange( c ); //!< Fill with some useful ininvertion

  std::cout<< "Orange in color::cmyk<std::uint8_t> = ";
  std::cout << c[0] << ", " << c[1] << ", " << c[2] << std::endl;

  ::color::operation::invert( c );

  std::cout<< ";  Inverted = ";
  std::cout << c[0] << ", " << c[1] << ", " << c[2] << std::endl;

  return EXIT_SUCCESS;
 }
