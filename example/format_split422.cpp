#include <iostream>
#include <iomanip>

#include "color/color.hpp"

void format_split422_rgb();
void format_split422_cmy();
void format_split422_cmyk();
void format_split422_gray();
void format_split422_hsl();
void format_split422_hsv();
void format_split422_yiq();
void format_split422_yuv();


int main( int argc, char *argv[] )
 {
  std::cout<< "---- ---- ---- ---- ---- ---- ---- ---- ---- ---- ---- ---- ---- ---- ---- ----" << std::endl;
  std::cout<< "In this example all models use ::color::type::split422_t for component" << std::endl;
  format_split422_rgb();
  format_split422_cmy();
  format_split422_cmyk();
  format_split422_gray();
  format_split422_hsl();
  format_split422_hsv();
  format_split422_yiq();
  format_split422_yuv();
  std::cout<< "---- ---- ---- ---- ---- ---- ---- ---- ---- ---- ---- ---- ---- ---- ---- ----" << std::endl;

  return EXIT_SUCCESS;
 }
 
void format_split422_rgb()
 {
  ::color::rgb< ::color::type::split422_t > r;
  ::color::make::orange( r ); //!< Fill with some useful information

  std::cout<< "Orange in color::rgb<::color::type::split422_t> = { ";
  std::cout<< std::setw(12) << std::right << (unsigned)r[0] << ","
           << std::setw(12) << std::right << (unsigned)r[1] << ","
           << std::setw(12) << std::right << (unsigned)r[2];
  std::cout<< " };";
  std::cout<< std::endl;
 }

void format_split422_cmy()
 {
  ::color::cmy< ::color::type::split422_t > c;
  ::color::make::orange( c ); //!< Fill with some useful information

  std::cout<< "Orange in color::cmy<::color::type::split422_t> = { ";
  std::cout<< std::setw(12) << std::right << (unsigned)c[0] << ","
           << std::setw(12) << std::right << (unsigned)c[1] << ","
           << std::setw(12) << std::right << (unsigned)c[2];
  std::cout<< " };";
  std::cout<< std::endl;
 }

void format_split422_cmyk()
 {
  ::color::cmyk< ::color::type::split422_t > ck;

  ::color::make::orange( ck ); //!< Fill with some useful information

  std::cout<< "Orange in color::cmy<::color::type::split422_t> = { ";
  std::cout<< std::setw(12) << std::right << (unsigned)ck[0] << ","
           << std::setw(12) << std::right << (unsigned)ck[1] << ","
           << std::setw(12) << std::right << (unsigned)ck[2] << ","
           << std::setw(12) << std::right << (unsigned)ck[3];
  std::cout<< " };";
  std::cout<< std::endl;
 }

void format_split422_gray()
 {
  ::color::gray< ::color::type::split422_t > g;

  ::color::make::orange( g ); //!< Fill with some useful information

  std::cout<< "Orange in color::cmy<::color::type::split422_t> = { ";
  std::cout<< std::setw(12) << std::right << (unsigned)g[0];
  std::cout<< " };";
  std::cout<< std::endl;
 }

void format_split422_hsl()
 {
  ::color::hsl< ::color::type::split422_t > hl;

  ::color::make::orange( hl ); //!< Fill with some useful information

  std::cout<< "Orange in color::cmy<::color::type::split422_t> = { ";
  std::cout<< std::setw(12) << std::right << (unsigned)hl[0] << ","
           << std::setw(12) << std::right << (unsigned)hl[1] << ","
           << std::setw(12) << std::right << (unsigned)hl[2];
  std::cout<< " };";
  std::cout<< std::endl;
 }

void format_split422_hsv()
 {
  ::color::hsv< ::color::type::split422_t > hv;
  ::color::make::orange( hv ); //!< Fill with some useful information

  std::cout<< "Orange in color::cmy<::color::type::split422_t> = { ";
  std::cout<< std::setw(12) << std::right << (unsigned)hv[0] << ","
           << std::setw(12) << std::right << (unsigned)hv[1] << ","
           << std::setw(12) << std::right << (unsigned)hv[2];
  std::cout<< " };";
  std::cout<< std::endl;
 }

void format_split422_yiq()
 {
  ::color::yiq< ::color::type::split422_t > yq;
  ::color::make::orange( yq ); //!< Fill with some useful information


  std::cout<< "Orange in color::cmy<::color::type::split422_t> = { ";
  std::cout<< std::setw(12) << std::right << (unsigned)yq[0] << ","
           << std::setw(12) << std::right << (unsigned)yq[1] << ","
           << std::setw(12) << std::right << (unsigned)yq[2];
  std::cout<< " };";
  std::cout<< std::endl;
 }

void format_split422_yuv()
 {
  ::color::yuv< ::color::type::split422_t > yv;

  ::color::make::orange( yv ); //!< Fill with some useful information

  std::cout<< "Orange in color::cmy<::color::type::split422_t> = { ";
  std::cout<< std::setw(12) << std::right << (unsigned)yv[0] << ","
           << std::setw(12) << std::right << (unsigned)yv[1] << ","
           << std::setw(12) << std::right << (unsigned)yv[2];
  std::cout<< " };";
  std::cout<< std::endl;
 }

