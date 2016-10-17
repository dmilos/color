#include <iostream>
#include <iomanip>
#include <cstdint>

#include "color/color.hpp"

int main( int argc, char *argv[] )
 {
  ::color::yuv<std::uint8_t>     c1( { 7, 6 , 3} );
  ::color::yuv<std::uint16_t>    c2( { 6, 12 , 19} );
  ::color::yuv<std::uint32_t>    c3( { 64, 127 , 192} );
  ::color::yuv<std::uint64_t>    c4( { 640, 1270 , 1920} );
  ::color::yuv<float>            c5( { 0.5, 0.6,0.7}  );
  ::color::yuv<double>           c6( { 0.5, 0.6,0.7}  );

  std::cout << c1[0] << ", " << c1[1] << ", " << c1[2] << std::endl;
  std::cout << c2[0] << ", " << c2[1] << ", " << c2[2] << std::endl;
  std::cout << c3[0] << ", " << c3[1] << ", " << c3[2] << std::endl;
  std::cout << c4[0] << ", " << c4[1] << ", " << c4[2] << std::endl;
  std::cout << c5[0] << ", " << c5[1] << ", " << c5[2] << std::endl;
  std::cout << c6[0] << ", " << c6[1] << ", " << c6[2] << std::endl;

  return EXIT_SUCCESS;
 }