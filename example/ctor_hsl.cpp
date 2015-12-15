#include <iostream>
#include <iomanip>
#include <cstdint>

#include "color/color.hpp"



int main( int argc, char *argv[] )
 {
  color::hsl<bool>           c0( { true, false, false} );
  color::hsl<std::uint64_t>  c2( { 640, 1270 , 1920} );
  color::hsl<std::uint32_t>  c3( { 64, 127 , 192} );
  color::hsl<std::uint16_t>  c4( { 6, 12 , 19} );
  color::hsl<std::uint8_t>   c5( { 7, 6 , 3} );
  color::hsl<float>          c6( { 0.5, 0.6,0.7}  );
  color::hsl<double>         c7( { 0.5, 0.6,0.7}  );
  color::hsl<long double>    c8( { 0.5, 0.6,0.7}  );

  return EXIT_SUCCESS;
 }

