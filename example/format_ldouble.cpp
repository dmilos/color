#include <iostream>
#include <iomanip>

#include "color/color.hpp"

void format_ldouble_cmy();
void format_ldouble_cmyk();
void format_ldouble_gray();
void format_ldouble_hsl();
void format_ldouble_hsv();
void format_ldouble_yiq();
void format_ldouble_yuv();


int main( int argc, char *argv[] )
 {
  std::cout<< "---- ---- ---- ---- ---- ---- ---- ---- ---- ---- ---- ---- ---- ---- ---- ----" << std::endl;
  std::cout<< "In this example all models use long double for component" << std::endl;
  format_ldouble_cmy();
  format_ldouble_cmyk();
  format_ldouble_gray();
  format_ldouble_hsl();
  format_ldouble_hsv();
  format_ldouble_yiq();
  format_ldouble_yuv();
  std::cout<< "---- ---- ---- ---- ---- ---- ---- ---- ---- ---- ---- ---- ---- ---- ---- ----" << std::endl;

  return EXIT_SUCCESS;
 }
 
void format_ldouble_cmy()
 {
  ::color::cmy< long double > c;

  c = ::color::constant::orange_t{}; //!< Fill with some useful information

  std::cout<< "Orange in color::cmy<long double> = { ";
  std::cout<< std::setw(12) << std::right << c[0] << ","
           << std::setw(12) << std::right << c[1] << ","
           << std::setw(12) << std::right << c[2];
  std::cout<< " };";
  std::cout<< std::endl;
 }

void format_ldouble_cmyk()
 {
  ::color::cmyk< long double > ck;

  ck = ::color::constant::orange_t{}; //!< Fill with some useful information

  std::cout<< "Orange in color::cmy<long double> = { ";
  std::cout<< std::setw(12) << std::right << ck[0] << ","
           << std::setw(12) << std::right << ck[1] << ","
           << std::setw(12) << std::right << ck[2] << ","
           << std::setw(12) << std::right << ck[3];
  std::cout<< " };";
  std::cout<< std::endl;
 }

void format_ldouble_gray()
 {
  ::color::gray< long double > g;

  g = ::color::constant::orange_t{}; //!< Fill with some useful information

  std::cout<< "Orange in color::cmy<long double> = { ";
  std::cout<< std::setw(12) << std::right << g[0];
  std::cout<< " };";
  std::cout<< std::endl;
 }

void format_ldouble_hsl()
 {
  ::color::hsl< long double > hl;

  hl = ::color::constant::orange_t{}; //!< Fill with some useful information

  std::cout<< "Orange in color::cmy<long double> = { ";
  std::cout<< std::setw(12) << std::right << hl[0] << ","
           << std::setw(12) << std::right << hl[1] << ","
           << std::setw(12) << std::right << hl[2];
  std::cout<< " };";
  std::cout<< std::endl;
 }

void format_ldouble_hsv()
 {
  ::color::hsv< long double > hv;

  hv = ::color::constant::orange_t{}; //!< Fill with some useful information

  std::cout<< "Orange in color::cmy<long double> = { ";
  std::cout<< std::setw(12) << std::right << hv[0] << ","
           << std::setw(12) << std::right << hv[1] << ","
           << std::setw(12) << std::right << hv[2];
  std::cout<< " };";
  std::cout<< std::endl;
 }

void format_ldouble_yiq()
 {
  ::color::yiq< long double > yq;

  yq = ::color::constant::orange_t{}; //!< Fill with some useful information

  std::cout<< "Orange in color::cmy<long double> = { ";
  std::cout<< std::setw(12) << std::right << yq[0] << ","
           << std::setw(12) << std::right << yq[1] << ","
           << std::setw(12) << std::right << yq[2];
  std::cout<< " };";
  std::cout<< std::endl;
 }

void format_ldouble_yuv()
 {
  ::color::yuv< long double > yv;

  yu = ::color::constant::orange_t{}; //!< Fill with some useful information

  std::cout<< "Orange in color::cmy<long double> = { ";
  std::cout<< std::setw(12) << std::right << yv[0] << ","
           << std::setw(12) << std::right << yv[1] << ","
           << std::setw(12) << std::right << yv[2];
  std::cout<< " };";
  std::cout<< std::endl;
 }

