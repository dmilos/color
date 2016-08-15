#include <iostream>
#include <iomanip>

#include "color/color.hpp"

int main( int argc, char *argv[] )
 {
  color::cmyk<double>  ck; 

  // Do some initialization
  color::make::red( ck );

  // First check has to be OK
  std::cout << " true == color::check::integrity( ck ) == " << color::check::integrity( ck ) << std::endl;

  ck.set<0>( 0.1 );
  ck.set<1>( 0.1 );
  ck.set<2>( 0.1 );

  // This one has to fail
  std::cout << " false == color::check::integrity( ck ) == " << color::check::integrity( ck ) << std::endl;
  return EXIT_SUCCESS;
 }
