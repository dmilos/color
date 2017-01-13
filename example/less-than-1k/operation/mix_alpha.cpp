#include <iostream>
#include <iomanip>

#include "color/color.hpp"


int main( int argc, char *argv[] )
 {
  ::color::rgba<double> a, b;

  a = ::color::constant::orange_t{};
  b = ::color::constant::lime_t{};

  ::color::rgba<double> j;

  ::color::set::alpha( a, 0.5 );
  ::color::set::alpha( b, 0.25 );

  j = ::color::operation::mix( a, b );
  std::cout<< " j = mix( orange(0.5), lime(0.25) ) = ";

  std::cout << j[0] << ", " << j[1] << ", " << j[2] << std::endl;

  std::cout << std::endl;

  return EXIT_SUCCESS;
 }
