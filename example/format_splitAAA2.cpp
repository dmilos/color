#include <iostream>
#include <iomanip>

#include "color/color.hpp"

void format_splitAAA2_rgb();
void format_splitAAA2_cmy();
void format_splitAAA2_cmyk();
void format_splitAAA2_gray();
void format_splitAAA2_hsl();
void format_splitAAA2_hsv();
void format_splitAAA2_yiq();
void format_splitAAA2_yuv();


int main( int argc, char *argv[] )
 {
  std::cout<< "---- ---- ---- ---- ---- ---- ---- ---- ---- ---- ---- ---- ---- ---- ---- ----" << std::endl;
  std::cout<< "In this example all models use ::color::type::splitAAA2_t for component" << std::endl;
  format_splitAAA2_rgb();
  format_splitAAA2_cmy();
  format_splitAAA2_cmyk();
  format_splitAAA2_gray();
  format_splitAAA2_hsl();
  format_splitAAA2_hsv();
  format_splitAAA2_yiq();
  format_splitAAA2_yuv();
  std::cout<< "---- ---- ---- ---- ---- ---- ---- ---- ---- ---- ---- ---- ---- ---- ---- ----" << std::endl;

  return EXIT_SUCCESS;
 }
 
void format_splitAAA2_rgb()
 {
  ::color::rgb< ::color::type::splitAAA2_t > r;
  ::color::make::orange( r ); //!< Fill with some useful information

  std::cout<< "Orange in color::rgb<::color::type::splitAAA2_t> = { ";
  std::cout<< std::setw(12) << std::right << (unsigned)r[0] << ","
           << std::setw(12) << std::right << (unsigned)r[1] << ","
           << std::setw(12) << std::right << (unsigned)r[2];
  std::cout<< " };";
  std::cout<< std::endl;
 }

void format_splitAAA2_cmy()
 {
  ::color::cmy< ::color::type::splitAAA2_t > c;
  ::color::make::orange( c ); //!< Fill with some useful information

  std::cout<< "Orange in color::cmy<::color::type::splitAAA2_t> = { ";
  std::cout<< std::setw(12) << std::right << (unsigned)c[0] << ","
           << std::setw(12) << std::right << (unsigned)c[1] << ","
           << std::setw(12) << std::right << (unsigned)c[2];
  std::cout<< " };";
  std::cout<< std::endl;
 }

void format_splitAAA2_cmyk()
 {
  ::color::cmyk< ::color::type::splitAAA2_t > ck;

  ::color::make::orange( ck ); //!< Fill with some useful information

  std::cout<< "Orange in color::cmyk<::color::type::splitAAA2_t> = { ";
  std::cout<< std::setw(12) << std::right << (unsigned)ck[0] << ","
           << std::setw(12) << std::right << (unsigned)ck[1] << ","
           << std::setw(12) << std::right << (unsigned)ck[2] << ","
           << std::setw(12) << std::right << (unsigned)ck[3];
  std::cout<< " };";
  std::cout<< std::endl;
 }

void format_splitAAA2_gray()
 {
  ::color::gray< ::color::type::splitAAA2_t > g;

  ::color::make::orange( g ); //!< Fill with some useful information

  std::cout<< "Orange in color::gray<::color::type::splitAAA2_t> = { ";
  std::cout<< std::setw(12) << std::right << (unsigned)g[0];
  std::cout<< " };";
  std::cout<< std::endl;
 }

void format_splitAAA2_hsl()
 {
  ::color::hsl< ::color::type::splitAAA2_t > hl;

  ::color::make::orange( hl ); //!< Fill with some useful information

  std::cout<< "Orange in color::hsl<::color::type::splitAAA2_t> = { ";
  std::cout<< std::setw(12) << std::right << (unsigned)hl[0] << ","
           << std::setw(12) << std::right << (unsigned)hl[1] << ","
           << std::setw(12) << std::right << (unsigned)hl[2];
  std::cout<< " };";
  std::cout<< std::endl;
 }

void format_splitAAA2_hsv()
 {
  ::color::hsv< ::color::type::splitAAA2_t > hv;
  ::color::make::orange( hv ); //!< Fill with some useful information

  std::cout<< "Orange in color::hsv<::color::type::splitAAA2_t> = { ";
  std::cout<< std::setw(12) << std::right << (unsigned)hv[0] << ","
           << std::setw(12) << std::right << (unsigned)hv[1] << ","
           << std::setw(12) << std::right << (unsigned)hv[2];
  std::cout<< " };";
  std::cout<< std::endl;
 }

void format_splitAAA2_yiq()
 {
  ::color::yiq< ::color::type::splitAAA2_t > yq;
  ::color::make::orange( yq ); //!< Fill with some useful information


  std::cout<< "Orange in color::yiq<::color::type::splitAAA2_t> = { ";
  std::cout<< std::setw(12) << std::right << (unsigned)yq[0] << ","
           << std::setw(12) << std::right << (unsigned)yq[1] << ","
           << std::setw(12) << std::right << (unsigned)yq[2];
  std::cout<< " };";
  std::cout<< std::endl;
 }

void format_splitAAA2_yuv()
 {
  ::color::yuv< ::color::type::splitAAA2_t > yv;

  ::color::make::orange( yv ); //!< Fill with some useful information

  std::cout<< "Orange in color::yuv<::color::type::splitAAA2_t> = { ";
  std::cout<< std::setw(12) << std::right << (unsigned)yv[0] << ","
           << std::setw(12) << std::right << (unsigned)yv[1] << ","
           << std::setw(12) << std::right << (unsigned)yv[2];
  std::cout<< " };";
  std::cout<< std::endl;
 }

