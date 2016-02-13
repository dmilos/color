#include <iostream>
#include <iomanip>
#include <cstdint>

#include "color/color.hpp"

void set_blue_in_rgb();
void set_blue_in_cmy();
void set_blue_in_cmyk();
void set_blue_in_gray();
void set_blue_in_hsl();
void set_blue_in_hsv();
void set_blue_in_yiq();
void set_blue_in_yuv();

int main( int argc, char *argv[] )
 {
  set_blue_in_rgb();

  return EXIT_SUCCESS;
 }

void set_blue_in_rgb()
 {
  // Instead of float you may put std::uint8_t,std::uint16_t, std::uint32_t, std::uint64_t, float, double, long double
  color::rgb<float> c;

  // initialize c before get
  color::make::turquoise( c );

  // Show the component before set
  std::cout << color::get::blue( c ) << std::endl;

  // Set the blue
  // WARNING: Works for float, double and long double, for std::uint8_t use value between 0 and 255
  color::set::blue( c, 0.141592653589 );

  // Print changes
  std::cout << color::get::blue( c ) << std::endl;
 }

void set_blue_in_cmy()
 {
  // Instead of float you may put std::uint8_t,std::uint16_t, std::uint32_t, std::uint64_t, float, double, long double
  color::cmy<float> c;

  // initialize c before get
  color::make::turquoise( c );

  // Show the component before set
  std::cout << color::get::blue( c ) << std::endl;

  // Set the blue
  // WARNING: Works for float, double and long double, for std::uint8_t use value between 0 and 255
  color::set::blue( c, 0.141592653589 );

  // Print changes
  std::cout << color::get::blue( c ) << std::endl;
 }

void set_blue_in_cmyk()
 {
  // Instead of float you may put std::uint8_t,std::uint16_t, std::uint32_t, std::uint64_t, float, double, long double
  color::cmy<float> c;

  // initialize c before get
  color::make::turquoise( c );

  // Show the component before set
  std::cout << color::get::blue( c ) << std::endl;

  // Set the blue
  // WARNING: Works for float, double and long double, for std::uint8_t use value between 0 and 255
  color::set::blue( c, 0.141592653589 );

  // Print changes
  std::cout << color::get::blue( c ) << std::endl;
 }

void set_blue_in_hsv()
 {
  // Instead of float you may put std::uint8_t,std::uint16_t, std::uint32_t, std::uint64_t, float, double, long double
  color::hsv<float> c;

  // initialize c before get
  color::make::turquoise( c );

  // Show the component before set
  std::cout << color::get::blue( c ) << std::endl;

  // Set the blue
  // WARNING: Works for float, double and long double, for std::uint8_t use value between 0 and 255
  color::set::blue( c, 0.141592653589 );

  // Print changes
  std::cout << color::get::blue( c ) << std::endl;
 }

void set_blue_in_yiq()
 {
  // Instead of float you may put std::uint8_t,std::uint16_t, std::uint32_t, std::uint64_t, float, double, long double
  color::yiq<float> c;

  // initialize c before get
  color::make::turquoise( c );

  // Show the component before set
  std::cout << color::get::blue( c ) << std::endl;

  // Set the blue
  // WARNING: Works for float, double and long double, for std::uint8_t use value between 0 and 255
  color::set::blue( c, 0.141592653589 );

  // Print changes
  std::cout << color::get::blue( c ) << std::endl;
 }

void set_blue_in_yuv()
 {
  // Instead of float you may put std::uint8_t,std::uint16_t, std::uint32_t, std::uint64_t, float, double, long double
  color::yuv<float> c;

  // initialize c before get
  color::make::turquoise( c );

  // Show the component before set
  std::cout << color::get::blue( c ) << std::endl;

  // Set the blue
  // WARNING: Works for float, double and long double, for std::uint8_t use value between 0 and 255
  color::set::blue( c, 0.141592653589 );

  // Print changes
  std::cout << color::get::blue( c ) << std::endl;
 }



