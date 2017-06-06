#include <iostream>
#include <iomanip>
#include <typeinfo>

#include "color/color.hpp"

using namespace std;

template< typename bound_name >
 void print()
 {
  cout << " Bounds for "<< typeid( bound_name ).name() << endl;
  cout << "    0: [" << bound_name::minimum( 0 ) << ", " << bound_name::maximum( 0 ) << "] |" << bound_name::range( 0 ) << "|" << endl;
  cout << "    1: [" << bound_name::minimum( 1 ) << ", " << bound_name::maximum( 1 ) << "] |" << bound_name::range( 1 ) << "|" << endl;
  cout << "    2: [" << bound_name::minimum( 2 ) << ", " << bound_name::maximum( 2 ) << "] |" << bound_name::range( 2 ) << "|" << endl;
 }

int main( int argc, char *argv[] )
 {
  print< ::color::YPbPr<float>::bound_type   >();
  print< ::color::YPbPr<double>::bound_type  >();
  print< ::color::YPbPr<uint8_t>::bound_type >();
  print< ::color::YPbPr<uint16_t>::bound_type >();
  print< ::color::YPbPr<uint32_t>::bound_type >();

  return EXIT_SUCCESS;
 }
