#include <iostream>
#include <iomanip>
#include <cstdint>
#include <typeinfo>

#include "color/color.hpp"

int main( int argc, char *argv[] )
 {
  using namespace color;
  using namespace std;

  cout << "hsi<std::uint8_t > is: " << typeid( trait::scalar< hsi< std::uint8_t  >::category_type >::instance_type ).name() << endl;
  cout << "hsi<std::uint32_t> is: " << typeid( trait::scalar< hsi< std::uint32_t >::category_type >::instance_type ).name() << endl;
  cout << "hsi<float        > is: " << typeid( trait::scalar< hsi< float         >::category_type >::instance_type ).name() << endl;
  cout << "hsi<double       > is: " << typeid( trait::scalar< hsi< double        >::category_type >::instance_type ).name() << endl;
  cout << "hsi<long double  > is: " << typeid( trait::scalar< hsi< long double   >::category_type >::instance_type ).name() << endl;
  return EXIT_SUCCESS;
 } 