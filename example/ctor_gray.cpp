#include <iostream>
#include <iomanip>
#include <cstdint>

#include "color/color.hpp"



int main( int argc, char *argv[] )
 {
  color::gray<bool>           c0( { true } );
  color::gray<float>          c1( { 0.5 }  );
  color::gray<std::uint64_t>  c2( { 6400000u } );
  color::gray<std::uint32_t>  c3( { 64000} );
  color::gray<std::uint16_t>  c4( { 6 } );
  color::gray<std::uint8_t>   c5( { 120 } );

  return EXIT_SUCCESS;
 }

