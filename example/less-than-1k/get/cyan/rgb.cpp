#include <iostream>
#include <iomanip>
#include <cstdint>

#include "color/color.hpp"

int main( int argc, char *argv[] )
 {
  // Instead of float you may put std::uint8_t, ..., std::uint64_t, double, long double
  ::color::rgb<float> c = ::color::constant::aqua_t{};

  // Here is how to get cyan component. Default is cmy_entity
  auto f0 = ::color::get::cyan( c );

  // Get cyan component by using Alvy Ray Smith algorithm.
  auto f1 = ::color::get::cyan< ::color::get::constant::rgb::cyan::cmy_entity  >( c );

  // Get cyan component by using CMYK calculation
  auto f2 = ::color::get::cyan< ::color::get::constant::rgb::cyan::cmyk_entity >( c );

  // Get cyan component by using HSL* calculation
  auto f3 = ::color::get::cyan< ::color::get::constant::rgb::cyan::hsl_star_entity >( c );

  // Get red component by using by finding angle distance in hue wheel.
  auto f4 = ::color::get::cyan< ::color::get::constant::rgb::cyan::hue_angle_entity >( c );

  // Now do whatever you wan to do
  std::cout << f0 << " - " << f1 << " - " << f2 << " - " << "-" << f3 << "-" << f4 << std::endl;

  return EXIT_SUCCESS;
 }
