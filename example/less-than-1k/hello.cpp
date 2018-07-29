#include <iostream>
#include <iomanip>

#include "color/color.hpp"

int main( int argc, char *argv[] )
 {
  color::rgb< double >  r;

  r = ::color::constant::lavender_t{};

  std::cout << "Red: " << r[0] << ",  Green: " << r[1] << ", Blue: " << r[2] << std::endl;

  return EXIT_SUCCESS;
 }
