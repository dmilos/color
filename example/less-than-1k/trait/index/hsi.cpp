#include <iostream>
#include <iomanip>
#include <cstdint>
#include <typeinfo>

#include "color/color.hpp"

using namespace color;
using namespace std;

int main( int argc, char *argv[] )
 {
  cout << "hsi<std::uint8_t > is: " << typeid( trait::index< hsi< std::uint8_t >::category_type >::instance_type ).name() << endl;
  cout << "hsi<std::uint16_t> is: " << typeid( trait::index< hsi< std::uint16_t>::category_type >::instance_type ).name() << endl;
  cout << "hsi<std::uint32_t> is: " << typeid( trait::index< hsi< std::uint32_t>::category_type >::instance_type ).name() << endl;
  cout << "hsi<float        > is: " << typeid( trait::index< hsi< float        >::category_type >::instance_type ).name() << endl;
  cout << "hsi<double       > is: " << typeid( trait::index< hsi< double       >::category_type >::instance_type ).name() << endl;
  cout << "hsi<long double  > is: " << typeid( trait::index< hsi< long double  >::category_type >::instance_type ).name() << endl;
  return EXIT_SUCCESS;
 } 