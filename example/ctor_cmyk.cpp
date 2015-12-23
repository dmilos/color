#include <iostream>
#include <iomanip>
#include <cstdint>

#include "color/color.hpp"



int main( int argc, char *argv[] )
 {
  //color::cmy<bool>           c0( { true, false, false } ); //!< Not yet supported
  color::cmy<std::uint64_t>  c2( { 640, 1270 , 1920, 2500 } );
  color::cmy<std::uint32_t>  c3( { 64, 127 , 192, 200 } );
  color::cmy<std::uint16_t>  c4( { 6, 12 , 19, 20} );
  color::cmy<std::uint8_t>   c5( { 7, 6 , 3, 2} );
  color::cmy<float>          c6( { 0.5, 0.6,0.7, 0.5 } );
  color::cmy<double>         c7( { 0.5, 0.6,0.7, 0.5 } );
  color::cmy<long double>    c8( { 0.5, 0.6,0.7, 0.5 } );

  return EXIT_SUCCESS;
 }

