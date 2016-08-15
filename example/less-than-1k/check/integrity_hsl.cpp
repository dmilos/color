#include <iostream>
#include <iomanip>

#include "color/color.hpp"

int main( int argc, char *argv[] )
 {
  color::hsl<double>  hl;

  // Do some initialization
  color::make::red( hl );

  // First check has to be OK
  std::cout << " true == color::check::integrity( hl ) == " << color::check::integrity( hl ) << std::endl;

  hl.set<0>( 5000 );

  // This one has to fail
  std::cout << "false == color::check::integrity( hl ) == " << color::check::integrity( hl ) << std::endl;

 }
