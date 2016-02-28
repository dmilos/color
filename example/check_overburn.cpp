#include <iostream>
#include <iomanip>

#include "color/color.hpp"

void check_rgb();

int main( int argc, char *argv[] )
 {
  check_rgb();

  return EXIT_SUCCESS;
 }

void check_rgb()
 {
  color::rgb<double>  r;

  // Do some initialization
  color::make::red( r );

  // First check has to be OK
  std::cout << color::check::overburn( r ) << std::endl;

  r.set<0>( 20.0 );

  // This one has to fail
  std::cout << color::check::overburn( r ) << std::endl;
 }
