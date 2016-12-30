#include <iostream>
#include <iomanip>

#include "color/color.hpp"

int main( int argc, char *argv[] )
 {
  ::color::rgb<double> a;

   a = ::color::constant::orange_t{};

  ::color::rgb<double> r;

  ::color::operation::gain( r , a, 0.2 );
  std::cout<< " gain( r , orange, 0.2 ) = ";
  std::cout << r[0] << ", " << r[1] << ", " << r[2] << std::endl;
  std::cout << std::endl;

  ::color::operation::gain( r, 0.5 );
  std::cout<< " gain( orange, 0.5 ) = ";
  std::cout << r[0] << ", " << r[1] << ", " << r[2] << std::endl;
  std::cout << std::endl;

  return EXIT_SUCCESS;
 }
