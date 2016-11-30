#include <iostream>
#include <iomanip>

#include "color/color.hpp"

void format_uint32_rgb();
void format_uint32_cmy();
void format_uint32_cmyk();
void format_uint32_gray();
void format_uint32_hsl();
void format_uint32_hsv();
void format_uint32_yiq();
void format_uint32_yuv();


int main( int argc, char *argv[] )
 {
  std::cout<< "---- ---- ---- ---- ---- ---- ---- ---- ---- ---- ---- ---- ---- ---- ---- ----" << std::endl;
  std::cout<< "In this example all models use std::uint32_t for component" << std::endl;
  format_uint32_rgb();
  format_uint32_cmy();
  format_uint32_cmyk();
  format_uint32_gray();
  format_uint32_hsl();
  format_uint32_hsv();
  format_uint32_yiq();
  format_uint32_yuv();
  std::cout<< "---- ---- ---- ---- ---- ---- ---- ---- ---- ---- ---- ---- ---- ---- ---- ----" << std::endl;

  return EXIT_SUCCESS;
 }
 
void format_uint32_rgb()
 {
  ::color::rgb< std::uint32_t > r;

  r = ::color::constant::orange_t{}; //!< Fill with some useful information

  std::cout<< "Orange in color::rgb<std::uint32_t> = { ";
  std::cout<< std::setw(12) << std::right << r[0] << ","
           << std::setw(12) << std::right << r[1] << ","
           << std::setw(12) << std::right << r[2];
  std::cout<< " };";
  std::cout<< std::endl;
 }

void format_uint32_cmy()
 {
  ::color::cmy< std::uint32_t > c;

  c = ::color::constant::orange_t{}; //!< Fill with some useful information

  std::cout<< "Orange in color::cmy<std::uint32_t> = { ";
  std::cout<< std::setw(12) << std::right << c[0] << ","
           << std::setw(12) << std::right << c[1] << ","
           << std::setw(12) << std::right << c[2];
  std::cout<< " };";
  std::cout<< std::endl;
 }

void format_uint32_cmyk()
 {
  ::color::cmyk< std::uint32_t > ck;

  ck = ::color::constant::orange_t{}; //!< Fill with some useful information

  std::cout<< "Orange in color::cmy<std::uint32_t> = { ";
  std::cout<< std::setw(12) << std::right << ck[0] << ","
           << std::setw(12) << std::right << ck[1] << ","
           << std::setw(12) << std::right << ck[2] << ","
           << std::setw(12) << std::right << ck[3];
  std::cout<< " };";
  std::cout<< std::endl;
 }

void format_uint32_gray()
 {
  ::color::gray< std::uint32_t > g;

  g = ::color::constant::orange_t{}; //!< Fill with some useful information

  std::cout<< "Orange in color::cmy<std::uint32_t> = { ";
  std::cout<< std::setw(12) << std::right << g[0];
  std::cout<< " };";
  std::cout<< std::endl;
 }

void format_uint32_hsl()
 {
  ::color::hsl< std::uint32_t > hl;

  hl = ::color::constant::orange_t{}; //!< Fill with some useful information

  std::cout<< "Orange in color::cmy<std::uint32_t> = { ";
  std::cout<< std::setw(12) << std::right << hl[0] << ","
           << std::setw(12) << std::right << hl[1] << ","
           << std::setw(12) << std::right << hl[2];
  std::cout<< " };";
  std::cout<< std::endl;
 }

void format_uint32_hsv()
 {
  ::color::hsv< std::uint32_t > hv;

  hv = ::color::constant::orange_t{}; //!< Fill with some useful information

  std::cout<< "Orange in color::cmy<std::uint32_t> = { ";
  std::cout<< std::setw(12) << std::right << hv[0] << ","
           << std::setw(12) << std::right << hv[1] << ","
           << std::setw(12) << std::right << hv[2];
  std::cout<< " };";
  std::cout<< std::endl;
 }

void format_uint32_yiq()
 {
  ::color::yiq< std::uint32_t > yq;

  yq = ::color::constant::orange_t{}; //!< Fill with some useful information

  std::cout<< "Orange in color::cmy<std::uint32_t> = { ";
  std::cout<< std::setw(12) << std::right << yq[0] << ","
           << std::setw(12) << std::right << yq[1] << ","
           << std::setw(12) << std::right << yq[2];
  std::cout<< " };";
  std::cout<< std::endl;
 }

void format_uint32_yuv()
 {
  ::color::yuv< std::uint32_t > yv;

  yv = ::color::constant::orange_t{}; //!< Fill with some useful information

  std::cout<< "Orange in color::cmy<std::uint32_t> = { ";
  std::cout<< std::setw(12) << std::right << yv[0] << ","
           << std::setw(12) << std::right << yv[1] << ","
           << std::setw(12) << std::right << yv[2];
  std::cout<< " };";
  std::cout<< std::endl;
 }

