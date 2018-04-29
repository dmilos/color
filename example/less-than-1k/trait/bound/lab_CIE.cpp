#include <iostream>
#include <iomanip>
#include <typeinfo>

#include "color/color.hpp"

using namespace std;
using namespace color;
using namespace color::constant;
using namespace color::constant::lab;

#define Print(index) \
 cout << "    " <<  index << ": [" << bound_name::minimum( index ) << ", " << bound_name::maximum( index ) << "] |" << bound_name::range( index ) << "|" << endl

template< typename bound_name >
 void print()
 {
  cout << " Bounds for "<< typeid( bound_name ).name() << endl;
  Print( 0 );
  Print( 1 );
  Print( 2 );
 }

int main( int argc, char *argv[] )
 {
  print< lab<float>::bound_type   , CIE_entity >();
  print< lab<double>::bound_type  , CIE_entity >();
  print< lab<uint8_t>::bound_type , CIE_entity >();
  print< lab<uint16_t>::bound_type, CIE_entity >();
  print< lab<uint32_t>::bound_type, CIE_entity >();

  return EXIT_SUCCESS;
 }
