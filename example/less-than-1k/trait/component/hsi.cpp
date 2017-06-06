#include <iostream>
#include <iomanip>
#include <cstdint>
#include <typeinfo>

#include "color/color.hpp"

int main( int argc, char *argv[] )
 {
  using namespace color;
  using namespace std;

  cout << "hsi<std::uint8_t > is: " << typeid( trait::component< hsi< std::uint8_t  >::category_type >::instance_type ).name() << endl;
  cout << "hsi<std::uint16_t> is: " << typeid( trait::component< hsi< std::uint16_t >::category_type >::instance_type ).name() << endl;
  cout << "hsi<std::uint32_t> is: " << typeid( trait::component< hsi< std::uint32_t >::category_type >::instance_type ).name() << endl;
  cout << "hsi<float        > is: " << typeid( trait::component< hsi< float         >::category_type >::instance_type ).name() << endl;
  cout << "hsi<double       > is: " << typeid( trait::component< hsi< double        >::category_type >::instance_type ).name() << endl;
  return EXIT_SUCCESS;
 } 