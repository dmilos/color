#include <iostream>
#include <iomanip>
#include <cstdint>

#include "color/color.hpp"

int main( int argc, char *argv[] )
 {
  // Instead of float you may put std::uint8_t, ..., std::uint64_t, double, long double
  ::color::rgb<float> c = ::color::constant::aqua_t{};

  // Here is how to get magenta component. Default is cmy_entity
  auto f0 = ::color::get::magenta( c );

  // Get magenta component by using Alvy Ray Smith algorithm.
  auto f1 = ::color::get::magenta< ::color::get::constant::rgb::magenta::cmy_entity  >( c );

  // Get magenta component by using CMYK calculation
  auto f2 = ::color::get::magenta< ::color::get::constant::rgb::magenta::cmyk_entity >( c );

  // Get magenta component by using HSL* calculation
  auto f3 = ::color::get::magenta< ::color::get::constant::rgb::magenta::hsl_star_entity >( c );
  
  // Now do whatever you wan to do
  std::cout << f0 << " - " << f1 << " - " << f2 << " - " << "-" << f3 << std::endl;

  return EXIT_SUCCESS;
 }

 


