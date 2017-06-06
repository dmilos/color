#include <iostream>
#include <iomanip>
#include <cstdint>
#include <typeinfo>

#include "color/color.hpp"

int main( int argc, char *argv[] )
 {
  using namespace color;
  using namespace std;

  cout << "yuv<std::uint8_t > is: " << typeid( trait::index< yuv< std::uint8_t  >::category_type >::instance_type ).name() << endl;
  cout << "yuv<std::uint16_t> is: " << typeid( trait::index< yuv< std::uint16_t >::category_type >::instance_type ).name() << endl;
  cout << "yuv<std::uint32_t> is: " << typeid( trait::index< yuv< std::uint32_t >::category_type >::instance_type ).name() << endl;
  cout << "yuv<float        > is: " << typeid( trait::index< yuv< float         >::category_type >::instance_type ).name() << endl;
  cout << "yuv<double       > is: " << typeid( trait::index< yuv< double        >::category_type >::instance_type ).name() << endl;
  cout << "yuv<long double  > is: " << typeid( trait::index< yuv< long double   >::category_type >::instance_type ).name() << endl;
  return EXIT_SUCCESS;
 }
