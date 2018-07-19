#include <iostream>
#include <iomanip>

#include "color/color.hpp"

int main( int argc, char *argv[] )
 {
  color::hsv<double>  hv;

  // Do some initialization
  hv = color::constant::red_t{};

  // First check has to be OK
  std::cout << "true == color::check::integrity( hv ) == " << color::check::integrity( hv ) << std::endl;

  // No check. Instant set to given value.
  hv.set<0>( 5000 );

  // This one has to fail
  std::cout << "false color::check::integrity( hv ) == " << color::check::integrity( hv ) << std::endl;

  return EXIT_SUCCESS;
 }
