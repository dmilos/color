#include <iostream>
#include <iomanip>

#include "color/color.hpp"

int main( int argc, char *argv[] )
 {
  color::hsv<double>  h;

  // Do some initialization
  h = color::constant::red_t{};

  // First check has to be OK
  std::cout << color::check::unique( h ) << std::endl;

  h.set<0>( 120 );
  h.set<1>( 50 );
  h.set<2>( 0 );

  // This one has to fail
  std::cout << color::check::unique( h ) << std::endl;

  // Fix
  color::fix::unique( h );

  // Check fix
  std::cout << color::check::unique( h ) << std::endl;

  return EXIT_SUCCESS;
 }
