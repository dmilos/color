#include <iostream>
#include <iomanip>
#include <cstdint>
#include <typeinfo>

#include "color/color.hpp"

int main( int argc, char *argv[] )
 {
  using namespace color;
  using namespace std;

  cout << "cmy<std::uint8_t > is: " << typeid( trait::container< cmy< std::uint8_t  >::category_type >::instance_type ).name() << endl;
  cout << "cmy<std::uint32_t> is: " << typeid( trait::container< cmy< std::uint32_t >::category_type >::instance_type ).name() << endl;
  cout << "cmy<float        > is: " << typeid( trait::container< cmy< float         >::category_type >::instance_type ).name() << endl;
  cout << "cmy<double       > is: " << typeid( trait::container< cmy< double        >::category_type >::instance_type ).name() << endl;
  cout << "cmy<long double  > is: " << typeid( trait::container< cmy< long double   >::category_type >::instance_type ).name() << endl;
  return EXIT_SUCCESS;
 }
