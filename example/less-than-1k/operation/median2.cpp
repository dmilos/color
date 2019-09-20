#include <iostream>
#include <iomanip>

#include "color/color.hpp"

int main( int argc, char *argv[] )
 {
  ::color::rgb<double> a, b;

  a = ::color::constant::orange_t{};
  b = ::color::constant::lime_t{};

  ::color::rgb<double> j;

  ::color::operation::median( j , a, 0.25, b );
  std::cout<< " convex::full( j , orange, 0.25, lime ) = ";
  std::cout << j[0] << ", " << j[1] << ", " << j[2] << std::endl;
  std::cout << std::endl;

  ::color::operation::median( j , a, 0.5, b );
  std::cout<< " convex::full( j , orange, 0.5, lime ) = ";
  std::cout << j[0] << ", " << j[1] << ", " << j[2] << std::endl;
  std::cout << std::endl;

  ::color::operation::median( j , a, 0.75, b );
  std::cout<< " convex::full( j , orange, 0.75, lime ) = ";
  std::cout << j[0] << ", " << j[1] << ", " << j[2] << std::endl;
  std::cout << std::endl;

  return EXIT_SUCCESS;
 }

