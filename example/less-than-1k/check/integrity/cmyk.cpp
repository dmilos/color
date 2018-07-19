#include <iostream>
#include <iomanip>

#include "color/color.hpp"

int main( int argc, char *argv[] )
 {
  color::cmyk<double>  ck;

  // Do some initialization
  ck = color::constant::red_t{};

  // First check has to be OK
  std::cout << "true == color::check::integrity( ck ) == " << color::check::integrity( ck ) << std::endl;

  // No check. Instant set to given value.
  ck.set<0>( 0.1 ); ck.set<1>( 0.1 ); ck.set<2>( 0.1 );

  // This one has to fail
  std::cout << "false == color::check::integrity( ck ) == " << color::check::integrity( ck ) << std::endl;

  return EXIT_SUCCESS;
 }
