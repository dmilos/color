#include <iostream>
#include <iomanip>
#include <cstdint>
#include <typeinfo>

#include "color/color.hpp"

using namespace color;
using namespace std;

int main( int argc, char *argv[] )
 {
  cout << "hsv<std::uint8_t > is: " << typeid( trait::index< hsv< std::uint8_t >::category_type >::instance_type ).name() << endl;
  cout << "hsv<std::uint16_t> is: " << typeid( trait::index< hsv< std::uint16_t>::category_type >::instance_type ).name() << endl;
  cout << "hsv<std::uint32_t> is: " << typeid( trait::index< hsv< std::uint32_t>::category_type >::instance_type ).name() << endl;
  cout << "hsv<float        > is: " << typeid( trait::index< hsv< float        >::category_type >::instance_type ).name() << endl;
  cout << "hsv<double       > is: " << typeid( trait::index< hsv< double       >::category_type >::instance_type ).name() << endl;
  cout << "hsv<long double  > is: " << typeid( trait::index< hsv< long double  >::category_type >::instance_type ).name() << endl;
  return EXIT_SUCCESS;
 }