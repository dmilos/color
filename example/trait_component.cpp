#include <iostream>
#include <iomanip>
#include <cstdint>
#include <typeinfo>

#include "color/color.hpp"

void trait_component_in_rgb();
void trait_component_in_cmy();
void trait_component_in_cmyk();
void trait_component_in_gray();
void trait_component_in_hsl();
void trait_component_in_hsv();
void trait_component_in_yiq();
void trait_component_in_yuv();

int main( int argc, char *argv[] )
 {
  std::cout<< "---- ---- ---- ---- ---- ---- ---- ---- ---- ---- ---- ---- ---- ---- ---- ----" << std::endl;
  trait_component_in_rgb();
  trait_component_in_cmy();
  trait_component_in_cmyk();
  trait_component_in_gray();
  trait_component_in_hsl();
  trait_component_in_hsv();
  trait_component_in_yiq();
  trait_component_in_yuv();
  std::cout<< "---- ---- ---- ---- ---- ---- ---- ---- ---- ---- ---- ---- ---- ---- ---- ----" << std::endl;
  return EXIT_SUCCESS;
 }

void trait_component_in_rgb()
 {
  std::cout << "component for color::rgb< std::uint8_t  > is: " << typeid( ::color::trait::component< color::rgb< std::uint8_t  >::category_type >::instance_type ).name() << std::endl;
  std::cout << "component for color::rgb< std::uint16_t > is: " << typeid( ::color::trait::component< color::rgb< std::uint16_t >::category_type >::instance_type ).name() << std::endl;
  std::cout << "component for color::rgb< std::uint32_t > is: " << typeid( ::color::trait::component< color::rgb< std::uint32_t >::category_type >::instance_type ).name() << std::endl;
  std::cout << "component for color::rgb< std::uint64_t > is: " << typeid( ::color::trait::component< color::rgb< std::uint64_t >::category_type >::instance_type ).name() << std::endl;
  std::cout << "component for color::rgb< float         > is: " << typeid( ::color::trait::component< color::rgb< float         >::category_type >::instance_type ).name() << std::endl;
  std::cout << "component for color::rgb< double        > is: " << typeid( ::color::trait::component< color::rgb< double        >::category_type >::instance_type ).name() << std::endl;
  std::cout << "component for color::rgb< long double   > is: " << typeid( ::color::trait::component< color::rgb< long double   >::category_type >::instance_type ).name() << std::endl;
 }

void trait_component_in_cmy()
 {
  std::cout << "component for color::cmy< std::uint8_t  > is: " << typeid( ::color::trait::component< color::cmy< std::uint8_t  >::category_type >::instance_type ).name() << std::endl;
  std::cout << "component for color::cmy< std::uint16_t > is: " << typeid( ::color::trait::component< color::cmy< std::uint16_t >::category_type >::instance_type ).name() << std::endl;
  std::cout << "component for color::cmy< std::uint32_t > is: " << typeid( ::color::trait::component< color::cmy< std::uint32_t >::category_type >::instance_type ).name() << std::endl;
  std::cout << "component for color::cmy< std::uint64_t > is: " << typeid( ::color::trait::component< color::cmy< std::uint64_t >::category_type >::instance_type ).name() << std::endl;
  std::cout << "component for color::cmy< float         > is: " << typeid( ::color::trait::component< color::cmy< float         >::category_type >::instance_type ).name() << std::endl;
  std::cout << "component for color::cmy< double        > is: " << typeid( ::color::trait::component< color::cmy< double        >::category_type >::instance_type ).name() << std::endl;
  std::cout << "component for color::cmy< long double   > is: " << typeid( ::color::trait::component< color::cmy< long double   >::category_type >::instance_type ).name() << std::endl;
 }

void trait_component_in_cmyk()
 {
  std::cout << "component for color::cmy< std::uint8_t  > is: " << typeid( ::color::trait::component< color::cmyk< std::uint8_t  >::category_type >::instance_type ).name() << std::endl;
  std::cout << "component for color::cmy< std::uint16_t > is: " << typeid( ::color::trait::component< color::cmyk< std::uint16_t >::category_type >::instance_type ).name() << std::endl;
  std::cout << "component for color::cmy< std::uint32_t > is: " << typeid( ::color::trait::component< color::cmyk< std::uint32_t >::category_type >::instance_type ).name() << std::endl;
  std::cout << "component for color::cmy< std::uint64_t > is: " << typeid( ::color::trait::component< color::cmyk< std::uint64_t >::category_type >::instance_type ).name() << std::endl;
  std::cout << "component for color::cmy< float         > is: " << typeid( ::color::trait::component< color::cmyk< float         >::category_type >::instance_type ).name() << std::endl;
  std::cout << "component for color::cmy< double        > is: " << typeid( ::color::trait::component< color::cmyk< double        >::category_type >::instance_type ).name() << std::endl;
  std::cout << "component for color::cmy< long double   > is: " << typeid( ::color::trait::component< color::cmyk< long double   >::category_type >::instance_type ).name() << std::endl;
 }

void trait_component_in_hsv()
 {
  std::cout << "component for color::hsv< std::uint8_t  > is: " << typeid( ::color::trait::component< color::hsv< std::uint8_t  >::category_type >::instance_type ).name() << std::endl;
  std::cout << "component for color::hsv< std::uint16_t > is: " << typeid( ::color::trait::component< color::hsv< std::uint16_t >::category_type >::instance_type ).name() << std::endl;
  std::cout << "component for color::hsv< std::uint32_t > is: " << typeid( ::color::trait::component< color::hsv< std::uint32_t >::category_type >::instance_type ).name() << std::endl;
  std::cout << "component for color::hsv< std::uint64_t > is: " << typeid( ::color::trait::component< color::hsv< std::uint64_t >::category_type >::instance_type ).name() << std::endl;
  std::cout << "component for color::hsv< float         > is: " << typeid( ::color::trait::component< color::hsv< float         >::category_type >::instance_type ).name() << std::endl;
  std::cout << "component for color::hsv< double        > is: " << typeid( ::color::trait::component< color::hsv< double        >::category_type >::instance_type ).name() << std::endl;
  std::cout << "component for color::hsv< long double   > is: " << typeid( ::color::trait::component< color::hsv< long double   >::category_type >::instance_type ).name() << std::endl;
 }

void trait_component_in_yiq()
 {
  std::cout << "component for color::yiq< std::uint8_t  > is: " << typeid( ::color::trait::component< color::yiq< std::uint8_t  >::category_type >::instance_type ).name() << std::endl;
  std::cout << "component for color::yiq< std::uint16_t > is: " << typeid( ::color::trait::component< color::yiq< std::uint16_t >::category_type >::instance_type ).name() << std::endl;
  std::cout << "component for color::yiq< std::uint32_t > is: " << typeid( ::color::trait::component< color::yiq< std::uint32_t >::category_type >::instance_type ).name() << std::endl;
  std::cout << "component for color::yiq< std::uint64_t > is: " << typeid( ::color::trait::component< color::yiq< std::uint64_t >::category_type >::instance_type ).name() << std::endl;
  std::cout << "component for color::yiq< float         > is: " << typeid( ::color::trait::component< color::yiq< float         >::category_type >::instance_type ).name() << std::endl;
  std::cout << "component for color::yiq< double        > is: " << typeid( ::color::trait::component< color::yiq< double        >::category_type >::instance_type ).name() << std::endl;
  std::cout << "component for color::yiq< long double   > is: " << typeid( ::color::trait::component< color::yiq< long double   >::category_type >::instance_type ).name() << std::endl;
 }

void trait_component_in_yuv()
 {
  std::cout << "component for color::yuv< std::uint8_t  > is: " << typeid( ::color::trait::component< color::yuv< std::uint8_t  >::category_type >::instance_type ).name() << std::endl;
  std::cout << "component for color::yuv< std::uint16_t > is: " << typeid( ::color::trait::component< color::yuv< std::uint16_t >::category_type >::instance_type ).name() << std::endl;
  std::cout << "component for color::yuv< std::uint32_t > is: " << typeid( ::color::trait::component< color::yuv< std::uint32_t >::category_type >::instance_type ).name() << std::endl;
  std::cout << "component for color::yuv< std::uint64_t > is: " << typeid( ::color::trait::component< color::yuv< std::uint64_t >::category_type >::instance_type ).name() << std::endl;
  std::cout << "component for color::yuv< float         > is: " << typeid( ::color::trait::component< color::yuv< float         >::category_type >::instance_type ).name() << std::endl;
  std::cout << "component for color::yuv< double        > is: " << typeid( ::color::trait::component< color::yuv< double        >::category_type >::instance_type ).name() << std::endl;
  std::cout << "component for color::yuv< long double   > is: " << typeid( ::color::trait::component< color::yuv< long double   >::category_type >::instance_type ).name() << std::endl;
 }
