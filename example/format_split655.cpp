#include <iostream>
#include <iomanip>

#include "color/color.hpp"

void format_split655_rgb();
void format_split655_cmy();
void format_split655_cmyk();
void format_split655_gray();
void format_split655_hsl();
void format_split655_hsv();
void format_split655_yiq();
void format_split655_yuv();


int main( int argc, char *argv[] )
 {
  std::cout<< "---- ---- ---- ---- ---- ---- ---- ---- ---- ---- ---- ---- ---- ---- ---- ----" << std::endl;
  std::cout<< "In this example all models use ::color::type::split655_t for component" << std::endl;
  format_split655_rgb();
  format_split655_cmy();
  format_split655_cmyk();
  format_split655_gray();
  format_split655_hsl();
  format_split655_hsv();
  format_split655_yiq();
  format_split655_yuv();
  std::cout<< "---- ---- ---- ---- ---- ---- ---- ---- ---- ---- ---- ---- ---- ---- ---- ----" << std::endl;

  return EXIT_SUCCESS;
 }
 
void format_split655_rgb()
 {
  ::color::rgb< ::color::type::split655_t > r;
  ::color::constant::orange_t{ r ); //!< Fill with some useful information

  std::cout<< "Orange in color::rgb<::color::type::split655_t> = { ";
  std::cout<< std::setw(12) << std::right << (unsigned)r[0] << ","
           << std::setw(12) << std::right << (unsigned)r[1] << ","
           << std::setw(12) << std::right << (unsigned)r[2];
  std::cout<< " };";
  std::cout<< std::endl;
 }

void format_split655_cmy()
 {
  ::color::cmy< ::color::type::split655_t > c;
  ::color::constant::orange_t{ c ); //!< Fill with some useful information

  std::cout<< "Orange in color::cmy<::color::type::split655_t> = { ";
  std::cout<< std::setw(12) << std::right << (unsigned)c[0] << ","
           << std::setw(12) << std::right << (unsigned)c[1] << ","
           << std::setw(12) << std::right << (unsigned)c[2];
  std::cout<< " };";
  std::cout<< std::endl;
 }

void format_split655_cmyk()
 {
  ::color::cmyk< ::color::type::split655_t > ck;

  ::color::constant::orange_t{ ck ); //!< Fill with some useful information

  std::cout<< "Orange in color::cmy<::color::type::split655_t> = { ";
  std::cout<< std::setw(12) << std::right << (unsigned)ck[0] << ","
           << std::setw(12) << std::right << (unsigned)ck[1] << ","
           << std::setw(12) << std::right << (unsigned)ck[2] << ","
           << std::setw(12) << std::right << (unsigned)ck[3];
  std::cout<< " };";
  std::cout<< std::endl;
 }

void format_split655_gray()
 {
  ::color::gray< ::color::type::split655_t > g;

  ::color::constant::orange_t{ g ); //!< Fill with some useful information

  std::cout<< "Orange in color::cmy<::color::type::split655_t> = { ";
  std::cout<< std::setw(12) << std::right << (unsigned)g[0];
  std::cout<< " };";
  std::cout<< std::endl;
 }

void format_split655_hsl()
 {
  ::color::hsl< ::color::type::split655_t > hl;

  ::color::constant::orange_t{ hl ); //!< Fill with some useful information

  std::cout<< "Orange in color::cmy<::color::type::split655_t> = { ";
  std::cout<< std::setw(12) << std::right << (unsigned)hl[0] << ","
           << std::setw(12) << std::right << (unsigned)hl[1] << ","
           << std::setw(12) << std::right << (unsigned)hl[2];
  std::cout<< " };";
  std::cout<< std::endl;
 }

void format_split655_hsv()
 {
  ::color::hsv< ::color::type::split655_t > hv;
  ::color::constant::orange_t{ hv ); //!< Fill with some useful information

  std::cout<< "Orange in color::cmy<::color::type::split655_t> = { ";
  std::cout<< std::setw(12) << std::right << (unsigned)hv[0] << ","
           << std::setw(12) << std::right << (unsigned)hv[1] << ","
           << std::setw(12) << std::right << (unsigned)hv[2];
  std::cout<< " };";
  std::cout<< std::endl;
 }

void format_split655_yiq()
 {
  ::color::yiq< ::color::type::split655_t > yq;
  ::color::constant::orange_t{ yq ); //!< Fill with some useful information


  std::cout<< "Orange in color::cmy<::color::type::split655_t> = { ";
  std::cout<< std::setw(12) << std::right << (unsigned)yq[0] << ","
           << std::setw(12) << std::right << (unsigned)yq[1] << ","
           << std::setw(12) << std::right << (unsigned)yq[2];
  std::cout<< " };";
  std::cout<< std::endl;
 }

void format_split655_yuv()
 {
  ::color::yuv< ::color::type::split655_t > yv;

  ::color::constant::orange_t{ yv ); //!< Fill with some useful information

  std::cout<< "Orange in color::cmy<::color::type::split655_t> = { ";
  std::cout<< std::setw(12) << std::right << (unsigned)yv[0] << ","
           << std::setw(12) << std::right << (unsigned)yv[1] << ","
           << std::setw(12) << std::right << (unsigned)yv[2];
  std::cout<< " };";
  std::cout<< std::endl;
 }

