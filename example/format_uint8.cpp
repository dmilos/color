#include <iostream>
#include <iomanip>

#include "color/color.hpp"

void format_uint8_rgb();
void format_uint8_cmy();
void format_uint8_cmyk();
void format_uint8_gray();
void format_uint8_hsl();
void format_uint8_hsv();
void format_uint8_yiq();
void format_uint8_yuv();


int main( int argc, char *argv[] )
 {
  std::cout<< "---- ---- ---- ---- ---- ---- ---- ---- ---- ---- ---- ---- ---- ---- ---- ----" << std::endl;
  std::cout<< "In this example all models use std::uint8_t for component" << std::endl;
  format_uint8_rgb();
  format_uint8_cmy();
  format_uint8_cmyk();
  format_uint8_gray();
  format_uint8_hsl();
  format_uint8_hsv();
  format_uint8_yiq();
  format_uint8_yuv();
  std::cout<< "---- ---- ---- ---- ---- ---- ---- ---- ---- ---- ---- ---- ---- ---- ---- ----" << std::endl;

  return EXIT_SUCCESS;
 }
 
void format_uint8_rgb()
 {
  ::color::rgb< std::uint8_t > r;

  color::make::orange( r ); //!< Fill with some useful information

  std::cout<< "Orange in color::rgb<std::uint8_t> = { ";
  std::cout<< std::setw(12) << std::right << (unsigned)r[0] << ","
           << std::setw(12) << std::right << (unsigned)r[1] << ","
           << std::setw(12) << std::right << (unsigned)r[2];
  std::cout<< " };";
  std::cout<< std::endl;
 }

void format_uint8_cmy()
 {
  ::color::cmy< std::uint8_t > c;

  ::color::make::orange( c ); //!< Fill with some useful information

  std::cout<< "Orange in color::cmy<std::uint8_t> = { ";
  std::cout<< std::setw(12) << std::right << (unsigned)c[0] << ","
           << std::setw(12) << std::right << (unsigned)c[1] << ","
           << std::setw(12) << std::right << (unsigned)c[2];
  std::cout<< " };";
  std::cout<< std::endl;
 }

void format_uint8_cmyk()
 {
  ::color::cmyk< std::uint8_t > ck;

  color::make::orange( ck ); //!< Fill with some useful information

  std::cout<< "Orange in color::cmy<std::uint8_t> = { ";
  std::cout<< std::setw(12) << std::right << (unsigned)ck[0] << ","
           << std::setw(12) << std::right << (unsigned)ck[1] << ","
           << std::setw(12) << std::right << (unsigned)ck[2] << ","
           << std::setw(12) << std::right << (unsigned)ck[3];
  std::cout<< " };";
  std::cout<< std::endl;
 }

void format_uint8_gray()
 {
  ::color::gray< std::uint8_t > g;

  ::color::make::orange( g ); //!< Fill with some useful information

  std::cout<< "Orange in color::cmy<std::uint8_t> = { ";
  std::cout<< std::setw(12) << std::right << (unsigned)g[0];
  std::cout<< " };";
  std::cout<< std::endl;

 }

void format_uint8_hsl()
 {
  ::color::hsl< std::uint8_t > hl;

  ::color::make::orange( hl ); //!< Fill with some useful information

  std::cout<< "Orange in color::cmy<std::uint8_t> = { ";
  std::cout<< std::setw(12) << std::right << (unsigned)hl[0] << ","
           << std::setw(12) << std::right << (unsigned)hl[1] << ","
           << std::setw(12) << std::right << (unsigned)hl[2];
  std::cout<< " };";
  std::cout<< std::endl;
 }

void format_uint8_hsv()
 {
  ::color::hsv< std::uint8_t > hv;

  ::color::make::orange( hv ); //!< Fill with some useful information

  std::cout<< "Orange in color::cmy<std::uint8_t> = { ";
  std::cout<< std::setw(12) << std::right << (unsigned)hv[0] << ","
           << std::setw(12) << std::right << (unsigned)hv[1] << ","
           << std::setw(12) << std::right << (unsigned)hv[2];
  std::cout<< " };";
  std::cout<< std::endl;
 }

void format_uint8_yiq()
 {
  ::color::yiq< std::uint8_t > yq;

  ::color::make::orange( yq ); //!< Fill with some useful information


  std::cout<< "Orange in color::cmy<std::uint8_t> = { ";
  std::cout<< std::setw(12) << std::right << (unsigned)yq[0] << ","
           << std::setw(12) << std::right << (unsigned)yq[1] << ","
           << std::setw(12) << std::right << (unsigned)yq[2];
  std::cout<< " };";
  std::cout<< std::endl;
 }

void format_uint8_yuv()
 {
  ::color::yuv< std::uint8_t > yv;

  ::color::make::orange( yv ); //!< Fill with some useful information

  std::cout<< "Orange in color::cmy<std::uint8_t> = { ";
  std::cout<< std::setw(12) << std::right << (unsigned)yv[0] << ","
           << std::setw(12) << std::right << (unsigned)yv[1] << ","
           << std::setw(12) << std::right << (unsigned)yv[2];
  std::cout<< " };";
  std::cout<< std::endl;
 }

