#include <iostream>
#include <iomanip>
#include <cstdint>

#include "color/color.hpp"



int main( int argc, char *argv[] )
 {
  // Make instance of RGB in different formats
  //color::gray<bool>           c0( { true, false, false } ); //!< Not yet supported
  color::gray<std::uint64_t>  c2;
  color::gray<std::uint32_t>  c3;
  color::gray<std::uint16_t>  c4;
  color::gray<std::uint8_t>   c5;
  color::gray<float>          c6;
  color::gray<double>         c7;
  color::gray<long double>    c8;

  // make it red
  color::make::red( c2 );
  color::make::red( c3 );
  color::make::red( c4 );
  color::make::red( c5 );
  color::make::red( c6 );
  color::make::red( c7 );
  color::make::red( c8 );

  return EXIT_SUCCESS;
 }

