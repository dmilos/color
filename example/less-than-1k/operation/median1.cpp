#include <iostream>
#include <iomanip>

#include "color/color.hpp"

int main( int argc, char *argv[] )
 {
  ::color::rgb<double> a, b;

  a = ::color::constant::orange_t{};
  b = ::color::constant::lime_t{};

  ::color::operation::median( a, 0.1, b );
  std::cout<< " convex::accumulate( a, 0.1, lime ) = ";
  std::cout << a[0] << ", " << a[1] << ", " << a[2] << std::endl;

  std::cout << std::endl;

  ::color::operation::median( a, 0.2, b );
  std::cout<< " convex::accumulate( a, 0.2, lime ) = ";
  std::cout << a[0] << ", " << a[1] << ", " << a[2] << std::endl;
  std::cout << std::endl;

  ::color::operation::median( a, 0.3, b );
  std::cout<< " convex::accumulate( a, 0.3, lime ) = ";
  std::cout << a[0] << ", " << a[1] << ", " << a[2] << std::endl;
  std::cout << std::endl;

  return EXIT_SUCCESS;
 }
