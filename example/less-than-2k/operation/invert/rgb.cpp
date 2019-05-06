#include <iostream>
#include <iomanip>

#include "color/color.hpp"

int main( int argc, char *argv[] )
 {
  //!< Instead of std::uint8_t    you may put: std::uint16_t, std::uint32_t, std::uint64_t, float, double, long double  
  typedef ::color::rgb< std::uint8_t > color_t;
  color_t c;
  color_t r{ ::color::constant::blue_t{} };

  c = ::color::constant::orange_t{}; //!< Fill with some useful information

  std::cout<< "Orange in ::color::rgb<std::uint8_t> = ";
  std::cout << c[0] << ", " << c[1] << ", " << c[2] << std::endl;

  ::color::operation::invert( r );
  std::cout<< ";  Inverted = ";
  std::cout << c[0] << ", " << c[1] << ", " << c[2] << std::endl;

  ::color::operation::invert( r, c );
  std::cout<< ";  Inverted = ";
  std::cout << r[0] << ", " << r[1] << ", " << r[2] << std::endl;

  ::color::operation::_internal::invert< color_t::category_type >{}( c );
  std::cout<< ";  Inverted = ";
  std::cout << c[0] << ", " << c[1] << ", " << c[2] << std::endl;

  ::color::operation::_internal::invert< color_t::category_type >{}( r, c );
  std::cout<< ";  Inverted = ";
  std::cout << r[0] << ", " << r[1] << ", " << r[2] << std::endl;

  return EXIT_SUCCESS;
 }
