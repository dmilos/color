#include <iostream>
#include <iomanip>
#include <cstdint>

#include "color/color.hpp"



int main( int argc, char *argv[] )
 {
  // Make instance of RGB in different formats
  //color::rgb<bool>           c0( { true, false, false } ); //!< Not yet supported
  color::rgb<std::uint64_t>  c2;
  color::rgb<std::uint32_t>  c3;
  color::rgb<std::uint16_t>  c4;
  color::rgb<std::uint8_t>   c5;
  color::rgb<float>          c6;
  color::rgb<double>         c7;
  color::rgb<long double>    c8;

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

