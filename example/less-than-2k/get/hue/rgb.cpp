#include <iostream>
#include <iomanip>
#include <cstdint>

#include "color/color.hpp"

int main( int argc, char *argv[] )
 {
  // Instead of float you may put std::uint8_t,std::uint16_t, std::uint32_t, std::uint64_t, double, long double
  color::rgb<float> c;

  // initialize c before get.
  c = color::constant::turquoise_t{};

  // Here is how to get hue value from RGB. It is used default formula
  auto hue1 = color::get::hue( c );
  // Now do whatever you wan to do
  std::cout << hue1 << std::endl;

  // Here is how to get hue value from RGB. It is used default formula
  auto hue2 = color::get::hue<::color::get::constant::rgb::hue::hexagon_entity>( c );
  // Now do whatever you wan to do
  std::cout << hue2 << std::endl;

  // Here is how to get hue value from RGB. It is used default formula
  auto hue3 = color::get::hue<::color::get::constant::rgb::hue::polar_atan2_entity>( c );
  // Now do whatever you wan to do
  std::cout << hue3 << std::endl;

  return EXIT_SUCCESS;
 }
