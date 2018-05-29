#include <iostream>
#include <iomanip>
#include <typeinfo>

#include "color/color.hpp"

using namespace std;

template< typename type_name >
 void akin_cmy()
  {
   typedef ::color::cmyk< type_name > model_name;
   cout << "Akin types for" << endl;
   cout << "  model: "  << typeid( model_name ).name() << endl;
   cout << "  category: "<< typeid( typename model_name::category_type ).name() << endl;

   cout << "    CMY:  " << typeid( typename ::color::akin::cmy< typename ::color::cmy<  type_name>::category_type >::akin_type ).name() << endl;
   cout << "    CMYK: " << typeid( typename ::color::akin::cmy< typename ::color::cmyk< type_name>::category_type >::akin_type ).name() << endl;
   cout << "    gray: " << typeid( typename ::color::akin::cmy< typename ::color::gray< type_name>::category_type >::akin_type ).name() << endl;
   cout << "    HSL:  " << typeid( typename ::color::akin::cmy< typename ::color::hsl<  type_name>::category_type >::akin_type ).name() << endl;
   cout << "    HSV:  " << typeid( typename ::color::akin::cmy< typename ::color::hsv<  type_name>::category_type >::akin_type ).name() << endl;
   cout << "    RGB:  " << typeid( typename ::color::akin::cmy< typename ::color::rgb<  type_name>::category_type >::akin_type ).name() << endl;
   cout << "    YIQ:  " << typeid( typename ::color::akin::cmy< typename ::color::yiq<  type_name>::category_type >::akin_type ).name() << endl;
   cout << "    YUV:  " << typeid( typename ::color::akin::cmy< typename ::color::yuv<  type_name>::category_type >::akin_type ).name() << endl;
  }

int main( int argc, char *argv[] )
 {
  cout << "Hello World" << endl;

  akin_cmy<uint8_t>();
  akin_cmy<uint16_t>();
  akin_cmy<uint32_t>();
  akin_cmy<uint64_t>();
  akin_cmy<float>();
  akin_cmy<double>();
  akin_cmy<long double>();

  return EXIT_SUCCESS;
 }