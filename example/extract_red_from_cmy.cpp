#include <iostream>
#include <iomanip>
#include <stdint>

#include "color/color.hpp"

int main( int argc, char *argv[] )
 {
  color::cmy<float> c;          //!< Instead of float you may put std::uint8_t,std::uint16_t, std::uint32_t, std::uint64_t, double, long double

  // Here is how to extract red component.
  auto red = color::get::red( c ); 
  
  // Now do ehatever you wan to do
  std::cout << red << std::endl

  return EXIT_SUCCESS;
 }

