#include <iostream>
#include <iomanip>
#include <cstdint>
#include <typeinfo>

#include "color/color.hpp"

int main( int argc, char *argv[] )
 {
  using namespace color;
  using namespace std;

  cout << "cmyk<std::uint8_t > is: " << typeid( trait::index< cmyk< std::uint8_t  >::category_type >::instance_type ).name() << endl;
  cout << "cmyk<std::uint32_t> is: " << typeid( trait::index< cmyk< std::uint32_t >::category_type >::instance_type ).name() << endl;
  cout << "cmyk<float        > is: " << typeid( trait::index< cmyk< float         >::category_type >::instance_type ).name() << endl;
  cout << "cmyk<double       > is: " << typeid( trait::index< cmyk< double        >::category_type >::instance_type ).name() << endl;
  cout << "cmyk<long double  > is: " << typeid( trait::index< cmyk< long double   >::category_type >::instance_type ).name() << endl;
  return EXIT_SUCCESS;
 } 