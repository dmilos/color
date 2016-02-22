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
  color::cmyk<double>  ck;

  // Do some initialization
  color::make::red( ck );

  // First check has to be OK
  std::cout << color::check::integrity( ck ) << std::endl;

  ck.set<0>( 0.1 );
  ck.set<1>( 0.1 );
  ck.set<2>( 0.1 );

  // This one has to fail
  std::cout << color::check::integrity( ck ) << std::endl;

 }


void check_hsl()
 {
  color::hsl<double>  hl;

  // Do some initialization
  color::make::red( hl );

  // First check has to be OK
  std::cout << color::check::integrity( hl ) << std::endl;

  hl.set<0>( 5000 );

  // This one has to fail
  std::cout << color::check::integrity( hl ) << std::endl;

 }

void check_hsv()
 {
  color::hsv<double>  hv;

  // Do some initialization
  color::make::red( hv );

  // First check has to be OK
  std::cout << color::check::integrity( hv ) << std::endl;

  hv.set<0>( 5000 );

  // This one has to fail
  std::cout << color::check::integrity( hv ) << std::endl;
 }
