#include <iostream>
#include <iomanip>

#include "color/color.hpp"

void format_split556_rgb();
void format_split556_cmy();
void format_split556_cmyk();
void format_split556_gray();
void format_split556_hsl();
void format_split556_hsv();
void format_split556_yiq();
void format_split556_yuv();


int main( int argc, char *argv[] )
 {
  std::cout<< "---- ---- ---- ---- ---- ---- ---- ---- ---- ---- ---- ---- ---- ---- ---- ----" << std::endl;
  std::cout<< "In this example all models use ::color::type::split556_t for component" << std::endl;
  format_split556_rgb();
  format_split556_cmy();
  format_split556_cmyk();
  format_split556_gray();
  format_split556_hsl();
  format_split556_hsv();
  format_split556_yiq();
  format_split556_yuv();
  std::cout<< "---- ---- ---- ---- ---- ---- ---- ---- ---- ---- ---- ---- ---- ---- ---- ----" << std::endl;

  return EXIT_SUCCESS;
 }
 
void format_split556_rgb()
 {
  ::color::rgb< ::color::type::split556_t > r;
  ::color::constant::orange_t{ r ); //!< Fill with some useful information

  std::cout<< "Orange in color::rgb<::color::type::split556_t> = { ";
  std::cout<< std::setw(12) << std::right << (unsigned)r[0] << ","
           << std::setw(12) << std::right << (unsigned)r[1] << ","
           << std::setw(12) << std::right << (unsigned)r[2];
  std::cout<< " };";
  std::cout<< std::endl;
 }

void format_split556_cmy()
 {
  ::color::cmy< ::color::type::split556_t > c;
  ::color::constant::orange_t{ c ); //!< Fill with some useful information

  std::cout<< "Orange in color::cmy<::color::type::split556_t> = { ";
  std::cout<< std::setw(12) << std::right << (unsigned)c[0] << ","
           << std::setw(12) << std::right << (unsigned)c[1] << ","
           << std::setw(12) << std::right << (unsigned)c[2];
  std::cout<< " };";
  std::cout<< std::endl;
 }

void format_split556_cmyk()
 {
  ::color::cmyk< ::color::type::split556_t > ck;

  ::color::constant::orange_t{ ck ); //!< Fill with some useful information

  std::cout<< "Orange in color::cmy<::color::type::split556_t> = { ";
  std::cout<< std::setw(12) << std::right << (unsigned)ck[0] << ","
           << std::setw(12) << std::right << (unsigned)ck[1] << ","
           << std::setw(12) << std::right << (unsigned)ck[2] << ","
           << std::setw(12) << std::right << (unsigned)ck[3];
  std::cout<< " };";
  std::cout<< std::endl;
 }

void format_split556_gray()
 {
  ::color::gray< ::color::type::split556_t > g;

  ::color::constant::orange_t{ g ); //!< Fill with some useful information

  std::cout<< "Orange in color::cmy<::color::type::split556_t> = { ";
  std::cout<< std::setw(12) << std::right << (unsigned)g[0];
  std::cout<< " };";
  std::cout<< std::endl;
 }

void format_split556_hsl()
 {
  ::color::hsl< ::color::type::split556_t > hl;

  ::color::constant::orange_t{ hl ); //!< Fill with some useful information

  std::cout<< "Orange in color::cmy<::color::type::split556_t> = { ";
  std::cout<< std::setw(12) << std::right << (unsigned)hl[0] << ","
           << std::setw(12) << std::right << (unsigned)hl[1] << ","
           << std::setw(12) << std::right << (unsigned)hl[2];
  std::cout<< " };";
  std::cout<< std::endl;
 }

void format_split556_hsv()
 {
  ::color::hsv< ::color::type::split556_t > hv;
  ::color::constant::orange_t{ hv ); //!< Fill with some useful information

  std::cout<< "Orange in color::cmy<::color::type::split556_t> = { ";
  std::cout<< std::setw(12) << std::right << (unsigned)hv[0] << ","
           << std::setw(12) << std::right << (unsigned)hv[1] << ","
           << std::setw(12) << std::right << (unsigned)hv[2];
  std::cout<< " };";
  std::cout<< std::endl;
 }

void format_split556_yiq()
 {
  ::color::yiq< ::color::type::split556_t > yq;
  ::color::constant::orange_t{ yq ); //!< Fill with some useful information


  std::cout<< "Orange in color::cmy<::color::type::split556_t> = { ";
  std::cout<< std::setw(12) << std::right << (unsigned)yq[0] << ","
           << std::setw(12) << std::right << (unsigned)yq[1] << ","
           << std::setw(12) << std::right << (unsigned)yq[2];
  std::cout<< " };";
  std::cout<< std::endl;
 }

void format_split556_yuv()
 {
  ::color::yuv< ::color::type::split556_t > yv;

  ::color::constant::orange_t{ yv ); //!< Fill with some useful information

  std::cout<< "Orange in color::cmy<::color::type::split556_t> = { ";
  std::cout<< std::setw(12) << std::right << (unsigned)yv[0] << ","
           << std::setw(12) << std::right << (unsigned)yv[1] << ","
           << std::setw(12) << std::right << (unsigned)yv[2];
  std::cout<< " };";
  std::cout<< std::endl;
 }

