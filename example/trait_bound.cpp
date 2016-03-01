#include <iostream>
#include <iomanip>
#include <cstdint>
#include <typeinfo>

#include "color/color.hpp"

void trait_bound_in_rgb();
void trait_bound_in_cmy();
void trait_bound_in_cmyk();
void trait_bound_in_gray();
void trait_bound_in_hsl();
void trait_bound_in_hsv();
void trait_bound_in_yiq();
void trait_bound_in_yuv();

int main( int argc, char *argv[] )
 {
  std::cout<< "---- ---- ---- ---- ---- ---- ---- ---- ---- ---- ---- ---- ---- ---- ---- ----" << std::endl;
  trait_bound_in_cmy();
  trait_bound_in_rgb();
  trait_bound_in_cmyk();
  trait_bound_in_gray();
  trait_bound_in_hsl();
  trait_bound_in_hsv();
  trait_bound_in_yiq();
  trait_bound_in_yuv();
  std::cout<< "---- ---- ---- ---- ---- ---- ---- ---- ---- ---- ---- ---- ---- ---- ---- ----" << std::endl;

  return EXIT_SUCCESS;
 }

void trait_bound_in_cmy()
 {
  // Instead of float you may put std::uint8_t,std::uint16_t, std::uint32_t, std::uint64_t, float, double, long double
  typedef ::color::cmy<float>::bound_type bound_type;

  std::cout << " Bounds for "<< typeid( bound_type ).name() << std::endl;
  std::cout << "    0: [" << bound_type::minimum( 0 ) << ", " << bound_type::maximum( 0 ) << "] |" << bound_type::range( 0 ) << "|" << std::endl;
  std::cout << "    1: [" << bound_type::minimum( 1 ) << ", " << bound_type::maximum( 1 ) << "] |" << bound_type::range( 1 ) << "|" << std::endl;
  std::cout << "    2: [" << bound_type::minimum( 2 ) << ", " << bound_type::maximum( 2 ) << "] |" << bound_type::range( 2 ) << "|" << std::endl;
 }

void trait_bound_in_cmyk()
 {
  // Instead of float you may put std::uint8_t,std::uint16_t, std::uint32_t, std::uint64_t, float, double, long double
  typedef color::cmyk<float>::bound_type bound_type;

  std::cout << " Bounds for "<< typeid( bound_type ).name() << std::endl;
  std::cout << "    0: [" << bound_type::minimum( 0 ) << ", " << bound_type::maximum( 0 ) << "] |" << bound_type::range( 0 ) << "|" << std::endl;
  std::cout << "    1: [" << bound_type::minimum( 1 ) << ", " << bound_type::maximum( 1 ) << "] |" << bound_type::range( 1 ) << "|" << std::endl;
  std::cout << "    2: [" << bound_type::minimum( 2 ) << ", " << bound_type::maximum( 2 ) << "] |" << bound_type::range( 2 ) << "|" << std::endl;
 }

void trait_bound_in_gray()
 {
  // Instead of float you may put std::uint8_t,std::uint16_t, std::uint32_t, std::uint64_t, float, double, long double
  typedef color::gray<float>::bound_type bound_type;

  std::cout << " Bounds for "<< typeid( bound_type ).name() << std::endl;
  std::cout << "    0: [" << bound_type::minimum( 0 ) << ", " << bound_type::maximum( 0 ) << "] |" << bound_type::range( 0 ) << "|" << std::endl;
  std::cout << "    1: [" << bound_type::minimum( 1 ) << ", " << bound_type::maximum( 1 ) << "] |" << bound_type::range( 1 ) << "|" << std::endl;
  std::cout << "    2: [" << bound_type::minimum( 2 ) << ", " << bound_type::maximum( 2 ) << "] |" << bound_type::range( 2 ) << "|" << std::endl;
 }

void trait_bound_in_hsl()
 {
  // Instead of float you may put std::uint8_t,std::uint16_t, std::uint32_t, std::uint64_t, float, double, long double
  typedef color::hsl<float>::bound_type bound_type;

  std::cout << " Bounds for "<< typeid( bound_type ).name() << std::endl;
  std::cout << "    0: [" << bound_type::minimum( 0 ) << ", " << bound_type::maximum( 0 ) << "] |" << bound_type::range( 0 ) << "|" << std::endl;
  std::cout << "    1: [" << bound_type::minimum( 1 ) << ", " << bound_type::maximum( 1 ) << "] |" << bound_type::range( 1 ) << "|" << std::endl;
  std::cout << "    2: [" << bound_type::minimum( 2 ) << ", " << bound_type::maximum( 2 ) << "] |" << bound_type::range( 2 ) << "|" << std::endl;
 }

void trait_bound_in_hsv()
 {
  // Instead of float you may put std::uint8_t,std::uint16_t, std::uint32_t, std::uint64_t, float, double, long double
  typedef color::hsv<float>::bound_type bound_type;

  std::cout << " Bounds for "<< typeid( bound_type ).name() << std::endl;
  std::cout << "    0: [" << bound_type::minimum( 0 ) << ", " << bound_type::maximum( 0 ) << "] |" << bound_type::range( 0 ) << "|" << std::endl;
  std::cout << "    1: [" << bound_type::minimum( 1 ) << ", " << bound_type::maximum( 1 ) << "] |" << bound_type::range( 1 ) << "|" << std::endl;
  std::cout << "    2: [" << bound_type::minimum( 2 ) << ", " << bound_type::maximum( 2 ) << "] |" << bound_type::range( 2 ) << "|" << std::endl;
 }

void trait_bound_in_rgb()
 {
  // Instead of float you may put std::uint8_t,std::uint16_t, std::uint32_t, std::uint64_t, float, double, long double
  typedef color::rgb<float>::bound_type bound_type;

  std::cout << " Bounds for "<< typeid( bound_type ).name() << std::endl;
  std::cout << "    0: [" << bound_type::minimum( 0 ) << ", " << bound_type::maximum( 0 ) << "] |" << bound_type::range( 0 ) << "|" << std::endl;
  std::cout << "    1: [" << bound_type::minimum( 1 ) << ", " << bound_type::maximum( 1 ) << "] |" << bound_type::range( 1 ) << "|" << std::endl;
  std::cout << "    2: [" << bound_type::minimum( 2 ) << ", " << bound_type::maximum( 2 ) << "] |" << bound_type::range( 2 ) << "|" << std::endl;
 }


void trait_bound_in_yiq()
 {
  // Instead of float you may put std::uint8_t,std::uint16_t, std::uint32_t, std::uint64_t, float, double, long double
  typedef color::yiq<float>::bound_type bound_type;

  std::cout << " Bounds for "<< typeid( bound_type ).name() << std::endl;
  std::cout << "    0: [" << bound_type::minimum( 0 ) << ", " << bound_type::maximum( 0 ) << "] |" << bound_type::range( 0 ) << "|" << std::endl;
  std::cout << "    1: [" << bound_type::minimum( 1 ) << ", " << bound_type::maximum( 1 ) << "] |" << bound_type::range( 1 ) << "|" << std::endl;
  std::cout << "    2: [" << bound_type::minimum( 2 ) << ", " << bound_type::maximum( 2 ) << "] |" << bound_type::range( 2 ) << "|" << std::endl;
 }

void trait_bound_in_yuv()
 {
  // Instead of float you may put std::uint8_t,std::uint16_t, std::uint32_t, std::uint64_t, float, double, long double
  typedef color::yuv<float>::bound_type bound_type;

  std::cout << " Bounds for "<< typeid( bound_type ).name() << std::endl;
  std::cout << "    0: [" << bound_type::minimum( 0 ) << ", " << bound_type::maximum( 0 ) << "] |" << bound_type::range( 0 ) << "|" << std::endl;
  std::cout << "    1: [" << bound_type::minimum( 1 ) << ", " << bound_type::maximum( 1 ) << "] |" << bound_type::range( 1 ) << "|" << std::endl;
  std::cout << "    2: [" << bound_type::minimum( 2 ) << ", " << bound_type::maximum( 2 ) << "] |" << bound_type::range( 2 ) << "|" << std::endl;
 }
