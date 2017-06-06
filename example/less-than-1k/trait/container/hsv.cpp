#include <iostream>
#include <iomanip>
#include <cstdint>
#include <typeinfo>

#include "color/color.hpp"

int main( int argc, char *argv[] )
 {
  using namespace color;
  using namespace std;

  cout << "hsv<std::uint8_t > is: " << typeid( trait::container< hsv< std::uint8_t  >::category_type >::instance_type ).name() << endl;
  cout << "hsv<std::uint32_t> is: " << typeid( trait::container< hsv< std::uint32_t >::category_type >::instance_type ).name() << endl;
  cout << "hsv<float        > is: " << typeid( trait::container< hsv< float         >::category_type >::instance_type ).name() << endl;
  cout << "hsv<double       > is: " << typeid( trait::container< hsv< double        >::category_type >::instance_type ).name() << endl;
  cout << "hsv<long double  > is: " << typeid( trait::container< hsv< long double   >::category_type >::instance_type ).name() << endl;
  return EXIT_SUCCESS;
 } 