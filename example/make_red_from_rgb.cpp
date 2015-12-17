#include <iostream>
#include <iomanip>
#include <cstdint>

#include "color/color.hpp"



int main( int argc, char *argv[] )
 {
  // Make instance of RGB in different formats
  //color::cmy<bool>           c0( { true, false, false } ); //!< Not yet supported
  color::cmy<std::uint64_t>  c2;
  color::cmy<std::uint32_t>  c3;
  color::cmy<std::uint16_t>  c4;
  color::cmy<std::uint8_t>   c5;
  color::cmy<float>          c6;
  color::cmy<double>         c7;
  color::cmy<long double>    c8;

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

