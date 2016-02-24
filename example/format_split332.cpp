#include <iostream>
#include <iomanip>

#include "color/color.hpp"

void format_split332_rgb();
void format_split332_cmy();
void format_split332_cmyk();
void format_split332_gray();
void format_split332_hsl();
void format_split332_hsv();
void format_split332_yiq();
void format_split332_yuv();


int main( int argc, char *argv[] )
 {
  std::cout<< "---- ---- ---- ---- ---- ---- ---- ---- ---- ---- ---- ---- ---- ---- ---- ----" << std::endl;
  std::cout<< "In this example all models use ::color::type::split332_t for component" << std::endl;
  format_split332_rgb();
  format_split332_cmy();
  format_split332_cmyk();
  format_split332_gray();
  format_split332_hsl();
  format_split332_hsv();
  format_split332_yiq();
  format_split332_yuv();
  std::cout<< "---- ---- ---- ---- ---- ---- ---- ---- ---- ---- ---- ---- ---- ---- ---- ----" << std::endl;

  return EXIT_SUCCESS;
 }
 
void format_split332_rgb()
 {
  ::color::rgb< ::color::type::split332_t > r;
  ::color::make::orange( r ); //!< Fill with some useful information

  std::cout<< "Orange in color::rgb<::color::type::split332_t> = { ";
  std::cout<< std::setw(12) << std::right << r[0] << ","
           << std::setw(12) << std::right << r[1] << ","
           << std::setw(12) << std::right << r[2];
  std::cout<< " };";
  std::cout<< std::endl;
 }

void format_split332_cmy()
 {
  ::color::cmy< ::color::type::split332_t > c;
  ::color::make::orange( c ); //!< Fill with some useful information

  std::cout<< "Orange in color::cmy<::color::type::split332_t> = { ";
  std::cout<< std::setw(12) << std::right << c[0] << ","
           << std::setw(12) << std::right << c[1] << ","
           << std::setw(12) << std::right << c[2];
  std::cout<< " };";
  std::cout<< std::endl;
 }

void format_split332_cmyk()
 {
  ::color::cmyk< ::color::type::split332_t > ck;

  ::color::make::orange( ck ); //!< Fill with some useful information

  std::cout<< "Orange in color::cmy<::color::type::split332_t> = { ";
  std::cout<< std::setw(12) << std::right << ck[0] << ","
           << std::setw(12) << std::right << ck[1] << ","
           << std::setw(12) << std::right << ck[2] << ","
           << std::setw(12) << std::right << ck[3];
  std::cout<< " };";
  std::cout<< std::endl;
 }

void format_split332_gray()
 {
  ::color::gray< ::color::type::split332_t > g;

  ::color::make::orange( g ); //!< Fill with some useful information

  std::cout<< "Orange in color::cmy<::color::type::split332_t> = { ";
  std::cout<< std::setw(12) << std::right << g[0];
  std::cout<< " };";
  std::cout<< std::endl;
 }

void format_split332_hsl()
 {
  ::color::hsl< ::color::type::split332_t > hl;

  ::color::make::orange( hl ); //!< Fill with some useful information

  std::cout<< "Orange in color::cmy<::color::type::split332_t> = { ";
  std::cout<< std::setw(12) << std::right << hl[0] << ","
           << std::setw(12) << std::right << hl[1] << ","
           << std::setw(12) << std::right << hl[2];
  std::cout<< " };";
  std::cout<< std::endl;
 }

void format_split332_hsv()
 {
  ::color::hsv< ::color::type::split332_t > hv;
  ::color::make::orange( hv ); //!< Fill with some useful information

  std::cout<< "Orange in color::cmy<::color::type::split332_t> = { ";
  std::cout<< std::setw(12) << std::right << hv[0] << ","
           << std::setw(12) << std::right << hv[1] << ","
           << std::setw(12) << std::right << hv[2];
  std::cout<< " };";
  std::cout<< std::endl;
 }

void format_split332_yiq()
 {
  ::color::yiq< ::color::type::split332_t > yq;
  ::color::make::orange( yq ); //!< Fill with some useful information


  std::cout<< "Orange in color::cmy<::color::type::split332_t> = { ";
  std::cout<< std::setw(12) << std::right << yq[0] << ","
           << std::setw(12) << std::right << yq[1] << ","
           << std::setw(12) << std::right << yq[2];
  std::cout<< " };";
  std::cout<< std::endl;
 }

void format_split332_yuv()
 {
  ::color::yuv< ::color::type::split332_t > yv;

  ::color::make::orange( yv ); //!< Fill with some useful information

  std::cout<< "Orange in color::cmy<::color::type::split332_t> = { ";
  std::cout<< std::setw(12) << std::right << yv[0] << ","
           << std::setw(12) << std::right << yv[1] << ","
           << std::setw(12) << std::right << yv[2];
  std::cout<< " };";
  std::cout<< std::endl;
 }

