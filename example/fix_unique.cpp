#include <iostream>
#include <iomanip>

#include "color/color.hpp"

void check_hsl();
void check_hsv();

int main( int argc, char *argv[] )
 {
  check_hsl();
  check_hsv();

  return EXIT_SUCCESS;
 }

void check_hsl()
 {
  color::hsl<double>  h;

  // Do some initialization
  color::make::red( h );

  // First check has to be OK
  std::cout << color::check::unique( h ) << std::endl;

  h.set<0>( 5000 ); // TODO

  // This one has to fail
  std::cout << color::check::unique( h ) << std::endl;

  // Fix
  color::fix::unique( h );

  // Check fix
  std::cout << color::check::unique( h ) << std::endl;
 }

void check_hsv()
 {
  color::hsv<double>  h;

  // Do some initialization
  color::make::red( h );

  // First check has to be OK
  std::cout << color::check::unique( h ) << std::endl;

  h.set<0>( 5000 );// TODO

  // This one has to fail
  std::cout << color::check::unique( h ) << std::endl;

  // Fix
  color::fix::unique( h );

  // Check fix
  std::cout << color::check::unique( h ) << std::endl;
 }
