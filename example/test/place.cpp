
#include <iostream>
#include <iomanip>
#include <typeinfo>

#include "color/color.hpp"


void place_RGB();
void place_CMY();
void place_CMYK();
void place_gray();
void place_hsl();
void place_hsv();
void place_hsi();

void place_YCgCo();
void place_YDbDr();
void place_yiq();
void place_YPbPr();
void place_yuv();
void place_xyz();


void main_place()
 {
  place_RGB();
  place_CMY();
  place_CMYK();
  place_gray();
  place_hsl();
  place_hsv();
  place_hsi();
  place_YCgCo();
  place_YDbDr();
  place_yiq();
  place_YPbPr();
  place_yuv();
  place_xyz();
 }

#define MAKE_CKECK_PLACE(DP_name)                                                 \
template< typename category_name>                                                 \
 void check_place_##DP_name()                                                     \
  {                                                                               \
   if( ::color::place::DP_name< category_name >() < 0 )                           \
    {                                                                             \
     std::cout << "Error: "                                                       \
               << ::color::place::DP_name< category_name >()                      \
               << " = "                                                           \
               << #DP_name << "<" << typeid( category_name ).name() <<">()"       \
               << std::endl;                                                      \
    }                                                                             \
 }

MAKE_CKECK_PLACE(alpha)
MAKE_CKECK_PLACE(blue)
MAKE_CKECK_PLACE(cyan)
MAKE_CKECK_PLACE(gray)
MAKE_CKECK_PLACE(green)
MAKE_CKECK_PLACE(hue)
MAKE_CKECK_PLACE(inphase)
MAKE_CKECK_PLACE(intensity)
MAKE_CKECK_PLACE(key)
MAKE_CKECK_PLACE(lightness)
MAKE_CKECK_PLACE(luma)
MAKE_CKECK_PLACE(luminance)
MAKE_CKECK_PLACE(magenta)
MAKE_CKECK_PLACE(quadrature)
MAKE_CKECK_PLACE(red)
MAKE_CKECK_PLACE(saturation)
MAKE_CKECK_PLACE(value)
MAKE_CKECK_PLACE(yellow)


void place_RGB()
 {
  check_place_alpha<::color::bgra<double>       ::category_type>();
  check_place_alpha<::color::argb<double>       ::category_type>();

  check_place_red< ::color::rgb<float>         ::category_type >();
  check_place_red< ::color::bgr<float>         ::category_type >();
  check_place_red< ::color::bgra<double>       ::category_type >();
  check_place_red< ::color::abgr<std::uint8_t> ::category_type >();
  check_place_red< ::color::rgba<double>       ::category_type >();
  check_place_red< ::color::argb<std::uint16_t>::category_type >();

  check_place_green< ::color::rgb<float>         ::category_type >();
  check_place_green< ::color::bgr<float>         ::category_type >();
  check_place_green< ::color::bgra<double>       ::category_type >();
  check_place_green< ::color::abgr<std::uint8_t> ::category_type >();
  check_place_green< ::color::rgba<double>       ::category_type >();
  check_place_green< ::color::argb<std::uint16_t>::category_type >();

  check_place_blue< ::color::rgb<float>         ::category_type >();
  check_place_blue< ::color::bgr<float>         ::category_type >();
  check_place_blue< ::color::bgra<double>       ::category_type >();
  check_place_blue< ::color::abgr<std::uint8_t> ::category_type >();
  check_place_blue< ::color::rgba<double>       ::category_type >();
  check_place_blue< ::color::argb<std::uint16_t>::category_type >();
 }

void place_CMY()
 {
  check_place_cyan< ::color::cmy<std::uint8_t> ::category_type >();
  check_place_cyan< ::color::cmy<std::uint16_t>::category_type >();
  check_place_cyan< ::color::cmy<float>        ::category_type >();
  check_place_cyan< ::color::cmy<double>       ::category_type >();
  check_place_cyan< ::color::cmy<long double>  ::category_type >();

  check_place_magenta< ::color::cmy<std::uint8_t> ::category_type >();
  check_place_magenta< ::color::cmy<std::uint16_t>::category_type >();
  check_place_magenta< ::color::cmy<float>        ::category_type >();
  check_place_magenta< ::color::cmy<double>       ::category_type >();
  check_place_magenta< ::color::cmy<long double>  ::category_type >();

  check_place_yellow< ::color::cmy<std::uint8_t> ::category_type >();
  check_place_yellow< ::color::cmy<std::uint16_t>::category_type >();
  check_place_yellow< ::color::cmy<float>        ::category_type >();
  check_place_yellow< ::color::cmy<double>       ::category_type >();
  check_place_yellow< ::color::cmy<long double>  ::category_type >();
 }

void place_CMYK()
 {
  check_place_cyan< ::color::cmyk<std::uint8_t> ::category_type >();
  check_place_cyan< ::color::cmyk<std::uint16_t>::category_type >();
  check_place_cyan< ::color::cmyk<float>        ::category_type >();
  check_place_cyan< ::color::cmyk<double>       ::category_type >();
  check_place_cyan< ::color::cmyk<long double>  ::category_type >();

  check_place_magenta< ::color::cmyk<std::uint8_t> ::category_type >();
  check_place_magenta< ::color::cmyk<std::uint16_t>::category_type >();
  check_place_magenta< ::color::cmyk<float>        ::category_type >();
  check_place_magenta< ::color::cmyk<double>       ::category_type >();
  check_place_magenta< ::color::cmyk<long double>  ::category_type >();

  check_place_yellow< ::color::cmyk<std::uint8_t> ::category_type >();
  check_place_yellow< ::color::cmyk<std::uint16_t>::category_type >();
  check_place_yellow< ::color::cmyk<float>        ::category_type >();
  check_place_yellow< ::color::cmyk<double>       ::category_type >();
  check_place_yellow< ::color::cmyk<long double>  ::category_type >();
 }


void place_gray()
 {

 }


void place_hsl()
 {
  check_place_hue< ::color::hsl<std::uint8_t> ::category_type >();
  check_place_hue< ::color::hsl<std::uint16_t>::category_type >();
  check_place_hue< ::color::hsl<float>        ::category_type >();
  check_place_hue< ::color::hsl<double>       ::category_type >();
  check_place_hue< ::color::hsl<long double>  ::category_type >();

  check_place_saturation< ::color::hsl<std::uint8_t> ::category_type >();
  check_place_saturation< ::color::hsl<std::uint16_t>::category_type >();
  check_place_saturation< ::color::hsl<float>        ::category_type >();
  check_place_saturation< ::color::hsl<double>       ::category_type >();
  check_place_saturation< ::color::hsl<long double>  ::category_type >();

  check_place_lightness< ::color::hsl<std::uint8_t> ::category_type >();
  check_place_lightness< ::color::hsl<std::uint16_t>::category_type >();
  check_place_lightness< ::color::hsl<float>        ::category_type >();
  check_place_lightness< ::color::hsl<double>       ::category_type >();
  check_place_lightness< ::color::hsl<long double>  ::category_type >();
 }

void place_hsv()
 {
  check_place_hue< ::color::hsv<std::uint8_t>  ::category_type >();
  check_place_hue< ::color::hsv<std::uint16_t>::category_type >();
  check_place_hue< ::color::hsv<float>        ::category_type >();
  check_place_hue< ::color::hsv<double>       ::category_type >();
  check_place_hue< ::color::hsv<long double>  ::category_type >();

  check_place_saturation< ::color::hsv<std::uint8_t> ::category_type >();
  check_place_saturation< ::color::hsv<std::uint16_t>::category_type >();
  check_place_saturation< ::color::hsv<float>        ::category_type >();
  check_place_saturation< ::color::hsv<double>       ::category_type >();
  check_place_saturation< ::color::hsv<long double>  ::category_type >();

  check_place_value< ::color::hsv<std::uint8_t> ::category_type >();
  check_place_value< ::color::hsv<std::uint16_t>::category_type >();
  check_place_value< ::color::hsv<float>        ::category_type >();
  check_place_value< ::color::hsv<double>       ::category_type >();
  check_place_value< ::color::hsv<long double>  ::category_type >();
 }

void place_hsi()
 {
  check_place_hue< ::color::hsi<std::uint8_t> ::category_type >();
  check_place_hue< ::color::hsi<std::uint16_t>::category_type >();
  check_place_hue< ::color::hsi<float>        ::category_type >();
  check_place_hue< ::color::hsi<double>       ::category_type >();
  check_place_hue< ::color::hsi<long double>  ::category_type >();

  check_place_saturation< ::color::hsi<std::uint8_t> ::category_type >();
  check_place_saturation< ::color::hsi<std::uint16_t>::category_type >();
  check_place_saturation< ::color::hsi<float>        ::category_type >();
  check_place_saturation< ::color::hsi<double>       ::category_type >();
  check_place_saturation< ::color::hsi<long double>  ::category_type >();

  check_place_intensity< ::color::hsi<std::uint8_t> ::category_type >();
  check_place_intensity< ::color::hsi<std::uint16_t>::category_type >();
  check_place_intensity< ::color::hsi<float>        ::category_type >();
  check_place_intensity< ::color::hsi<double>       ::category_type >();
  check_place_intensity< ::color::hsi<long double>  ::category_type >();
 }

void place_YCgCo()
 {
  check_place_luma< ::color::YCgCo<std::uint8_t> ::category_type >();
  check_place_luma< ::color::YCgCo<std::uint16_t>::category_type >();
  check_place_luma< ::color::YCgCo<float>        ::category_type >();
  check_place_luma< ::color::YCgCo<double>       ::category_type >();
  check_place_luma< ::color::YCgCo<long double>  ::category_type >();
 }
void place_YDbDr()
 {
  check_place_luma< ::color::YDbDr<std::uint8_t> ::category_type >();
  check_place_luma< ::color::YDbDr<std::uint16_t>::category_type >();
  check_place_luma< ::color::YDbDr<float>        ::category_type >();
  check_place_luma< ::color::YDbDr<double>       ::category_type >();
  check_place_luma< ::color::YDbDr<long double>  ::category_type >();
 }
void place_yiq()
 {
  check_place_luma< ::color::yiq<std::uint8_t> ::category_type >();
  check_place_luma< ::color::yiq<std::uint16_t>::category_type >();
  check_place_luma< ::color::yiq<float>        ::category_type >();
  check_place_luma< ::color::yiq<double>       ::category_type >();
  check_place_luma< ::color::yiq<long double>  ::category_type >();

 }
void place_YPbPr()
 {
  check_place_luma< ::color::YPbPr<std::uint8_t> ::category_type >();
  check_place_luma< ::color::YPbPr<std::uint16_t>::category_type >();
  check_place_luma< ::color::YPbPr<float>        ::category_type >();
  check_place_luma< ::color::YPbPr<double>       ::category_type >();
  check_place_luma< ::color::YPbPr<long double>  ::category_type >();
 }

void place_yuv()
 {
  check_place_luma< ::color::yuv<std::uint8_t> ::category_type >();
  check_place_luma< ::color::yuv<std::uint16_t>::category_type >();
  check_place_luma< ::color::yuv<float>        ::category_type >();
  check_place_luma< ::color::yuv<double>       ::category_type >();
  check_place_luma< ::color::yuv<long double>  ::category_type >();
 }

void place_xyz()
 {
  check_place_luma< ::color::xyz<std::uint8_t> ::category_type >();
  check_place_luma< ::color::xyz<std::uint16_t>::category_type >();
  check_place_luma< ::color::xyz<float>        ::category_type >();
  check_place_luma< ::color::xyz<double>       ::category_type >();
  check_place_luma< ::color::xyz<long double>  ::category_type >();
 }
