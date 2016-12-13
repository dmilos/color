#include <iostream>
#include <iomanip>
#include <cstdint>

#include "color/color.hpp"

void set_red_in_rgb();
void set_red_in_cmy();
void set_red_in_cmyk();
void set_red_in_gray();
void set_red_in_hsl();
void set_red_in_hsv();
void set_red_in_yiq();
void set_red_in_yuv();

int main( int argc, char *argv[] )
 {
  std::cout<< "---- ---- ---- ---- ---- ---- ---- ---- ---- ---- ---- ---- ---- ---- ---- ----" << std::endl;

  set_red_in_rgb();
  set_red_in_cmy();
  set_red_in_cmyk();
  set_red_in_gray();
  set_red_in_hsl();
  set_red_in_hsv();
  set_red_in_yiq();
  set_red_in_yuv();

  std::cout<< "---- ---- ---- ---- ---- ---- ---- ---- ---- ---- ---- ---- ---- ---- ---- ----" << std::endl;
  
  return EXIT_SUCCESS;
 }

void set_red_in_cmy()
 {
  // Instead of float you may put std::uint8_t,std::uint16_t, std::uint32_t, std::uint64_t, float, double, long double
  color::cmy<float> c;

  // initialize c before get
  c = color::constant::turquoise_t{};

  // Show the component before set
  std::cout << color::get::red( c ) << std::endl;

  // Set the red
  // WARNING: Works for float, double and long double, for std::uint8_t use value between 0 and 255
  color::set::red( c, 0.141592653589 );

  // Print changes
  std::cout << color::get::red( c ) << std::endl;
 }

void set_red_in_cmyk()
 {
  // Instead of float you may put std::uint8_t,std::uint16_t, std::uint32_t, std::uint64_t, float, double, long double
  color::cmy<float> c;

  // initialize c before get
  c = color::constant::turquoise_t{};

  // Show the component before set
  std::cout << color::get::red( c ) << std::endl;

  // Set the red
  // WARNING: Works for float, double and long double, for std::uint8_t use value between 0 and 255
  color::set::red( c, 0.141592653589 );

  // Print changes
  std::cout << color::get::red( c ) << std::endl;
 }
 
void set_red_in_gray()
 {
  // Instead of float you may put std::uint8_t,std::uint16_t, std::uint32_t, std::uint64_t, float, double, long double
  color::gray<float> c;

  // initialize c before get
  c = color::constant::turquoise_t{};

  // Show the component before set
  std::cout << color::get::red( c ) << std::endl;

  // Set the red
  // WARNING: Works for float, double and long double, for std::uint8_t use value between 0 and 255
  color::set::red( c, 0.141592653589 );

  // Print changes
  std::cout << color::get::red( c ) << std::endl;
 }

void set_red_in_hsl()
 {
  // Instead of float you may put std::uint8_t,std::uint16_t, std::uint32_t, std::uint64_t, float, double, long double
  color::hsl<float> c;

  // initialize c before get
  c = color::constant::turquoise_t{};

  // Show the component before set
  std::cout << color::get::red( c ) << std::endl;

  // Set the red
  // WARNING: Works for float, double and long double, for std::uint8_t use value between 0 and 255
  color::set::red( c, 0.141592653589 );

  // Print changes
  std::cout << color::get::red( c ) << std::endl;
 }

void set_red_in_hsv()
 {
  // Instead of float you may put std::uint8_t,std::uint16_t, std::uint32_t, std::uint64_t, float, double, long double
  color::hsv<float> c;

  // initialize c before get
  c = color::constant::turquoise_t{};

  // Show the component before set
  std::cout << color::get::red( c ) << std::endl;

  // Set the red
  // WARNING: Works for float, double and long double, for std::uint8_t use value between 0 and 255
  color::set::red( c, 0.141592653589 );

  // Print changes
  std::cout << color::get::red( c ) << std::endl;
 }

void set_red_in_rgb()
 {
  // Instead of float you may put std::uint8_t,std::uint16_t, std::uint32_t, std::uint64_t, float, double, long double
  color::rgb<float> c;

  // initialize c before get
  c = color::constant::turquoise_t{};

  // Show the component before set
  std::cout << color::get::red( c ) << std::endl;

  // Set the red
  // WARNING: Works for float, double and long double, for std::uint8_t use value between 0 and 255
  color::set::red( c, 0.141592653589 );

  // Print changes
  std::cout << color::get::red( c ) << std::endl;
 }

 
void set_red_in_yiq()
 {
  // Instead of float you may put std::uint8_t,std::uint16_t, std::uint32_t, std::uint64_t, float, double, long double
  color::yiq<float> c;

  // initialize c before get
  c = color::constant::turquoise_t{};

  // Show the component before set
  std::cout << color::get::red( c ) << std::endl;

  // Set the red
  // WARNING: Works for float, double and long double, for std::uint8_t use value between 0 and 255
  color::set::red( c, 0.141592653589 );

  // Print changes
  std::cout << color::get::red( c ) << std::endl;
 }

void set_red_in_yuv()
 {
  // Instead of float you may put std::uint8_t,std::uint16_t, std::uint32_t, std::uint64_t, float, double, long double
  color::yuv<float> c;

  // initialize c before get
  c = color::constant::turquoise_t{};

  // Show the component before set
  std::cout << color::get::red( c ) << std::endl;

  // Set the red
  // WARNING: Works for float, double and long double, for std::uint8_t use value between 0 and 255
  color::set::red( c, 0.141592653589 );

  // Print changes
  std::cout << color::get::red( c ) << std::endl;
 }



