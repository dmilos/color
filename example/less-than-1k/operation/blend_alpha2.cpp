#include <iostream>
#include <iomanip>

#include "color/color.hpp"

int main( int argc, char *argv[] )
 {
  ::color::rgba<double> a, b;

  a = ::color::constant::orange_t{};
  b = ::color::constant::lime_t{};

  ::color::set::alpha( a, 0.5 );
  ::color::set::alpha( b, 0.25 );

  ::color::operation::blend( a, b );
  std::cout<< " j = blend( orange(0.5), lime(0.25) ) = ";
  std::cout << a[0] << ", " << a[1] << ", " << a[2] << std::endl;
  std::cout << std::endl;

  return EXIT_SUCCESS;
 }
