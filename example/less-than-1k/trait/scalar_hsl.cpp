#include <iostream>
#include <iomanip>
#include <cstdint>
#include <typeinfo>

#include "color/color.hpp"

int main( int argc, char *argv[] )
 {
  using namespace color;
  using namespace std;

  cout << "hsl<std::uint8_t > is: " << typeid( trait::scalar< hsl< std::uint8_t  >::category_type >::instance_type ).name() << endl;
  cout << "hsl<std::uint16_t> is: " << typeid( trait::scalar< hsl< std::uint16_t >::category_type >::instance_type ).name() << endl;
  cout << "hsl<std::uint32_t> is: " << typeid( trait::scalar< hsl< std::uint32_t >::category_type >::instance_type ).name() << endl;
  cout << "hsl<float        > is: " << typeid( trait::scalar< hsl< float         >::category_type >::instance_type ).name() << endl;
  cout << "hsl<double       > is: " << typeid( trait::scalar< hsl< double        >::category_type >::instance_type ).name() << endl;
  cout << "hsl<long double  > is: " << typeid( trait::scalar< hsl< long double   >::category_type >::instance_type ).name() << endl;
  return EXIT_SUCCESS;
 }
