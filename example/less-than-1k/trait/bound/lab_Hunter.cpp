#include <iostream>
#include <iomanip>
#include <typeinfo>

#include "color/color.hpp"

#define Print(index) \
 std::cout << "    " \
      <<  index << ": [" << bound_name::minimum( index ) << ", " \
      << bound_name::maximum( index ) << "] |" \
      << bound_name::range( index ) << "|" << std::endl

template< typename bound_name >
 void print()
 {
  std::cout << " Bounds for "<< typeid( bound_name ).name() << std::endl;
  Print( 0 );
  Print( 1 );
  Print( 2 );
 }

int main( int argc, char *argv[] )
 {
  print< color::lab<float    , color::constant::lab::Hunter_entity>::bound_type >();
  print< color::lab<double   , color::constant::lab::Hunter_entity>::bound_type >();
  print< color::lab<uint8_t  , color::constant::lab::Hunter_entity>::bound_type >();
  print< color::lab<uint16_t , color::constant::lab::Hunter_entity>::bound_type >();
  print< color::lab<uint32_t , color::constant::lab::Hunter_entity>::bound_type >();

  return EXIT_SUCCESS;
 }
