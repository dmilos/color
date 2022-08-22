#include <iostream>
#include <iomanip>
#include <cstdint>

#include "color/color.hpp"

int main( int argc, char *argv[] )
 {
  // In place of float you may put std::uint8_t, ..., std::uint64_t, double, long double
  ::color::rgb<float> c = ::color::constant::aqua_t{};

  // Here is how to get yellow component. Default is cmy_entity
  auto f0 = ::color::get::yellow( c );

  // Get yellow component by using Alvy Ray Smith algorithm.
  auto f1 = ::color::get::yellow< ::color::get::constant::rgb::yellow::cmy_entity  >( c );

  // Get yellow component by using CMYK calculation
  auto f2 = ::color::get::yellow< ::color::get::constant::rgb::yellow::cmyk_entity >( c );

  // Get yellow component by using HSL* calculation
  auto f3 = ::color::get::yellow< ::color::get::constant::rgb::yellow::hsl_star_entity >( c );

  // Get red component by using by finding angle distance in hue wheel.
  auto f4 = ::color::get::yellow< ::color::get::constant::rgb::yellow::hue_angle_entity >( c );

  // Now do whatever you want to do
  std::cout << f0 << " - " << f1 << " - " << f2 << " - " << "-" << f3 << "-" << f4 << std::endl;

  return EXIT_SUCCESS;
 }




