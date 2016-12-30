#include <iostream>
#include <iomanip>

#include "color/color.hpp"

void blend_rgb_noalpha2();
void blend_rgb_noalpha3();

int main( int argc, char *argv[] )
 {
  ::color::rgb<double> a, b;

   a = ::color::constant::orange_t{};
   b = ::color::constant::lime_t{};

  ::color::rgb<double> j;

  ::color::operation::blend( j , a, 0.2, b );
  std::cout<< " blend( j , orange, 0.2, lime ) = ";
  std::cout << j[0] << ", " << j[1] << ", " << j[2] << std::endl;
  std::cout << std::endl;

  j = ::color::operation::mix( a, 0.5, b );
  std::cout<< " blend( j , orange, 0.5, lime ) = ";
  std::cout << j[0] << ", " << j[1] << ", " << j[2] << std::endl;
  std::cout << std::endl;

  j = ::color::operation::mix( a, 0.75, b );
  std::cout<< " blend( j , orange, 0.75, lime ) = ";
  std::cout << j[0] << ", " << j[1] << ", " << j[2] << std::endl;
  std::cout << std::endl;

  return EXIT_SUCCESS;
 }
