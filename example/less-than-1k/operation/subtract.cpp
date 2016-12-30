#include <iostream>
#include <iomanip>

#include "color/color.hpp"

int main( int argc, char *argv[] )
 {
  ::color::rgb<double> a{ ::color::constant::orange_t{} };
  ::color::rgb<double> b{ ::color::constant::lime_t{} };
  ::color::rgb<double> r{ ::color::constant::blue_t{} };

  ::color::operation::subtract( r, a );
  std::cout<< " subtract( r , orange  ) = ";
  std::cout << r[0] << ", " << r[1] << ", " << r[2] << std::endl;
  std::cout << std::endl;

  ::color::operation::subtract( r, a, b );
  std::cout<< " subtract( orange, lime ) = ";
  std::cout << r[0] << ", " << r[1] << ", " << r[2] << std::endl;
  std::cout << std::endl;

  return EXIT_SUCCESS;
 }
