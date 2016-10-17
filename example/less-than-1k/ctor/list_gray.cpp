#include <iostream>
#include <iomanip>
#include <cstdint>

#include "color/color.hpp"

int main( int argc, char *argv[] )
 {
  color::gray<bool>           c0( { true } );
  color::gray<std::uint8_t>   c1( { 120 } );
  color::gray<std::uint16_t>  c2( { 6 } );
  color::gray<std::uint32_t>  c3( { 64000} );
  color::gray<std::uint64_t>  c4( { 6400000u } );
  color::gray<float>          c5( { 0.5 }  );
  color::gray<double>         c6( { 0.5 }  );
  color::gray<long double>    c7( { 0.5 }  );

  std::cout << c1[0] << std::endl;
  std::cout << c2[0] << std::endl;
  std::cout << c3[0] << std::endl;
  std::cout << c4[0] << std::endl;
  std::cout << c5[0] << std::endl;
  std::cout << c6[0] << std::endl;

  return EXIT_SUCCESS;
 }