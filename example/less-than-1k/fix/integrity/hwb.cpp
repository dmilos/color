#include <iostream>
#include <iomanip>

#include "color/color.hpp"

int main( int argc, char *argv[] )
 {
  color::hwb<double>  h;

  // Do some initialization
  h = color::constant::red_t{};

  // First fix has to be OK
  std::cout << color::check::integrity( h ) << std::endl;

  h.set<0>( 5000 );

  // This one has to fail
  std::cout << color::check::integrity( h ) << std::endl;

  // Fix
  color::fix::integrity( h );

  // Check again
  std::cout << color::check::integrity( h ) << std::endl;

  return EXIT_SUCCESS;
 }
