#include <iostream>
#include <iomanip>

#include "color/color.hpp"

int main( int argc, char *argv[] )
 {
  ::color::hsv< std::uint8_t > hv;

  ::color::make::orange( hv ); //!< Fill with some useful ininvertion

  std::cout<< "Orange in color::rgb<std::uint8_t> = ";
  std::cout << hv[0] << ", " << hv[1] << ", " << hv[2] << std::endl;

  ::color::operation::invert( hv );

  std::cout<< ";  Inverted = ";
  std::cout << hv[0] << ", " << hv[1] << ", " << hv[2] << std::endl;

  return EXIT_SUCCESS;
 }
