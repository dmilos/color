#include <iostream>
#include <iomanip>

#include "color/color.hpp"

void format_uint16_rgb();
void format_uint16_cmy();
void format_uint16_cmyk();
void format_uint16_gray();
void format_uint16_hsl();
void format_uint16_hsv();
void format_uint16_yiq();
void format_uint16_yuv();


int main( int argc, char *argv[] )
 {
  std::cout<< "---- ---- ---- ---- ---- ---- ---- ---- ---- ---- ---- ---- ---- ---- ---- ----" << std::endl;
  std::cout<< "In this example all models use std::uint16_t for component" << std::endl;
  format_uint16_rgb();
  format_uint16_cmy();
  format_uint16_cmyk();
  format_uint16_gray();
  format_uint16_hsl();
  format_uint16_hsv();
  format_uint16_yiq();
  format_uint16_yuv();
  std::cout<< "---- ---- ---- ---- ---- ---- ---- ---- ---- ---- ---- ---- ---- ---- ---- ----" << std::endl;

  return EXIT_SUCCESS;
 }
 
void format_uint16_rgb()
 {
  ::color::rgb< std::uint16_t > r;

  ::color::constant::orange_t{ r ); //!< Fill with some useful information

  std::cout<< "Orange in color::rgb<std::uint16_t> = { ";
  std::cout<< std::setw(12) << std::right << r[0] << ","
           << std::setw(12) << std::right << r[1] << ","
           << std::setw(12) << std::right << r[2];
  std::cout<< " };";
  std::cout<< std::endl;
 }

void format_uint16_cmy()
 {
  ::color::cmy< std::uint16_t > c;

  ::color::constant::orange_t{ c ); //!< Fill with some useful information

  std::cout<< "Orange in color::cmy<std::uint16_t> = { ";
  std::cout<< std::setw(12) << std::right << c[0] << ","
           << std::setw(12) << std::right << c[1] << ","
           << std::setw(12) << std::right << c[2];
  std::cout<< " };";
  std::cout<< std::endl;
 }

void format_uint16_cmyk()
 {
  ::color::cmyk< std::uint16_t > ck;

  ::color::constant::orange_t{ ck ); //!< Fill with some useful information

  std::cout<< "Orange in color::cmy<std::uint16_t> = { ";
  std::cout<< std::setw(12) << std::right << ck[0] << ","
           << std::setw(12) << std::right << ck[1] << ","
           << std::setw(12) << std::right << ck[2] << ","
           << std::setw(12) << std::right << ck[3];
  std::cout<< " };";
  std::cout<< std::endl;
 }

void format_uint16_gray()
 {
  ::color::gray< std::uint16_t > g;

  ::color::constant::orange_t{ g ); //!< Fill with some useful information

  std::cout<< "Orange in color::cmy<std::uint16_t> = { ";
  std::cout<< std::setw(12) << std::right << g[0];
  std::cout<< " };";
  std::cout<< std::endl;

 }

void format_uint16_hsl()
 {
  ::color::hsl< std::uint16_t > hl;

  ::color::constant::orange_t{ hl ); //!< Fill with some useful information

  std::cout<< "Orange in color::cmy<std::uint16_t> = { ";
  std::cout<< std::setw(12) << std::right << hl[0] << ","
           << std::setw(12) << std::right << hl[1] << ","
           << std::setw(12) << std::right << hl[2];
  std::cout<< " };";
  std::cout<< std::endl;
 }

void format_uint16_hsv()
 {
  ::color::hsv< std::uint16_t > hv;

  ::color::constant::orange_t{ hv ); //!< Fill with some useful information

  std::cout<< "Orange in color::cmy<std::uint16_t> = { ";
  std::cout<< std::setw(12) << std::right << hv[0] << ","
           << std::setw(12) << std::right << hv[1] << ","
           << std::setw(12) << std::right << hv[2];
  std::cout<< " };";
  std::cout<< std::endl;
 }

void format_uint16_yiq()
 {
  ::color::yiq< std::uint16_t > yq;

  ::color::constant::orange_t{ yq ); //!< Fill with some useful information


  std::cout<< "Orange in color::cmy<std::uint16_t> = { ";
  std::cout<< std::setw(12) << std::right << yq[0] << ","
           << std::setw(12) << std::right << yq[1] << ","
           << std::setw(12) << std::right << yq[2];
  std::cout<< " };";
  std::cout<< std::endl;
 }

void format_uint16_yuv()
 {
  ::color::yuv< std::uint16_t > yv;

  ::color::constant::orange_t{ yv ); //!< Fill with some useful information

  std::cout<< "Orange in color::cmy<std::uint16_t> = { ";
  std::cout<< std::setw(12) << std::right << yv[0] << ","
           << std::setw(12) << std::right << yv[1] << ","
           << std::setw(12) << std::right << yv[2];
  std::cout<< " };";
  std::cout<< std::endl;
 }

