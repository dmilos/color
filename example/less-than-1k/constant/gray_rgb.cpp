#include <iostream>
#include <iomanip>

#include "color/color.hpp"

int main( int argc, char *argv[] )
 {
  color::rgb<float>          c; //!< Instead of float you may put std::uint8_t,std::uint16_t, std::uint32_t, std::uint64_t, double, long double

  // Initialize from constant. 
  // One amount of black, two amount of white. Total weight i 1+2=3. 1/3 is black part. 2/3 is white part. 
  // As result we have 66.666...% of gray.
  c = ::color::constant::gray_type<1,2>{};

  //  now you may do whatever you want to do with c

  std::cout << c[0] << ", " << c[1] << ", " << c[2] << std::endl;

  return EXIT_SUCCESS;
 }
