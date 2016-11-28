#include <iostream>
#include <iomanip>

#include "color/color.hpp"

void format_split233_rgb();
void format_split233_cmy();
void format_split233_cmyk();
void format_split233_gray();
void format_split233_hsl();
void format_split233_hsv();
void format_split233_yiq();
void format_split233_yuv();


int main( int argc, char *argv[] )
 {
  std::cout<< "---- ---- ---- ---- ---- ---- ---- ---- ---- ---- ---- ---- ---- ---- ---- ----" << std::endl;
  std::cout<< "In this example all models use ::color::type::split233_t for component" << std::endl;
  format_split233_rgb();
  format_split233_cmy();
  format_split233_cmyk();
  format_split233_gray();
  format_split233_hsl();
  format_split233_hsv();
  format_split233_yiq();
  format_split233_yuv();
  std::cout<< "---- ---- ---- ---- ---- ---- ---- ---- ---- ---- ---- ---- ---- ---- ---- ----" << std::endl;

  return EXIT_SUCCESS;
 }
 
void format_split233_rgb()
 {
  ::color::rgb< ::color::type::split233_t > r;
  ::color::constant::orange_t{ r ); //!< Fill with some useful information

  std::cout<< "Orange in color::rgb<::color::type::split233_t> = { ";
  std::cout<< std::setw(12) << std::right << (unsigned)r[0] << ","
           << std::setw(12) << std::right << (unsigned)r[1] << ","
           << std::setw(12) << std::right << (unsigned)r[2];
  std::cout<< " };";
  std::cout<< std::endl;
 }

void format_split233_cmy()
 {
  ::color::cmy< ::color::type::split233_t > c;
  ::color::constant::orange_t{ c ); //!< Fill with some useful information

  std::cout<< "Orange in color::cmy<::color::type::split233_t> = { ";
  std::cout<< std::setw(12) << std::right << (unsigned)c[0] << ","
           << std::setw(12) << std::right << (unsigned)c[1] << ","
           << std::setw(12) << std::right << (unsigned)c[2];
  std::cout<< " };";
  std::cout<< std::endl;
 }

void format_split233_cmyk()
 {
  ::color::cmyk< ::color::type::split233_t > ck;

  ::color::constant::orange_t{ ck ); //!< Fill with some useful information

  std::cout<< "Orange in color::cmy<::color::type::split233_t> = { ";
  std::cout<< std::setw(12) << std::right << (unsigned)ck[0] << ","
           << std::setw(12) << std::right << (unsigned)ck[1] << ","
           << std::setw(12) << std::right << (unsigned)ck[2] << ","
           << std::setw(12) << std::right << (unsigned)ck[3];
  std::cout<< " };";
  std::cout<< std::endl;
 }

void format_split233_gray()
 {
  ::color::gray< ::color::type::split233_t > g;

  ::color::constant::orange_t{ g ); //!< Fill with some useful information

  std::cout<< "Orange in color::cmy<::color::type::split233_t> = { ";
  std::cout<< std::setw(12) << std::right << (unsigned)g[0];
  std::cout<< " };";
  std::cout<< std::endl;
 }

void format_split233_hsl()
 {
  ::color::hsl< ::color::type::split233_t > hl;

  ::color::constant::orange_t{ hl ); //!< Fill with some useful information

  std::cout<< "Orange in color::cmy<::color::type::split233_t> = { ";
  std::cout<< std::setw(12) << std::right << (unsigned)hl[0] << ","
           << std::setw(12) << std::right << (unsigned)hl[1] << ","
           << std::setw(12) << std::right << (unsigned)hl[2];
  std::cout<< " };";
  std::cout<< std::endl;
 }

void format_split233_hsv()
 {
  ::color::hsv< ::color::type::split233_t > hv;
  ::color::constant::orange_t{ hv ); //!< Fill with some useful information

  std::cout<< "Orange in color::cmy<::color::type::split233_t> = { ";
  std::cout<< std::setw(12) << std::right << (unsigned)hv[0] << ","
           << std::setw(12) << std::right << (unsigned)hv[1] << ","
           << std::setw(12) << std::right << (unsigned)hv[2];
  std::cout<< " };";
  std::cout<< std::endl;
 }

void format_split233_yiq()
 {
  ::color::yiq< ::color::type::split233_t > yq;
  ::color::constant::orange_t{ yq ); //!< Fill with some useful information


  std::cout<< "Orange in color::cmy<::color::type::split233_t> = { ";
  std::cout<< std::setw(12) << std::right << (unsigned)yq[0] << ","
           << std::setw(12) << std::right << (unsigned)yq[1] << ","
           << std::setw(12) << std::right << (unsigned)yq[2];
  std::cout<< " };";
  std::cout<< std::endl;
 }

void format_split233_yuv()
 {
  ::color::yuv< ::color::type::split233_t > yv;

  ::color::constant::orange_t{ yv ); //!< Fill with some useful information

  std::cout<< "Orange in color::cmy<::color::type::split233_t> = { ";
  std::cout<< std::setw(12) << std::right << (unsigned)yv[0] << ","
           << std::setw(12) << std::right << (unsigned)yv[1] << ","
           << std::setw(12) << std::right << (unsigned)yv[2];
  std::cout<< " };";
  std::cout<< std::endl;
 }

