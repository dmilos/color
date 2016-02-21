#include <iostream>
#include <iomanip>

#include "color/color.hpp"

void check_cmyk();
void check_hsl();
void check_hsv();

int main( int argc, char *argv[] )
 {
  check_cmyk();
  check_hsl();
  check_hsv();

  return EXIT_SUCCESS;
 }

void check_cmyk()
 {
  color::cmyk<double>  c;

  // Do some initialization
  color::make::red( c );

  // First check has to be OK
  std::cout << color::check::integrity( c ) << std::endl;

  h.set<0>( 0.1 );
  h.set<1>( 0.1 );
  h.set<2>( 0.1 );

  // This one has to fail
  std::cout << color::check::integrity( c ) << std::endl;

 }


void check_hsl()
 {
  color::hsl<double>  h;

  // Do some initialization
  color::make::red( h );

  // First check has to be OK
  std::cout << color::check::integrity( h ) << std::endl;

  h.set<0>( 5000 );

  // This one has to fail
  std::cout << color::check::integrity( h ) << std::endl;

 }

void check_hsv()
 {
  color::hsv<double>  h;

  // Do some initialization
  color::make::red( h );

  // First check has to be OK
  std::cout << color::check::integrity( h ) << std::endl;

  h.set<0>( 5000 );

  // This one has to fail
  std::cout << color::check::integrity( h ) << std::endl;
 }
