#include <iostream>
#include <iomanip>
#include <cstdint>
#include <typeinfo>

#include "color/color.hpp"

int main( int argc, char *argv[] )
 {
  using namespace color;
  using namespace std;

  cout << "gray<std::uint8_t > is: " << typeid( trait::component< gray< std::uint8_t  >::category_type >::instance_type ).name() << endl;
  cout << "gray<std::uint32_t> is: " << typeid( trait::component< gray< std::uint32_t >::category_type >::instance_type ).name() << endl;
  cout << "gray<float        > is: " << typeid( trait::component< gray< float         >::category_type >::instance_type ).name() << endl;
  cout << "gray<double       > is: " << typeid( trait::component< gray< double        >::category_type >::instance_type ).name() << endl;
  cout << "gray<long double  > is: " << typeid( trait::component< gray< long double   >::category_type >::instance_type ).name() << endl;
  return EXIT_SUCCESS;
 } 