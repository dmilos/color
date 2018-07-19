#include <iostream>
#include <iomanip>

#include "color/color.hpp"

int main( int argc, char *argv[] )
 {
  color::lab<std::int16_t>  c;  // Instead of std::int16_t put also std::int32_t or std::int64_t

  // Do some corerct initialization
  c = color::constant::red_t{};

  // First check has to be OK
  std::cout << "false == color::check::overburn( c ) == " << color::check::overburn( c ) << std::endl;

  c.set<0>( -10  );  // Native bound is: L = [    0, 100 ]
  c.set<1>( -250 );  // Native bound is: a = [ -127, 127 ]
  c.set<2>( 300  );  // Native bound is: b = [ -127, 127 ]

  // This one has to fail i.g return true
  std::cout << "true == color::check::overburn( c ) == " << color::check::overburn( c ) << std::endl;

  return EXIT_SUCCESS;
 }