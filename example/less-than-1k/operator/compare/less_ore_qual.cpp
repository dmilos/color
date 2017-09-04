#include <iostream>
#include <iomanip>

#include "color/color.hpp"

// NOTE: You can compare ONLY colors of the same model and format.
int main( int argc, char *argv[] )
 {
  typedef ::color::rgb<float> color_t; //!< Instead of float    you may put: std::uint8_t, std::uint16_t, std::uint32_t, std::uint64_t, double, long double

  color_t a, b;

  a = ::color::constant::orange_t{};
  b = ::color::constant::lime_t{};

  color_t result;

  if( a <= b )
   {
    std::cout<< "It is less or equal" << std::endl;
   }

  return EXIT_SUCCESS;
 }
