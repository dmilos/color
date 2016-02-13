#include <iostream>
#include <iomanip>
#include <cstdint>

#include "color/color.hpp"

void get_red_from_rgb();
void get_red_from_cmy();
void get_red_from_cmyk();
void get_red_from_gray();
void get_red_from_hsl();
void get_red_from_hsv();
void get_red_from_yiq();
void get_red_from_yuv();


int main( int argc, char *argv[] )
 {
  get_red_from_rgb();
  get_red_from_cmy();
  get_red_from_cmyk();
  get_red_from_gray();
  get_red_from_hsl();
  get_red_from_hsv();
  get_red_from_yiq();
  get_red_from_yuv();

  return EXIT_SUCCESS;
 }

void get_red_from_rgb()
 {
  // Instead of float you may put std::uint8_t,std::uint16_t, std::uint32_t, std::uint64_t, double, long double
  color::rgb<float> c;

  // initialize c before getion
  color::make::turquoise( c );

  // Here is how to get red component.
  auto red = color::get::red( c );

  // Now do whatever you wan to do
  std::cout << red << std::endl;
 }

void get_red_from_cmy()
 {
  // Instead of float you may put std::uint8_t,std::uint16_t, std::uint32_t, std::uint64_t, double, long double
  color::cmy<float> c;

  // initialize c before getion
  color::make::turquoise( c );


  // Here is how to get red component.
  auto red = color::get::red( c );

  // Now do whatever you wan to do
  std::cout << red << std::endl;
 }

void get_red_from_cmyk()
 {
  // Instead of float you may put std::uint8_t,std::uint16_t, std::uint32_t, std::uint64_t, double, long double
  color::cmyk<float> c;

  // initialize c before getion
  color::make::turquoise( c );

  // Here is how to get red component.
  auto red = color::get::red( c );

  // Now do whatever you wan to do
  std::cout << red << std::endl;
 }

void get_red_from_gray()
 {
  // Instead of float you may put std::uint8_t,std::uint16_t, std::uint32_t, std::uint64_t, double, long double
  color::gray<float> c;

  // initialize c before getion
  color::make::turquoise( c );

  // Here is how to get red component.
  auto red = color::get::red( c );

  // Now do whatever you wan to do
  std::cout << red << std::endl;
 }

void get_red_from_hsl()
 {
  // Instead of float you may put std::uint8_t,std::uint16_t, std::uint32_t, std::uint64_t, double, long double
  color::hsl<float> c;

  // initialize c before getion
  color::make::turquoise( c );

  // Here is how to get red component.
  auto red = color::get::red( c );

  // Now do whatever you wan to do
  std::cout << red << std::endl;
 }

void get_red_from_hsv()
 {
  // Instead of float you may put std::uint8_t,std::uint16_t, std::uint32_t, std::uint64_t, double, long double
  color::hsv<float> c;

  // initialize c before getion
  color::make::turquoise( c );

  // Here is how to get red component.
  auto red = color::get::red( c );

  // Now do whatever you wan to do
  std::cout << red << std::endl;
 }

void get_red_from_yiq()
 {
  // Instead of float you may put std::uint8_t,std::uint16_t, std::uint32_t, std::uint64_t, double, long double
  color::yiq<float> c;

  // initialize c before getion
  color::make::turquoise( c );

  // Here is how to get red component.
  auto red = color::get::red( c );

  // Now do whatever you wan to do
  std::cout << red << std::endl;
 }

void get_red_from_yuv()
 {
  // Instead of float you may put std::uint8_t,std::uint16_t, std::uint32_t, std::uint64_t, double, long double
  color::yiq<float> c;

  // initialize c before getion
  color::make::turquoise( c );

  // Here is how to get red component.
  auto red = color::get::red( c );

  // Now do whatever you wan to do
  std::cout << red << std::endl;
 }

