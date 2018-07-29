#include <iostream>
#include <iomanip>

#include "color/color.hpp"

void fix_rgb();

int main( int argc, char *argv[] )
 {
  color::lab<double>  r;

  // Do some initialization
  r = color::constant::red_t{};

  // First check has to be false i.e ther is no overburn
  std::cout << color::check::overburn( r ) << std::endl;

  r.set<0>( 20.0 );

  // This one has to return true, i.e there is overburn
  std::cout << color::check::overburn( r ) << std::endl;

  // Fix
  color::fix::overburn( r );

  // Check fix
  std::cout << color::check::overburn( r ) << std::endl;

  return EXIT_SUCCESS;
 }
