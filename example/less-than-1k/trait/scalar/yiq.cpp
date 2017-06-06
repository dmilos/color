#include <iostream>
#include <iomanip>
#include <cstdint>
#include <typeinfo>

#include "color/color.hpp"

int main( int argc, char *argv[] )
 {
  using namespace color;
  using namespace std;

  cout << "yiq<std::uint8_t > is: " << typeid( trait::scalar< yiq< std::uint8_t  >::category_type >::instance_type ).name() << endl;
  cout << "yiq<std::uint16_t> is: " << typeid( trait::scalar< yiq< std::uint16_t >::category_type >::instance_type ).name() << endl;
  cout << "yiq<std::uint32_t> is: " << typeid( trait::scalar< yiq< std::uint32_t >::category_type >::instance_type ).name() << endl;
  cout << "yiq<float        > is: " << typeid( trait::scalar< yiq< float         >::category_type >::instance_type ).name() << endl;
  cout << "yiq<double       > is: " << typeid( trait::scalar< yiq< double        >::category_type >::instance_type ).name() << endl;
  cout << "yiq<long double  > is: " << typeid( trait::scalar< yiq< long double   >::category_type >::instance_type ).name() << endl;
  return EXIT_SUCCESS;
 }
