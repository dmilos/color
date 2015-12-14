#include <iostream>
#include <iomanip>
#include <cstdint>

#include "color/color.hpp"

int main( int argc, char *argv[] )
 {
  // Instead of float you may put std::uint8_t,std::uint16_t, std::uint32_t, std::uint64_t, double, long double
  color::cmy<float> c;          

  // Here is how to extract gray component.
  auto gray = color::get::gray( c ); 
  
  // Now do whatever you wan to do
  std::cout << gray << std::endl;

  return EXIT_SUCCESS;
 }

