#include <iostream>
#include <iomanip>

#include "color/color.hpp"

int main( int argc, char *argv[] )
 {
  color::LabCH<double>  hl;

  // Do some initialization
  hl = color::constant::red_t{};

  // First check has to be OK
  std::cout << "true == color::check::integrity( hl ) == " << color::check::integrity( hl ) << std::endl;

  // No check. Instant set to given value.
  hl.set<2>( 5000 );

  // This one has to fail
  std::cout << "false == color::check::integrity( hl ) == " << color::check::integrity( hl ) << std::endl;

  return EXIT_SUCCESS;
 }
