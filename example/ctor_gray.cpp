#include <iostream>
#include <iomanip>
#include <cstdint>

#include "color/color.hpp"



int main( int argc, char *argv[] )
 {
  color::gray<bool>           c0( { true } );
  color::gray<std::uint64_t>  c2( { 6400000u } );
  color::gray<std::uint32_t>  c3( { 64000} );
  color::gray<std::uint16_t>  c4( { 6 } );
  color::gray<std::uint8_t>   c5( { 120 } );
  color::gray<float>          c6( { 0.5 }  );
  color::gray<double>         c7( { 0.5 }  );
  color::gray<long double>    c8( { 0.5 }  );

  return EXIT_SUCCESS;
 }

