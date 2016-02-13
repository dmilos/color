#include <iostream>
#include <iomanip>
#include <cstdint>

#include "color/color.hpp"



int main( int argc, char *argv[] )
 {
//color::hsv<bool>           c0( { true, false, false} ); //!< Not yet supported
  color::hsv<std::uint64_t>  c2( { 640, 1270 , 1920} );
  color::hsv<std::uint32_t>  c3( { 64, 127 , 192} );
  color::hsv<std::uint16_t>  c4( { 6, 12 , 19} );
  color::hsv<std::uint8_t>   c5( { 7, 6 , 3} );
  color::hsv<float>          c6( {  90, 25, 30 } );
  color::hsv<double>         c7( { 180, 50, 90 } );
  color::hsv<long double>    c8( { 270, 30, 60 } );
  
  return EXIT_SUCCESS;
 }

