#include <iostream>
#include <iomanip>
#include <cstdint>
#include <typeinfo>

#include "color/color.hpp"

void trait_index_in_rgb();
void trait_index_in_cmy();
void trait_index_in_cmyk();
void trait_index_in_gray();
void trait_index_in_hsl();
void trait_index_in_hsv();
void trait_index_in_yiq();
void trait_index_in_yuv();

int main( int argc, char *argv[] )
 {
  std::cout<< "---- ---- ---- ---- ---- ---- ---- ---- ---- ---- ---- ---- ---- ---- ---- ----" << std::endl;
  trait_index_in_rgb();
  trait_index_in_cmy();
  trait_index_in_cmyk();
  trait_index_in_gray();
  trait_index_in_hsl();
  trait_index_in_hsv();
  trait_index_in_yiq();
  trait_index_in_yuv();
  std::cout<< "---- ---- ---- ---- ---- ---- ---- ---- ---- ---- ---- ---- ---- ---- ---- ----" << std::endl;
  return EXIT_SUCCESS;
 }

void trait_index_in_cmy()
 {
  std::cout << "index for color::cmy< std::uint8_t  > is: " << typeid( ::color::trait::index< color::cmy< std::uint8_t  >::category_type >::instance_type ).name() << std::endl;
  std::cout << "index for color::cmy< std::uint16_t > is: " << typeid( ::color::trait::index< color::cmy< std::uint16_t >::category_type >::instance_type ).name() << std::endl;
  std::cout << "index for color::cmy< std::uint32_t > is: " << typeid( ::color::trait::index< color::cmy< std::uint32_t >::category_type >::instance_type ).name() << std::endl;
  std::cout << "index for color::cmy< std::uint64_t > is: " << typeid( ::color::trait::index< color::cmy< std::uint64_t >::category_type >::instance_type ).name() << std::endl;
  std::cout << "index for color::cmy< float         > is: " << typeid( ::color::trait::index< color::cmy< float         >::category_type >::instance_type ).name() << std::endl;
  std::cout << "index for color::cmy< double        > is: " << typeid( ::color::trait::index< color::cmy< double        >::category_type >::instance_type ).name() << std::endl;
  std::cout << "index for color::cmy< long double   > is: " << typeid( ::color::trait::index< color::cmy< long double   >::category_type >::instance_type ).name() << std::endl;
 }

void trait_index_in_cmyk()
 {
  std::cout << "index for color::cmyk< std::uint8_t  > is: " << typeid( ::color::trait::index< color::cmyk< std::uint8_t  >::category_type >::instance_type ).name() << std::endl;
  std::cout << "index for color::cmyk< std::uint16_t > is: " << typeid( ::color::trait::index< color::cmyk< std::uint16_t >::category_type >::instance_type ).name() << std::endl;
  std::cout << "index for color::cmyk< std::uint32_t > is: " << typeid( ::color::trait::index< color::cmyk< std::uint32_t >::category_type >::instance_type ).name() << std::endl;
  std::cout << "index for color::cmyk< std::uint64_t > is: " << typeid( ::color::trait::index< color::cmyk< std::uint64_t >::category_type >::instance_type ).name() << std::endl;
  std::cout << "index for color::cmyk< float         > is: " << typeid( ::color::trait::index< color::cmyk< float         >::category_type >::instance_type ).name() << std::endl;
  std::cout << "index for color::cmyk< double        > is: " << typeid( ::color::trait::index< color::cmyk< double        >::category_type >::instance_type ).name() << std::endl;
  std::cout << "index for color::cmyk< long double   > is: " << typeid( ::color::trait::index< color::cmyk< long double   >::category_type >::instance_type ).name() << std::endl;
 }

void trait_index_in_gray()
 {
  std::cout << "index for color::gray< std::uint8_t  > is: " << typeid( ::color::trait::index< color::gray< std::uint8_t  >::category_type >::instance_type ).name() << std::endl;
  std::cout << "index for color::gray< std::uint16_t > is: " << typeid( ::color::trait::index< color::gray< std::uint16_t >::category_type >::instance_type ).name() << std::endl;
  std::cout << "index for color::gray< std::uint32_t > is: " << typeid( ::color::trait::index< color::gray< std::uint32_t >::category_type >::instance_type ).name() << std::endl;
  std::cout << "index for color::gray< std::uint64_t > is: " << typeid( ::color::trait::index< color::gray< std::uint64_t >::category_type >::instance_type ).name() << std::endl;
  std::cout << "index for color::gray< float         > is: " << typeid( ::color::trait::index< color::gray< float         >::category_type >::instance_type ).name() << std::endl;
  std::cout << "index for color::gray< double        > is: " << typeid( ::color::trait::index< color::gray< double        >::category_type >::instance_type ).name() << std::endl;
  std::cout << "index for color::gray< long double   > is: " << typeid( ::color::trait::index< color::gray< long double   >::category_type >::instance_type ).name() << std::endl;
 }


void trait_index_in_hsl()
 {
  std::cout << "index for color::hsl< std::uint8_t  > is: " << typeid( ::color::trait::index< color::hsl< std::uint8_t  >::category_type >::instance_type ).name() << std::endl;
  std::cout << "index for color::hsl< std::uint16_t > is: " << typeid( ::color::trait::index< color::hsl< std::uint16_t >::category_type >::instance_type ).name() << std::endl;
  std::cout << "index for color::hsl< std::uint32_t > is: " << typeid( ::color::trait::index< color::hsl< std::uint32_t >::category_type >::instance_type ).name() << std::endl;
  std::cout << "index for color::hsl< std::uint64_t > is: " << typeid( ::color::trait::index< color::hsl< std::uint64_t >::category_type >::instance_type ).name() << std::endl;
  std::cout << "index for color::hsl< float         > is: " << typeid( ::color::trait::index< color::hsl< float         >::category_type >::instance_type ).name() << std::endl;
  std::cout << "index for color::hsl< double        > is: " << typeid( ::color::trait::index< color::hsl< double        >::category_type >::instance_type ).name() << std::endl;
  std::cout << "index for color::hsl< long double   > is: " << typeid( ::color::trait::index< color::hsl< long double   >::category_type >::instance_type ).name() << std::endl;
 }


void trait_index_in_hsv()
 {
  std::cout << "index for color::hsv< std::uint8_t  > is: " << typeid( ::color::trait::index< color::hsv< std::uint8_t  >::category_type >::instance_type ).name() << std::endl;
  std::cout << "index for color::hsv< std::uint16_t > is: " << typeid( ::color::trait::index< color::hsv< std::uint16_t >::category_type >::instance_type ).name() << std::endl;
  std::cout << "index for color::hsv< std::uint32_t > is: " << typeid( ::color::trait::index< color::hsv< std::uint32_t >::category_type >::instance_type ).name() << std::endl;
  std::cout << "index for color::hsv< std::uint64_t > is: " << typeid( ::color::trait::index< color::hsv< std::uint64_t >::category_type >::instance_type ).name() << std::endl;
  std::cout << "index for color::hsv< float         > is: " << typeid( ::color::trait::index< color::hsv< float         >::category_type >::instance_type ).name() << std::endl;
  std::cout << "index for color::hsv< double        > is: " << typeid( ::color::trait::index< color::hsv< double        >::category_type >::instance_type ).name() << std::endl;
  std::cout << "index for color::hsv< long double   > is: " << typeid( ::color::trait::index< color::hsv< long double   >::category_type >::instance_type ).name() << std::endl;
 }

 void trait_index_in_rgb()
 {
  std::cout << "index for color::rgb< std::uint8_t  > is: " << typeid( ::color::trait::index< color::rgb< std::uint8_t  >::category_type >::instance_type ).name() << std::endl;
  std::cout << "index for color::rgb< std::uint16_t > is: " << typeid( ::color::trait::index< color::rgb< std::uint16_t >::category_type >::instance_type ).name() << std::endl;
  std::cout << "index for color::rgb< std::uint32_t > is: " << typeid( ::color::trait::index< color::rgb< std::uint32_t >::category_type >::instance_type ).name() << std::endl;
  std::cout << "index for color::rgb< std::uint64_t > is: " << typeid( ::color::trait::index< color::rgb< std::uint64_t >::category_type >::instance_type ).name() << std::endl;
  std::cout << "index for color::rgb< float         > is: " << typeid( ::color::trait::index< color::rgb< float         >::category_type >::instance_type ).name() << std::endl;
  std::cout << "index for color::rgb< double        > is: " << typeid( ::color::trait::index< color::rgb< double        >::category_type >::instance_type ).name() << std::endl;
  std::cout << "index for color::rgb< long double   > is: " << typeid( ::color::trait::index< color::rgb< long double   >::category_type >::instance_type ).name() << std::endl;
 }


void trait_index_in_yiq()
 {
  std::cout << "index for color::yiq< std::uint8_t  > is: " << typeid( ::color::trait::index< color::yiq< std::uint8_t  >::category_type >::instance_type ).name() << std::endl;
  std::cout << "index for color::yiq< std::uint16_t > is: " << typeid( ::color::trait::index< color::yiq< std::uint16_t >::category_type >::instance_type ).name() << std::endl;
  std::cout << "index for color::yiq< std::uint32_t > is: " << typeid( ::color::trait::index< color::yiq< std::uint32_t >::category_type >::instance_type ).name() << std::endl;
  std::cout << "index for color::yiq< std::uint64_t > is: " << typeid( ::color::trait::index< color::yiq< std::uint64_t >::category_type >::instance_type ).name() << std::endl;
  std::cout << "index for color::yiq< float         > is: " << typeid( ::color::trait::index< color::yiq< float         >::category_type >::instance_type ).name() << std::endl;
  std::cout << "index for color::yiq< double        > is: " << typeid( ::color::trait::index< color::yiq< double        >::category_type >::instance_type ).name() << std::endl;
  std::cout << "index for color::yiq< long double   > is: " << typeid( ::color::trait::index< color::yiq< long double   >::category_type >::instance_type ).name() << std::endl;
 }

void trait_index_in_yuv()
 {
  std::cout << "index for color::yuv< std::uint8_t  > is: " << typeid( ::color::trait::index< color::yuv< std::uint8_t  >::category_type >::instance_type ).name() << std::endl;
  std::cout << "index for color::yuv< std::uint16_t > is: " << typeid( ::color::trait::index< color::yuv< std::uint16_t >::category_type >::instance_type ).name() << std::endl;
  std::cout << "index for color::yuv< std::uint32_t > is: " << typeid( ::color::trait::index< color::yuv< std::uint32_t >::category_type >::instance_type ).name() << std::endl;
  std::cout << "index for color::yuv< std::uint64_t > is: " << typeid( ::color::trait::index< color::yuv< std::uint64_t >::category_type >::instance_type ).name() << std::endl;
  std::cout << "index for color::yuv< float         > is: " << typeid( ::color::trait::index< color::yuv< float         >::category_type >::instance_type ).name() << std::endl;
  std::cout << "index for color::yuv< double        > is: " << typeid( ::color::trait::index< color::yuv< double        >::category_type >::instance_type ).name() << std::endl;
  std::cout << "index for color::yuv< long double   > is: " << typeid( ::color::trait::index< color::yuv< long double   >::category_type >::instance_type ).name() << std::endl;
 }
