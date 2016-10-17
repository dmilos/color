#include <iostream>
#include <iomanip>
#include <cstdint>

#include "color/color.hpp"

int main( int argc, char *argv[] )
 {
  ::color::cmy<std::uint8_t>     c1( { 64, 127 , 192 } );
  ::color::cmy<std::uint16_t>    c2( { 280, 350 , 1000 } );
  ::color::cmy<std::uint32_t>    c3( { 640, 127 , 192 } );
  ::color::cmy<std::uint64_t>    c4( { 64000, 1270 , 1920 } );
  ::color::cmy<float>            c5( { 0.5, 0.6, 0.7} );
  ::color::cmy<double>           c6( { 0.5, 0.6, 0.7} );

  std::cout << c1[0] << ", " << c1[1] << ", " << c1[2] << std::endl;
  std::cout << c2[0] << ", " << c2[1] << ", " << c2[2] << std::endl;
  std::cout << c3[0] << ", " << c3[1] << ", " << c3[2] << std::endl;
  std::cout << c4[0] << ", " << c4[1] << ", " << c4[2] << std::endl;
  std::cout << c5[0] << ", " << c5[1] << ", " << c5[2] << std::endl;
  std::cout << c6[0] << ", " << c6[1] << ", " << c6[2] << std::endl;

  return EXIT_SUCCESS;
 }
