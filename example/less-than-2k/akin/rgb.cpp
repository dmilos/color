#include <iostream>
#include <iomanip>
#include <typeinfo>

#include "color/color.hpp"

using namespace std;

template< typename type_name >
 void akin_rgb()
  {
   typedef ::color::rgb< type_name > model_name;
   cout << "Akin types for" << endl;
   cout << "  model: "  << typeid( model_name ).name() << endl;
   cout << "  category: "<< typeid( typename model_name::category_type ).name() << endl;

   cout << "    CMY:  " << typeid( typename ::color::akin::rgb< typename ::color::cmy<  type_name>::category_type >::akin_type ).name() << endl;
   cout << "    CMYK: " << typeid( typename ::color::akin::rgb< typename ::color::cmyk< type_name>::category_type >::akin_type ).name() << endl;
   cout << "    gray: " << typeid( typename ::color::akin::rgb< typename ::color::gray< type_name>::category_type >::akin_type ).name() << endl;
   cout << "    HSL:  " << typeid( typename ::color::akin::rgb< typename ::color::hsl<  type_name>::category_type >::akin_type ).name() << endl;
   cout << "    HSV:  " << typeid( typename ::color::akin::rgb< typename ::color::hsv<  type_name>::category_type >::akin_type ).name() << endl;
   cout << "    RGB:  " << typeid( typename ::color::akin::rgb< typename ::color::rgb<  type_name>::category_type >::akin_type ).name() << endl;
   cout << "    YIQ:  " << typeid( typename ::color::akin::rgb< typename ::color::yiq<  type_name>::category_type >::akin_type ).name() << endl;
   cout << "    YUV:  " << typeid( typename ::color::akin::rgb< typename ::color::yuv<  type_name>::category_type >::akin_type ).name() << endl;
  }

int main( int argc, char *argv[] )
 {
  cout << "Hello World" << endl;

  akin_rgb<uint8_t>();
  akin_rgb<uint16_t>();
  akin_rgb<uint32_t>();
  akin_rgb<uint64_t>();
  akin_rgb<float>();
  akin_rgb<double>();
  akin_rgb<long double>();

  return EXIT_SUCCESS;
 }