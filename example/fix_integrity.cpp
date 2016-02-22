#include <iostream>
#include <iomanip>

#include "color/color.hpp"

void fix_cmyk();
void fix_hsl();
void fix_hsv();

int main( int argc, char *argv[] )
 {
  fix_cmyk();
  fix_hsl();
  fix_hsv();

  return EXIT_SUCCESS;
 }

void fix_cmyk()
 {
  color::cmyk<double>  ck;

  // Do some initialization
  color::make::red( ck );

  // First fix has to be OK
  std::cout << color::check::integrity( ck ) << std::endl;

  ck.set<0>( 0.1 );
  ck.set<1>( 0.1 );
  ck.set<2>( 0.1 );

  // This one has to fail
  std::cout << color::check::integrity( ck ) << std::endl;

  // Fix
  color::fix::integrity( ck );

  // Check again
  std::cout << color::check::integrity( ck ) << std::endl;
 }


void fix_hsl()
 {
  color::hsl<double>  h;

  // Do some initialization
  color::make::red( h );

  // First fix has to be OK
  std::cout << color::check::integrity( h ) << std::endl;

  h.set<0>( 5000 );

  // This one has to fail
  std::cout << color::check::integrity( h ) << std::endl;

  // Fix
  color::fix::integrity( h );

  // Check again
  std::cout << color::check::integrity( h ) << std::endl;
 }

void fix_hsv()
 {
  color::hsv<double>  h;

  // Do some initialization
  color::make::red( h );

  // First fix has to be OK
  std::cout << color::check::integrity( h ) << std::endl;

  h.set<0>( 5000 );

  // This one has to fail
  std::cout << color::check::integrity( h ) << std::endl;

  // Fix
  color::fix::integrity( h );

  // Check again
  std::cout << color::check::integrity( h ) << std::endl;
 }
