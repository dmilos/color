#include <iostream>
#include <iomanip>

#include "color/color.hpp"

int main( int argc, char *argv[] )
 {
  //!< Instead of double you may put std::uint8_t,std::uint16_t, std::uint32_t, std::uint64_t, double, long double
  color::yuv< double, ::color::constant::yuv::BT_709_entity >  y;

  // Now you can do what ever you wan to do

  // Lets assign
  y = ::color::constant::lavender_type{};

  // and print
  std::cout << y[0] << ", " << y[1] << ", " << y[2] << std::endl;

  return EXIT_SUCCESS;
 }
