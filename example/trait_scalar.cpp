#include <iostream>
#include <iomanip>
#include <cstdint>
#include <typeinfo>

#include "color/color.hpp"

void trait_scalar_in_rgb();
void trait_scalar_in_cmy();
void trait_scalar_in_cmyk();
void trait_scalar_in_gray();
void trait_scalar_in_hsl();
void trait_scalar_in_hsv();
void trait_scalar_in_yiq();
void trait_scalar_in_yuv();

int main( int argc, char *argv[] )
 {
  std::cout<< "---- ---- ---- ---- ---- ---- ---- ---- ---- ---- ---- ---- ---- ---- ---- ----" << std::endl;
  trait_scalar_in_rgb();
  trait_scalar_in_cmy();
  trait_scalar_in_cmyk();
  trait_scalar_in_gray();
  trait_scalar_in_hsl();
  trait_scalar_in_hsv();
  trait_scalar_in_yiq();
  trait_scalar_in_yuv();
  std::cout<< "---- ---- ---- ---- ---- ---- ---- ---- ---- ---- ---- ---- ---- ---- ---- ----" << std::endl;
  return EXIT_SUCCESS;
 }

void trait_scalar_in_rgb()
 {
  std::cout << "Scalar for color::rgb< std::uint8_t  > is: " << typeid( ::color::trait::scalar< color::rgb< std::uint8_t  >::category_type >::instance_type ).name() << std::endl;
  std::cout << "Scalar for color::rgb< std::uint16_t > is: " << typeid( ::color::trait::scalar< color::rgb< std::uint16_t >::category_type >::instance_type ).name() << std::endl;
  std::cout << "Scalar for color::rgb< std::uint32_t > is: " << typeid( ::color::trait::scalar< color::rgb< std::uint32_t >::category_type >::instance_type ).name() << std::endl;
  std::cout << "Scalar for color::rgb< std::uint64_t > is: " << typeid( ::color::trait::scalar< color::rgb< std::uint64_t >::category_type >::instance_type ).name() << std::endl;
  std::cout << "Scalar for color::rgb< float         > is: " << typeid( ::color::trait::scalar< color::rgb< float         >::category_type >::instance_type ).name() << std::endl;
  std::cout << "Scalar for color::rgb< double        > is: " << typeid( ::color::trait::scalar< color::rgb< double        >::category_type >::instance_type ).name() << std::endl;
  std::cout << "Scalar for color::rgb< long double   > is: " << typeid( ::color::trait::scalar< color::rgb< long double   >::category_type >::instance_type ).name() << std::endl;
 }

void trait_scalar_in_cmy()
 {
  std::cout << "Scalar for color::cmy< std::uint8_t  > is: " << typeid( ::color::trait::scalar< color::cmy< std::uint8_t  >::category_type >::instance_type ).name() << std::endl;
  std::cout << "Scalar for color::cmy< std::uint16_t > is: " << typeid( ::color::trait::scalar< color::cmy< std::uint16_t >::category_type >::instance_type ).name() << std::endl;
  std::cout << "Scalar for color::cmy< std::uint32_t > is: " << typeid( ::color::trait::scalar< color::cmy< std::uint32_t >::category_type >::instance_type ).name() << std::endl;
  std::cout << "Scalar for color::cmy< std::uint64_t > is: " << typeid( ::color::trait::scalar< color::cmy< std::uint64_t >::category_type >::instance_type ).name() << std::endl;
  std::cout << "Scalar for color::cmy< float         > is: " << typeid( ::color::trait::scalar< color::cmy< float         >::category_type >::instance_type ).name() << std::endl;
  std::cout << "Scalar for color::cmy< double        > is: " << typeid( ::color::trait::scalar< color::cmy< double        >::category_type >::instance_type ).name() << std::endl;
  std::cout << "Scalar for color::cmy< long double   > is: " << typeid( ::color::trait::scalar< color::cmy< long double   >::category_type >::instance_type ).name() << std::endl;
 }

void trait_scalar_in_cmyk()
 {
  std::cout << "Scalar for color::cmy< std::uint8_t  > is: " << typeid( ::color::trait::scalar< color::cmyk< std::uint8_t  >::category_type >::instance_type ).name() << std::endl;
  std::cout << "Scalar for color::cmy< std::uint16_t > is: " << typeid( ::color::trait::scalar< color::cmyk< std::uint16_t >::category_type >::instance_type ).name() << std::endl;
  std::cout << "Scalar for color::cmy< std::uint32_t > is: " << typeid( ::color::trait::scalar< color::cmyk< std::uint32_t >::category_type >::instance_type ).name() << std::endl;
  std::cout << "Scalar for color::cmy< std::uint64_t > is: " << typeid( ::color::trait::scalar< color::cmyk< std::uint64_t >::category_type >::instance_type ).name() << std::endl;
  std::cout << "Scalar for color::cmy< float         > is: " << typeid( ::color::trait::scalar< color::cmyk< float         >::category_type >::instance_type ).name() << std::endl;
  std::cout << "Scalar for color::cmy< double        > is: " << typeid( ::color::trait::scalar< color::cmyk< double        >::category_type >::instance_type ).name() << std::endl;
  std::cout << "Scalar for color::cmy< long double   > is: " << typeid( ::color::trait::scalar< color::cmyk< long double   >::category_type >::instance_type ).name() << std::endl;
 }

void trait_scalar_in_hsv()
 {
  std::cout << "Scalar for color::hsv< std::uint8_t  > is: " << typeid( ::color::trait::scalar< color::hsv< std::uint8_t  >::category_type >::instance_type ).name() << std::endl;
  std::cout << "Scalar for color::hsv< std::uint16_t > is: " << typeid( ::color::trait::scalar< color::hsv< std::uint16_t >::category_type >::instance_type ).name() << std::endl;
  std::cout << "Scalar for color::hsv< std::uint32_t > is: " << typeid( ::color::trait::scalar< color::hsv< std::uint32_t >::category_type >::instance_type ).name() << std::endl;
  std::cout << "Scalar for color::hsv< std::uint64_t > is: " << typeid( ::color::trait::scalar< color::hsv< std::uint64_t >::category_type >::instance_type ).name() << std::endl;
  std::cout << "Scalar for color::hsv< float         > is: " << typeid( ::color::trait::scalar< color::hsv< float         >::category_type >::instance_type ).name() << std::endl;
  std::cout << "Scalar for color::hsv< double        > is: " << typeid( ::color::trait::scalar< color::hsv< double        >::category_type >::instance_type ).name() << std::endl;
  std::cout << "Scalar for color::hsv< long double   > is: " << typeid( ::color::trait::scalar< color::hsv< long double   >::category_type >::instance_type ).name() << std::endl;
 }

void trait_scalar_in_yiq()
 {
  std::cout << "Scalar for color::yiq< std::uint8_t  > is: " << typeid( ::color::trait::scalar< color::yiq< std::uint8_t  >::category_type >::instance_type ).name() << std::endl;
  std::cout << "Scalar for color::yiq< std::uint16_t > is: " << typeid( ::color::trait::scalar< color::yiq< std::uint16_t >::category_type >::instance_type ).name() << std::endl;
  std::cout << "Scalar for color::yiq< std::uint32_t > is: " << typeid( ::color::trait::scalar< color::yiq< std::uint32_t >::category_type >::instance_type ).name() << std::endl;
  std::cout << "Scalar for color::yiq< std::uint64_t > is: " << typeid( ::color::trait::scalar< color::yiq< std::uint64_t >::category_type >::instance_type ).name() << std::endl;
  std::cout << "Scalar for color::yiq< float         > is: " << typeid( ::color::trait::scalar< color::yiq< float         >::category_type >::instance_type ).name() << std::endl;
  std::cout << "Scalar for color::yiq< double        > is: " << typeid( ::color::trait::scalar< color::yiq< double        >::category_type >::instance_type ).name() << std::endl;
  std::cout << "Scalar for color::yiq< long double   > is: " << typeid( ::color::trait::scalar< color::yiq< long double   >::category_type >::instance_type ).name() << std::endl;
 }

void trait_scalar_in_yuv()
 {
  std::cout << "Scalar for color::yuv< std::uint8_t  > is: " << typeid( ::color::trait::scalar< color::yuv< std::uint8_t  >::category_type >::instance_type ).name() << std::endl;
  std::cout << "Scalar for color::yuv< std::uint16_t > is: " << typeid( ::color::trait::scalar< color::yuv< std::uint16_t >::category_type >::instance_type ).name() << std::endl;
  std::cout << "Scalar for color::yuv< std::uint32_t > is: " << typeid( ::color::trait::scalar< color::yuv< std::uint32_t >::category_type >::instance_type ).name() << std::endl;
  std::cout << "Scalar for color::yuv< std::uint64_t > is: " << typeid( ::color::trait::scalar< color::yuv< std::uint64_t >::category_type >::instance_type ).name() << std::endl;
  std::cout << "Scalar for color::yuv< float         > is: " << typeid( ::color::trait::scalar< color::yuv< float         >::category_type >::instance_type ).name() << std::endl;
  std::cout << "Scalar for color::yuv< double        > is: " << typeid( ::color::trait::scalar< color::yuv< double        >::category_type >::instance_type ).name() << std::endl;
  std::cout << "Scalar for color::yuv< long double   > is: " << typeid( ::color::trait::scalar< color::yuv< long double   >::category_type >::instance_type ).name() << std::endl;
 }
