#include <iostream>
#include <iomanip>
#include <cstdint>

#include "color/color.hpp"



int main( int argc, char *argv[] )
 {
  color::yiq<bool>           c0( { true, false, false} );
  color::yiq<float>          c1( { 0.5, 0.6,0.7}  );
  color::yiq<std::uint64_t>  c2( { 640, 1270 , 1920} );
  color::yiq<std::uint32_t>  c3( { 64, 127 , 192} );
  color::yiq<std::uint16_t>  c4( { 6, 12 , 19} );
  color::yiq<std::uint8_t>   c5( { 7, 6 , 3} );

  return EXIT_SUCCESS;
 }

