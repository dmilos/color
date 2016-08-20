#include <iostream>
#include <iomanip>
#include <cstdint>
#include <typeinfo>

#include "color/color.hpp"

int main( int argc, char *argv[] )
 {
  // Instead of float you may put std::uint8_t,std::uint16_t, std::uint32_t, std::uint64_t, float, double, long double
  typedef color::hsv<float>::bound_type bound_type;

  std::cout << " Bounds for "<< typeid( bound_type ).name() << std::endl;
  std::cout << "    0: [" << bound_type::minimum( 0 ) << ", " << bound_type::maximum( 0 ) << "] |" << bound_type::range( 0 ) << "|" << std::endl;
  std::cout << "    1: [" << bound_type::minimum( 1 ) << ", " << bound_type::maximum( 1 ) << "] |" << bound_type::range( 1 ) << "|" << std::endl;
  std::cout << "    2: [" << bound_type::minimum( 2 ) << ", " << bound_type::maximum( 2 ) << "] |" << bound_type::range( 2 ) << "|" << std::endl;

  return EXIT_SUCCESS;
 }
