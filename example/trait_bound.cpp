#include <iostream>
#include <iomanip>
#include <cstdint>

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
  trait_bound_in_rgb();
  trait_bound_in_cmy();
  trait_bound_in_cmyk();
  trait_bound_in_gray();
  trait_bound_in_hsl();
  trait_bound_in_hsv();
  trait_bound_in_yiq();
  trait_bound_in_yuv();
  std::cout<< "---- ---- ---- ---- ---- ---- ---- ---- ---- ---- ---- ---- ---- ---- ---- ----" << std::endl;

  return EXIT_SUCCESS;
 }

void trait_bound_in_rgb()
 {
  // Instead of float you may put std::uint8_t,std::uint16_t, std::uint32_t, std::uint64_t, float, double, long double
  color::rgb<float> c;
  // TODO
 }

void trait_bound_in_cmy()
 {
  // Instead of float you may put std::uint8_t,std::uint16_t, std::uint32_t, std::uint64_t, float, double, long double
  color::cmy<float> c;
  // TODO
 }

void trait_bound_in_cmyk()
 {
  // Instead of float you may put std::uint8_t,std::uint16_t, std::uint32_t, std::uint64_t, float, double, long double
  color::cmy<float> c;
  // TODO
 }

void trait_bound_in_hsv()
 {
  // Instead of float you may put std::uint8_t,std::uint16_t, std::uint32_t, std::uint64_t, float, double, long double
  color::hsv<float> c;
  // TODO
 }

void trait_bound_in_yiq()
 {
  // Instead of float you may put std::uint8_t,std::uint16_t, std::uint32_t, std::uint64_t, float, double, long double
  color::yiq<float> c;
  // TODO
 }

void trait_bound_in_yuv()
 {
  // Instead of float you may put std::uint8_t,std::uint16_t, std::uint32_t, std::uint64_t, float, double, long double
  color::yuv<float> c;
  // TODO
 }



