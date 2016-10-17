#include <iostream>
#include <iomanip>
#include <cstdint>

#include "color/color.hpp"

int main( int argc, char *argv[] )
 {
  ::color::hsv<std::uint8_t>     c1( { 7, 6 , 3} );
  ::color::hsv<std::uint16_t>    c2( { 6, 12 , 19} );
  ::color::hsv<std::uint32_t>    c3( { 64, 127 , 192} );
  ::color::hsv<std::uint64_t>    c4( { 640, 1270 , 1920} );
  ::color::hsv<float>            c5( {  90, 25, 30 } );
  ::color::hsv<double>           c6( { 180, 50, 90 } );

  std::cout << c1[0] << ", " << c1[1] << ", " << c1[2] << std::endl;
  std::cout << c2[0] << ", " << c2[1] << ", " << c2[2] << std::endl;
  std::cout << c3[0] << ", " << c3[1] << ", " << c3[2] << std::endl;
  std::cout << c4[0] << ", " << c4[1] << ", " << c4[2] << std::endl;
  std::cout << c5[0] << ", " << c5[1] << ", " << c5[2] << std::endl;
  std::cout << c6[0] << ", " << c6[1] << ", " << c6[2] << std::endl;

  return EXIT_SUCCESS;
 }