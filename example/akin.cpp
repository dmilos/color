#include <iostream>
#include <iomanip>
#include <typeinfo>

#include "color/color.hpp"

template< typename type_name > void akin_cmy();

template< typename type_name >
 void akin_cmy()
  {
   typedef ::color::cmy< type_name > model_name;
   std::cout << "Akin types for" << std::endl;
   std::cout << "  model: "  << typeid( model_name ).name() << std::endl;
   std::cout << "  category: "<< typeid( typename model_name::category_type ).name() << std::endl;

   std::cout << "    CMY:  " << typeid( typename ::color::akin::cmy< typename ::color::cmy<  type_name>::category_type >::akin_type ).name() << std::endl;
   std::cout << "    CMYK: " << typeid( typename ::color::akin::cmy< typename ::color::cmyk< type_name>::category_type >::akin_type ).name() << std::endl;
   std::cout << "    gray: " << typeid( typename ::color::akin::cmy< typename ::color::gray< type_name>::category_type >::akin_type ).name() << std::endl;
   std::cout << "    HSL:  " << typeid( typename ::color::akin::cmy< typename ::color::hsl<  type_name>::category_type >::akin_type ).name() << std::endl;
   std::cout << "    HSV:  " << typeid( typename ::color::akin::cmy< typename ::color::hsv<  type_name>::category_type >::akin_type ).name() << std::endl;
   std::cout << "    RGB:  " << typeid( typename ::color::akin::cmy< typename ::color::rgb<  type_name>::category_type >::akin_type ).name() << std::endl;
   std::cout << "    YIQ:  " << typeid( typename ::color::akin::cmy< typename ::color::yiq<  type_name>::category_type >::akin_type ).name() << std::endl;
   std::cout << "    YUV:  " << typeid( typename ::color::akin::cmy< typename ::color::yuv<  type_name>::category_type >::akin_type ).name() << std::endl;
  }

template< typename type_name >
 void akin_cmyk()
  {
   typedef ::color::cmyk< type_name > model_name;
   std::cout << "Akin types for" << std::endl;
   std::cout << "  model: "  << typeid( model_name ).name() << std::endl;
   std::cout << "  category: "<< typeid( typename model_name::category_type ).name() << std::endl;

   std::cout << "    CMY:  " << typeid( typename ::color::akin::cmyk< typename ::color::cmy<  type_name>::category_type >::akin_type ).name() << std::endl;
   std::cout << "    CMYK: " << typeid( typename ::color::akin::cmyk< typename ::color::cmyk< type_name>::category_type >::akin_type ).name() << std::endl;
   std::cout << "    gray: " << typeid( typename ::color::akin::cmyk< typename ::color::gray< type_name>::category_type >::akin_type ).name() << std::endl;
   std::cout << "    HSL:  " << typeid( typename ::color::akin::cmyk< typename ::color::hsl<  type_name>::category_type >::akin_type ).name() << std::endl;
   std::cout << "    HSV:  " << typeid( typename ::color::akin::cmyk< typename ::color::hsv<  type_name>::category_type >::akin_type ).name() << std::endl;
   std::cout << "    RGB:  " << typeid( typename ::color::akin::cmyk< typename ::color::rgb<  type_name>::category_type >::akin_type ).name() << std::endl;
   std::cout << "    YIQ:  " << typeid( typename ::color::akin::cmyk< typename ::color::yiq<  type_name>::category_type >::akin_type ).name() << std::endl;
   std::cout << "    YUV:  " << typeid( typename ::color::akin::cmyk< typename ::color::yuv<  type_name>::category_type >::akin_type ).name() << std::endl;
  }

template< typename type_name >
 void akin_gray()
  {
   typedef ::color::gray< type_name > model_name;
   std::cout << "Akin types for" << std::endl;
   std::cout << "  model: "  << typeid( model_name ).name() << std::endl;
   std::cout << "  category: "<< typeid( typename model_name::category_type ).name() << std::endl;

   std::cout << "    CMY:  " << typeid( typename ::color::akin::gray< typename ::color::cmy<  type_name>::category_type >::akin_type ).name() << std::endl;
   std::cout << "    CMYK: " << typeid( typename ::color::akin::gray< typename ::color::cmyk< type_name>::category_type >::akin_type ).name() << std::endl;
   std::cout << "    gray: " << typeid( typename ::color::akin::gray< typename ::color::gray< type_name>::category_type >::akin_type ).name() << std::endl;
   std::cout << "    HSL:  " << typeid( typename ::color::akin::gray< typename ::color::hsl<  type_name>::category_type >::akin_type ).name() << std::endl;
   std::cout << "    HSV:  " << typeid( typename ::color::akin::gray< typename ::color::hsv<  type_name>::category_type >::akin_type ).name() << std::endl;
   std::cout << "    RGB:  " << typeid( typename ::color::akin::gray< typename ::color::rgb<  type_name>::category_type >::akin_type ).name() << std::endl;
   std::cout << "    YIQ:  " << typeid( typename ::color::akin::gray< typename ::color::yiq<  type_name>::category_type >::akin_type ).name() << std::endl;
   std::cout << "    YUV:  " << typeid( typename ::color::akin::gray< typename ::color::yuv<  type_name>::category_type >::akin_type ).name() << std::endl;
  }

template< typename type_name >
 void akin_hsl()
  {
   typedef ::color::hsl< type_name > model_name;
   std::cout << "Akin types for" << std::endl;
   std::cout << "  model: "  << typeid( model_name ).name() << std::endl;
   std::cout << "  category: "<< typeid( typename model_name::category_type ).name() << std::endl;

   std::cout << "    CMY:  " << typeid( typename ::color::akin::hsl< typename ::color::cmy<  type_name>::category_type >::akin_type ).name() << std::endl;
   std::cout << "    CMYK: " << typeid( typename ::color::akin::hsl< typename ::color::cmyk< type_name>::category_type >::akin_type ).name() << std::endl;
   std::cout << "    gray: " << typeid( typename ::color::akin::hsl< typename ::color::gray< type_name>::category_type >::akin_type ).name() << std::endl;
   std::cout << "    HSL:  " << typeid( typename ::color::akin::hsl< typename ::color::hsl<  type_name>::category_type >::akin_type ).name() << std::endl;
   std::cout << "    HSV:  " << typeid( typename ::color::akin::hsl< typename ::color::hsv<  type_name>::category_type >::akin_type ).name() << std::endl;
   std::cout << "    RGB:  " << typeid( typename ::color::akin::hsl< typename ::color::rgb<  type_name>::category_type >::akin_type ).name() << std::endl;
   std::cout << "    YIQ:  " << typeid( typename ::color::akin::hsl< typename ::color::yiq<  type_name>::category_type >::akin_type ).name() << std::endl;
   std::cout << "    YUV:  " << typeid( typename ::color::akin::hsl< typename ::color::yuv<  type_name>::category_type >::akin_type ).name() << std::endl;
  }

template< typename type_name >
 void akin_hsv()
  {
   typedef ::color::hsv< type_name > model_name;
   std::cout << "Akin types for" << std::endl;
   std::cout << "  model: "  << typeid( model_name ).name() << std::endl;
   std::cout << "  category: "<< typeid( typename model_name::category_type ).name() << std::endl;

   std::cout << "    CMY:  " << typeid( typename ::color::akin::hsv< typename ::color::cmy<  type_name>::category_type >::akin_type ).name() << std::endl;
   std::cout << "    CMYK: " << typeid( typename ::color::akin::hsv< typename ::color::cmyk< type_name>::category_type >::akin_type ).name() << std::endl;
   std::cout << "    gray: " << typeid( typename ::color::akin::hsv< typename ::color::gray< type_name>::category_type >::akin_type ).name() << std::endl;
   std::cout << "    HSL:  " << typeid( typename ::color::akin::hsv< typename ::color::hsl<  type_name>::category_type >::akin_type ).name() << std::endl;
   std::cout << "    HSV:  " << typeid( typename ::color::akin::hsv< typename ::color::hsv<  type_name>::category_type >::akin_type ).name() << std::endl;
   std::cout << "    RGB:  " << typeid( typename ::color::akin::hsv< typename ::color::rgb<  type_name>::category_type >::akin_type ).name() << std::endl;
   std::cout << "    YIQ:  " << typeid( typename ::color::akin::hsv< typename ::color::yiq<  type_name>::category_type >::akin_type ).name() << std::endl;
   std::cout << "    YUV:  " << typeid( typename ::color::akin::hsv< typename ::color::yuv<  type_name>::category_type >::akin_type ).name() << std::endl;
  }

template< typename type_name >
 void akin_rgb()
  {
   typedef ::color::rgb< type_name > model_name;
   std::cout << "Akin types for" << std::endl;
   std::cout << "  model: "  << typeid( model_name ).name() << std::endl;
   std::cout << "  category: "<< typeid( typename model_name::category_type ).name() << std::endl;

   std::cout << "    CMY:  " << typeid( typename ::color::akin::rgb< typename ::color::cmy<  type_name>::category_type >::akin_type ).name() << std::endl;
   std::cout << "    CMYK: " << typeid( typename ::color::akin::rgb< typename ::color::cmyk< type_name>::category_type >::akin_type ).name() << std::endl;
   std::cout << "    gray: " << typeid( typename ::color::akin::rgb< typename ::color::gray< type_name>::category_type >::akin_type ).name() << std::endl;
   std::cout << "    HSL:  " << typeid( typename ::color::akin::rgb< typename ::color::hsl<  type_name>::category_type >::akin_type ).name() << std::endl;
   std::cout << "    HSV:  " << typeid( typename ::color::akin::rgb< typename ::color::hsv<  type_name>::category_type >::akin_type ).name() << std::endl;
   std::cout << "    RGB:  " << typeid( typename ::color::akin::rgb< typename ::color::rgb<  type_name>::category_type >::akin_type ).name() << std::endl;
   std::cout << "    YIQ:  " << typeid( typename ::color::akin::rgb< typename ::color::yiq<  type_name>::category_type >::akin_type ).name() << std::endl;
   std::cout << "    YUV:  " << typeid( typename ::color::akin::rgb< typename ::color::yuv<  type_name>::category_type >::akin_type ).name() << std::endl;
  }

template< typename type_name >
 void akin_yiq()
  {
   typedef ::color::yiq< type_name > model_name;
   std::cout << "Akin types for" << std::endl;
   std::cout << "  model: "  << typeid( model_name ).name() << std::endl;
   std::cout << "  category: "<< typeid( typename model_name::category_type ).name() << std::endl;

   std::cout << "    CMY:  " << typeid( typename ::color::akin::yiq< typename ::color::cmy<  type_name>::category_type >::akin_type ).name() << std::endl;
   std::cout << "    CMYK: " << typeid( typename ::color::akin::yiq< typename ::color::cmyk< type_name>::category_type >::akin_type ).name() << std::endl;
   std::cout << "    gray: " << typeid( typename ::color::akin::yiq< typename ::color::gray< type_name>::category_type >::akin_type ).name() << std::endl;
   std::cout << "    HSL:  " << typeid( typename ::color::akin::yiq< typename ::color::hsl<  type_name>::category_type >::akin_type ).name() << std::endl;
   std::cout << "    HSV:  " << typeid( typename ::color::akin::yiq< typename ::color::hsv<  type_name>::category_type >::akin_type ).name() << std::endl;
   std::cout << "    RGB:  " << typeid( typename ::color::akin::yiq< typename ::color::rgb<  type_name>::category_type >::akin_type ).name() << std::endl;
   std::cout << "    YIQ:  " << typeid( typename ::color::akin::yiq< typename ::color::yiq<  type_name>::category_type >::akin_type ).name() << std::endl;
   std::cout << "    YUV:  " << typeid( typename ::color::akin::yiq< typename ::color::yuv<  type_name>::category_type >::akin_type ).name() << std::endl;
  }

template< typename type_name >
 void akin_yuv()
  {
   typedef ::color::yuv< type_name > model_name;
   std::cout << "Akin types for" << std::endl;
   std::cout << "  model: "  << typeid( model_name ).name() << std::endl;
   std::cout << "  category: "<< typeid( typename model_name::category_type ).name() << std::endl;

   std::cout << "    CMY:  " << typeid( typename ::color::akin::yuv< typename ::color::cmy<  type_name>::category_type >::akin_type ).name() << std::endl;
   std::cout << "    CMYK: " << typeid( typename ::color::akin::yuv< typename ::color::cmyk< type_name>::category_type >::akin_type ).name() << std::endl;
   std::cout << "    gray: " << typeid( typename ::color::akin::yuv< typename ::color::gray< type_name>::category_type >::akin_type ).name() << std::endl;
   std::cout << "    HSL:  " << typeid( typename ::color::akin::yuv< typename ::color::hsl<  type_name>::category_type >::akin_type ).name() << std::endl;
   std::cout << "    HSV:  " << typeid( typename ::color::akin::yuv< typename ::color::hsv<  type_name>::category_type >::akin_type ).name() << std::endl;
   std::cout << "    RGB:  " << typeid( typename ::color::akin::yuv< typename ::color::rgb<  type_name>::category_type >::akin_type ).name() << std::endl;
   std::cout << "    YIQ:  " << typeid( typename ::color::akin::yuv< typename ::color::yiq<  type_name>::category_type >::akin_type ).name() << std::endl;
   std::cout << "    YUV:  " << typeid( typename ::color::akin::yuv< typename ::color::yuv<  type_name>::category_type >::akin_type ).name() << std::endl;
  }

int main( int argc, char *argv[] )
 {
  std::cout << "Hello World" << std::endl;

  akin_cmy<std::uint8_t>();
  akin_cmy<std::uint16_t>();
  akin_cmy<std::uint32_t>();
  akin_cmy<std::uint64_t>();
  akin_cmy<float>();
  akin_cmy<double>();
  akin_cmy<long double>();

  akin_cmyk<std::uint8_t>();
  akin_cmyk<std::uint16_t>();
  akin_cmyk<std::uint32_t>();
  akin_cmyk<std::uint64_t>();
  akin_cmyk<float>();
  akin_cmyk<double>();
  akin_cmyk<long double>();

  akin_gray<std::uint8_t>();
  akin_gray<std::uint16_t>();
  akin_gray<std::uint32_t>();
  akin_gray<std::uint64_t>();
  akin_gray<float>();
  akin_gray<double>();
  akin_gray<long double>();

  akin_hsl<std::uint8_t>();
  akin_hsl<std::uint16_t>();
  akin_hsl<std::uint32_t>();
  akin_hsl<std::uint64_t>();
  akin_hsl<float>();
  akin_hsl<double>();
  akin_hsl<long double>();

  akin_hsv<std::uint8_t>();
  akin_hsv<std::uint16_t>();
  akin_hsv<std::uint32_t>();
  akin_hsv<std::uint64_t>();
  akin_hsv<float>();
  akin_hsv<double>();
  akin_hsv<long double>();
  
  return EXIT_SUCCESS;
 }