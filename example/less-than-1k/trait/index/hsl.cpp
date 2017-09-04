#include <iostream>
#include <iomanip>
#include <cstdint>
#include <typeinfo>

#include "color/color.hpp"

using namespace color;
using namespace std;

int main( int argc, char *argv[] )
 {
  cout << "hsl<std::uint8_t > is: " << typeid( trait::index< hsl< std::uint8_t >::category_type >::instance_type ).name() << endl;
  cout << "hsl<std::uint16_t> is: " << typeid( trait::index< hsl< std::uint16_t>::category_type >::instance_type ).name() << endl;
  cout << "hsl<std::uint32_t> is: " << typeid( trait::index< hsl< std::uint32_t>::category_type >::instance_type ).name() << endl;
  cout << "hsl<float        > is: " << typeid( trait::index< hsl< float        >::category_type >::instance_type ).name() << endl;
  cout << "hsl<double       > is: " << typeid( trait::index< hsl< double       >::category_type >::instance_type ).name() << endl;
  cout << "hsl<long double  > is: " << typeid( trait::index< hsl< long double  >::category_type >::instance_type ).name() << endl;
  return EXIT_SUCCESS;
 }
