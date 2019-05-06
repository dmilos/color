#include <iostream>
#include <iomanip>

#include "color/color.hpp"


int main( int argc, char *argv[] )
 {
  //!< Instead of double you may put: std::uint16_t, std::uint32_t, std::uint64_t, float, double, long double
  typedef color::rgb<double> color_t;
  color_t a{ color::constant::orange_t{} };
  color_t b{ color::constant::lime_t{} };
  color_t r{ color::constant::blue_t{} };

  color::operation::addition( r, a );
  std::cout<< " addition( r , orange ) = ";
  std::cout << r[0] << ", " << r[1] << ", " << r[2] << std::endl;
  std::cout << std::endl;

  color::operation::addition( r, a, b );
  std::cout<< " addition( r, orange, lime ) = ";
  std::cout << r[0] << ", " << r[1] << ", " << r[2] << std::endl;
  std::cout << std::endl;

  color::operation::_internal::addition<color_t::category_type>{}( r, a );
  std::cout<< " functor::addition{}( r , orange ) = ";
  std::cout << r[0] << ", " << r[1] << ", " << r[2] << std::endl;
  std::cout << std::endl;

  color::operation::_internal::addition<color_t::category_type>{}( r, a, b );
  std::cout<< " functor::addition{}( r, orange, lime ) = ";
  std::cout << r[0] << ", " << r[1] << ", " << r[2] << std::endl;
  std::cout << std::endl;

  return EXIT_SUCCESS;
 }
