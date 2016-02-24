#include <iostream>
#include <iomanip>

#include "color/color.hpp"

void format_uint64_rgb();
void format_uint64_cmy();
void format_uint64_cmyk();
void format_uint64_gray();
void format_uint64_hsl();
void format_uint64_hsv();
void format_uint64_yiq();
void format_uint64_yuv();


int main( int argc, char *argv[] )
 {
  std::cout<< "---- ---- ---- ---- ---- ---- ---- ---- ---- ---- ---- ---- ---- ---- ---- ----" << std::endl;
  std::cout<< "In this example all models use std::uint64_t for component" << std::endl;
  format_uint64_rgb();
  format_uint64_cmy();
  format_uint64_cmyk();
  format_uint64_gray();
  format_uint64_hsl();
  format_uint64_hsv();
  format_uint64_yiq();
  format_uint64_yuv();
  std::cout<< "---- ---- ---- ---- ---- ---- ---- ---- ---- ---- ---- ---- ---- ---- ---- ----" << std::endl;

  return EXIT_SUCCESS;
 }
 
void format_uint64_rgb()
 {
  ::color::rgb< std::uint64_t > r;

  color::make::orange( r ); //!< Fill with some useful information

  std::cout<< "Orange in color::rgb<std::uint64_t> = { ";
  std::cout<< std::setw(12) << std::right << r[0] << ","
           << std::setw(12) << std::right << r[1] << ","
           << std::setw(12) << std::right << r[2];
  std::cout<< " };";
  std::cout<< std::endl;
 }

void format_uint64_cmy()
 {
  ::color::cmy< std::uint64_t > c;

  ::color::make::orange( c ); //!< Fill with some useful information

  std::cout<< "Orange in color::cmy<std::uint64_t> = { ";
  std::cout<< std::setw(12) << std::right << c[0] << ","
           << std::setw(12) << std::right << c[1] << ","
           << std::setw(12) << std::right << c[2];
  std::cout<< " };";
  std::cout<< std::endl;
 }

void format_uint64_cmyk()
 {
  ::color::cmyk< std::uint64_t > ck;

  color::make::orange( ck ); //!< Fill with some useful information

  std::cout<< "Orange in color::cmy<std::uint64_t> = { ";
  std::cout<< std::setw(12) << std::right << ck[0] << ","
           << std::setw(12) << std::right << ck[1] << ","
           << std::setw(12) << std::right << ck[2] << ","
           << std::setw(12) << std::right << ck[3];
  std::cout<< " };";
  std::cout<< std::endl;
 }

void format_uint64_gray()
 {
  ::color::gray< std::uint64_t > g;

  ::color::make::orange( g ); //!< Fill with some useful information

  std::cout<< "Orange in color::cmy<std::uint64_t> = { ";
  std::cout<< std::setw(12) << std::right << g[0];
  std::cout<< " };";
  std::cout<< std::endl;

 }

void format_uint64_hsl()
 {
  ::color::hsl< std::uint64_t > hl;

  ::color::make::orange( hl ); //!< Fill with some useful information

  std::cout<< "Orange in color::cmy<std::uint64_t> = { ";
  std::cout<< std::setw(12) << std::right << hl[0] << ","
           << std::setw(12) << std::right << hl[1] << ","
           << std::setw(12) << std::right << hl[2];
  std::cout<< " };";
  std::cout<< std::endl;
 }

void format_uint64_hsv()
 {
  ::color::hsv< std::uint64_t > hv;

  ::color::make::orange( hv ); //!< Fill with some useful information

  std::cout<< "Orange in color::cmy<std::uint64_t> = { ";
  std::cout<< std::setw(12) << std::right << hv[0] << ","
           << std::setw(12) << std::right << hv[1] << ","
           << std::setw(12) << std::right << hv[2];
  std::cout<< " };";
  std::cout<< std::endl;
 }

void format_uint64_yiq()
 {
  ::color::yiq< std::uint64_t > yq;

  ::color::make::orange( yq ); //!< Fill with some useful information


  std::cout<< "Orange in color::cmy<std::uint64_t> = { ";
  std::cout<< std::setw(12) << std::right << yq[0] << ","
           << std::setw(12) << std::right << yq[1] << ","
           << std::setw(12) << std::right << yq[2];
  std::cout<< " };";
  std::cout<< std::endl;
 }

void format_uint64_yuv()
 {
  ::color::yuv< std::uint64_t > yv;

  ::color::make::orange( yv ); //!< Fill with some useful information

  std::cout<< "Orange in color::cmy<std::uint64_t> = { ";
  std::cout<< std::setw(12) << std::right << yv[0] << ","
           << std::setw(12) << std::right << yv[1] << ","
           << std::setw(12) << std::right << yv[2];
  std::cout<< " };";
  std::cout<< std::endl;
 }

