#include <iostream>
#include <iomanip>

#include "color/color.hpp"

int main( int argc, char *argv[] )
 {
  color::akin::gray< ::color::cmy<std::uint8_t>::category_type >::akin_type  a;
  color::akin::gray< ::color::cmy<float>::category_type        >::akin_type  b;
  color::akin::gray< ::color::cmy<double>::category_type       >::akin_type  c;
  color::akin::gray< ::color::cmy<long double>::category_type  >::akin_type  d;

  return EXIT_SUCCESS;
 }
