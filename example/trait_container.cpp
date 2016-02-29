#include <iostream>
#include <iomanip>
#include <cstdint>
#include <typeinfo>

#include "color/color.hpp"

void trait_container_in_rgb();
void trait_container_in_cmy();
void trait_container_in_cmyk();
void trait_container_in_gray();
void trait_container_in_hsl();
void trait_container_in_hsv();
void trait_container_in_yiq();
void trait_container_in_yuv();

int main( int argc, char *argv[] )
 {
  std::cout<< "---- ---- ---- ---- ---- ---- ---- ---- ---- ---- ---- ---- ---- ---- ---- ----" << std::endl;
  trait_container_in_rgb();
  trait_container_in_cmy();
  trait_container_in_cmyk();
  trait_container_in_gray();
  trait_container_in_hsl();
  trait_container_in_hsv();
  trait_container_in_yiq();
  trait_container_in_yuv();
  std::cout<< "---- ---- ---- ---- ---- ---- ---- ---- ---- ---- ---- ---- ---- ---- ---- ----" << std::endl;
  return EXIT_SUCCESS;
 }

void trait_container_in_cmy()
 {
  std::cout << "container for color::cmy< std::uint8_t  > is: " << typeid( ::color::trait::container< color::cmy< std::uint8_t  >::category_type >::instance_type ).name() << std::endl;
  std::cout << "container for color::cmy< std::uint16_t > is: " << typeid( ::color::trait::container< color::cmy< std::uint16_t >::category_type >::instance_type ).name() << std::endl;
  std::cout << "container for color::cmy< std::uint32_t > is: " << typeid( ::color::trait::container< color::cmy< std::uint32_t >::category_type >::instance_type ).name() << std::endl;
  std::cout << "container for color::cmy< std::uint64_t > is: " << typeid( ::color::trait::container< color::cmy< std::uint64_t >::category_type >::instance_type ).name() << std::endl;
  std::cout << "container for color::cmy< float         > is: " << typeid( ::color::trait::container< color::cmy< float         >::category_type >::instance_type ).name() << std::endl;
  std::cout << "container for color::cmy< double        > is: " << typeid( ::color::trait::container< color::cmy< double        >::category_type >::instance_type ).name() << std::endl;
  std::cout << "container for color::cmy< long double   > is: " << typeid( ::color::trait::container< color::cmy< long double   >::category_type >::instance_type ).name() << std::endl;
 }

void trait_container_in_cmyk()
 {
  std::cout << "container for color::cmyk< std::uint8_t  > is: " << typeid( ::color::trait::container< color::cmyk< std::uint8_t  >::category_type >::instance_type ).name() << std::endl;
  std::cout << "container for color::cmyk< std::uint16_t > is: " << typeid( ::color::trait::container< color::cmyk< std::uint16_t >::category_type >::instance_type ).name() << std::endl;
  std::cout << "container for color::cmyk< std::uint32_t > is: " << typeid( ::color::trait::container< color::cmyk< std::uint32_t >::category_type >::instance_type ).name() << std::endl;
  std::cout << "container for color::cmyk< std::uint64_t > is: " << typeid( ::color::trait::container< color::cmyk< std::uint64_t >::category_type >::instance_type ).name() << std::endl;
  std::cout << "container for color::cmyk< float         > is: " << typeid( ::color::trait::container< color::cmyk< float         >::category_type >::instance_type ).name() << std::endl;
  std::cout << "container for color::cmyk< double        > is: " << typeid( ::color::trait::container< color::cmyk< double        >::category_type >::instance_type ).name() << std::endl;
  std::cout << "container for color::cmyk< long double   > is: " << typeid( ::color::trait::container< color::cmyk< long double   >::category_type >::instance_type ).name() << std::endl;
 }

void trait_container_in_gray()
 {
  std::cout << "container for color::gray< std::uint8_t  > is: " << typeid( ::color::trait::container< color::gray< std::uint8_t  >::category_type >::instance_type ).name() << std::endl;
  std::cout << "container for color::gray< std::uint16_t > is: " << typeid( ::color::trait::container< color::gray< std::uint16_t >::category_type >::instance_type ).name() << std::endl;
  std::cout << "container for color::gray< std::uint32_t > is: " << typeid( ::color::trait::container< color::gray< std::uint32_t >::category_type >::instance_type ).name() << std::endl;
  std::cout << "container for color::gray< std::uint64_t > is: " << typeid( ::color::trait::container< color::gray< std::uint64_t >::category_type >::instance_type ).name() << std::endl;
  std::cout << "container for color::gray< float         > is: " << typeid( ::color::trait::container< color::gray< float         >::category_type >::instance_type ).name() << std::endl;
  std::cout << "container for color::gray< double        > is: " << typeid( ::color::trait::container< color::gray< double        >::category_type >::instance_type ).name() << std::endl;
  std::cout << "container for color::gray< long double   > is: " << typeid( ::color::trait::container< color::gray< long double   >::category_type >::instance_type ).name() << std::endl;
 }


void trait_container_in_hsl()
 {
  std::cout << "container for color::hsl< std::uint8_t  > is: " << typeid( ::color::trait::container< color::hsl< std::uint8_t  >::category_type >::instance_type ).name() << std::endl;
  std::cout << "container for color::hsl< std::uint16_t > is: " << typeid( ::color::trait::container< color::hsl< std::uint16_t >::category_type >::instance_type ).name() << std::endl;
  std::cout << "container for color::hsl< std::uint32_t > is: " << typeid( ::color::trait::container< color::hsl< std::uint32_t >::category_type >::instance_type ).name() << std::endl;
  std::cout << "container for color::hsl< std::uint64_t > is: " << typeid( ::color::trait::container< color::hsl< std::uint64_t >::category_type >::instance_type ).name() << std::endl;
  std::cout << "container for color::hsl< float         > is: " << typeid( ::color::trait::container< color::hsl< float         >::category_type >::instance_type ).name() << std::endl;
  std::cout << "container for color::hsl< double        > is: " << typeid( ::color::trait::container< color::hsl< double        >::category_type >::instance_type ).name() << std::endl;
  std::cout << "container for color::hsl< long double   > is: " << typeid( ::color::trait::container< color::hsl< long double   >::category_type >::instance_type ).name() << std::endl;
 }


void trait_container_in_hsv()
 {
  std::cout << "container for color::hsv< std::uint8_t  > is: " << typeid( ::color::trait::container< color::hsv< std::uint8_t  >::category_type >::instance_type ).name() << std::endl;
  std::cout << "container for color::hsv< std::uint16_t > is: " << typeid( ::color::trait::container< color::hsv< std::uint16_t >::category_type >::instance_type ).name() << std::endl;
  std::cout << "container for color::hsv< std::uint32_t > is: " << typeid( ::color::trait::container< color::hsv< std::uint32_t >::category_type >::instance_type ).name() << std::endl;
  std::cout << "container for color::hsv< std::uint64_t > is: " << typeid( ::color::trait::container< color::hsv< std::uint64_t >::category_type >::instance_type ).name() << std::endl;
  std::cout << "container for color::hsv< float         > is: " << typeid( ::color::trait::container< color::hsv< float         >::category_type >::instance_type ).name() << std::endl;
  std::cout << "container for color::hsv< double        > is: " << typeid( ::color::trait::container< color::hsv< double        >::category_type >::instance_type ).name() << std::endl;
  std::cout << "container for color::hsv< long double   > is: " << typeid( ::color::trait::container< color::hsv< long double   >::category_type >::instance_type ).name() << std::endl;
 }

 void trait_container_in_rgb()
 {
  std::cout << "container for color::rgb< std::uint8_t  > is: " << typeid( ::color::trait::container< color::rgb< std::uint8_t  >::category_type >::instance_type ).name() << std::endl;
  std::cout << "container for color::rgb< std::uint16_t > is: " << typeid( ::color::trait::container< color::rgb< std::uint16_t >::category_type >::instance_type ).name() << std::endl;
  std::cout << "container for color::rgb< std::uint32_t > is: " << typeid( ::color::trait::container< color::rgb< std::uint32_t >::category_type >::instance_type ).name() << std::endl;
  std::cout << "container for color::rgb< std::uint64_t > is: " << typeid( ::color::trait::container< color::rgb< std::uint64_t >::category_type >::instance_type ).name() << std::endl;
  std::cout << "container for color::rgb< float         > is: " << typeid( ::color::trait::container< color::rgb< float         >::category_type >::instance_type ).name() << std::endl;
  std::cout << "container for color::rgb< double        > is: " << typeid( ::color::trait::container< color::rgb< double        >::category_type >::instance_type ).name() << std::endl;
  std::cout << "container for color::rgb< long double   > is: " << typeid( ::color::trait::container< color::rgb< long double   >::category_type >::instance_type ).name() << std::endl;
 }


void trait_container_in_yiq()
 {
  std::cout << "container for color::yiq< std::uint8_t  > is: " << typeid( ::color::trait::container< color::yiq< std::uint8_t  >::category_type >::instance_type ).name() << std::endl;
  std::cout << "container for color::yiq< std::uint16_t > is: " << typeid( ::color::trait::container< color::yiq< std::uint16_t >::category_type >::instance_type ).name() << std::endl;
  std::cout << "container for color::yiq< std::uint32_t > is: " << typeid( ::color::trait::container< color::yiq< std::uint32_t >::category_type >::instance_type ).name() << std::endl;
  std::cout << "container for color::yiq< std::uint64_t > is: " << typeid( ::color::trait::container< color::yiq< std::uint64_t >::category_type >::instance_type ).name() << std::endl;
  std::cout << "container for color::yiq< float         > is: " << typeid( ::color::trait::container< color::yiq< float         >::category_type >::instance_type ).name() << std::endl;
  std::cout << "container for color::yiq< double        > is: " << typeid( ::color::trait::container< color::yiq< double        >::category_type >::instance_type ).name() << std::endl;
  std::cout << "container for color::yiq< long double   > is: " << typeid( ::color::trait::container< color::yiq< long double   >::category_type >::instance_type ).name() << std::endl;
 }

void trait_container_in_yuv()
 {
  std::cout << "container for color::yuv< std::uint8_t  > is: " << typeid( ::color::trait::container< color::yuv< std::uint8_t  >::category_type >::instance_type ).name() << std::endl;
  std::cout << "container for color::yuv< std::uint16_t > is: " << typeid( ::color::trait::container< color::yuv< std::uint16_t >::category_type >::instance_type ).name() << std::endl;
  std::cout << "container for color::yuv< std::uint32_t > is: " << typeid( ::color::trait::container< color::yuv< std::uint32_t >::category_type >::instance_type ).name() << std::endl;
  std::cout << "container for color::yuv< std::uint64_t > is: " << typeid( ::color::trait::container< color::yuv< std::uint64_t >::category_type >::instance_type ).name() << std::endl;
  std::cout << "container for color::yuv< float         > is: " << typeid( ::color::trait::container< color::yuv< float         >::category_type >::instance_type ).name() << std::endl;
  std::cout << "container for color::yuv< double        > is: " << typeid( ::color::trait::container< color::yuv< double        >::category_type >::instance_type ).name() << std::endl;
  std::cout << "container for color::yuv< long double   > is: " << typeid( ::color::trait::container< color::yuv< long double   >::category_type >::instance_type ).name() << std::endl;
 }
