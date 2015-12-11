#include <iostream>
#include <iomanip>
#include <stdint>

#include "color/color.hpp"

int main( int argc, char *argv[] )
 {
  // Instead of float you may put std::uint8_t,std::uint16_t, std::uint32_t, std::uint64_t, double, long double
  color::cmy<float> c;          

  // Here is how to extract blue component.
  auto blue = color::get::blue( c ); 
  
  // Now do whatever you wan to do
  std::cout << blue << std::endl

  return EXIT_SUCCESS;
 }

