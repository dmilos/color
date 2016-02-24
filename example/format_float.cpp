#include <iostream>
#include <iomanip>

#include "color/color.hpp"

void format_float_rgb();
void format_float_cmy();
void format_float_cmyk();
void format_float_gray();
void format_float_hsl();
void format_float_hsv();
void format_float_yiq();
void format_float_yuv();


int main( int argc, char *argv[] )
 {
  std::cout<< "---- ---- ---- ---- ---- ---- ---- ---- ---- ---- ---- ---- ---- ---- ---- ----" << std::endl;
  std::cout<< "In this example all models use float for component" << std::endl;
  format_float_rgb();
  format_float_cmy();
  format_float_cmyk();
  format_float_gray();
  format_float_hsl();
  format_float_hsv();
  format_float_yiq();
  format_float_yuv();
  std::cout<< "---- ---- ---- ---- ---- ---- ---- ---- ---- ---- ---- ---- ---- ---- ---- ----" << std::endl;

  return EXIT_SUCCESS;
 }

void format_float_rgb()
 {
  ::color::rgb< float > r; //!< Make an instance

  color::make::orange( r ); //!< Fill with some useful information

  std::cout<< "Orange in color::rgb<float> = { ";
  std::cout<< std::setw(12) << std::right << r[0] << ","
           << std::setw(12) << std::right << r[1] << ","
           << std::setw(12) << std::right << r[2];
  std::cout<< " };";
  std::cout<< std::endl;
 }

void format_float_cmy()
 {
  ::color::cmy< float > c; //!< Make an instance

  ::color::make::orange( c ); //!< Fill with some useful information

  std::cout<< "Orange in color::cmy<float> = { ";
  std::cout<< std::setw(12) << std::right << c[0] << ","
           << std::setw(12) << std::right << c[1] << ","
           << std::setw(12) << std::right << c[2];
  std::cout<< " };";
  std::cout<< std::endl;
 }

void format_float_cmyk()
 {
  ::color::cmyk< float > ck; //!< Make an instance

  ::color::make::orange( ck ); //!< Fill with some useful information

  std::cout<< "Orange in color::cmy<float> = { ";
  std::cout<< std::setw(12) << std::right << ck[0] << ","
           << std::setw(12) << std::right << ck[1] << ","
           << std::setw(12) << std::right << ck[2] << ","
           << std::setw(12) << std::right << ck[3];
  std::cout<< " };";
  std::cout<< std::endl;
 }

void format_float_gray()
 {
  ::color::gray< float > g; //!< Make an instance

  ::color::make::orange( g ); //!< Fill with some useful information

  std::cout<< "Orange in color::cmy<float> = { ";
  std::cout<< std::setw(12) << std::right << g[0];
  std::cout<< " };";
  std::cout<< std::endl;
 }

void format_float_hsl()
 {
  ::color::hsl< float > hl; //!< Make an instance

  ::color::make::orange( hl ); //!< Fill with some useful information

  std::cout<< "Orange in color::cmy<float> = { ";
  std::cout<< std::setw(12) << std::right << hl[0] << ","
           << std::setw(12) << std::right << hl[1] << ","
           << std::setw(12) << std::right << hl[2];
  std::cout<< " };";
  std::cout<< std::endl;
 }

void format_float_hsv()
 {
  ::color::hsv< float > hv; //!< Make an instance

  ::color::make::orange( hv ); //!< Fill with some useful information

  std::cout<< "Orange in color::cmy<float> = { ";
  std::cout<< std::setw(12) << std::right << hv[0] << ","
           << std::setw(12) << std::right << hv[1] << ","
           << std::setw(12) << std::right << hv[2];
  std::cout<< " };";
  std::cout<< std::endl;
 }

void format_float_yiq()
 {
  ::color::yiq< float > yq; //!< Make an instance

  ::color::make::orange( yq ); //!< Fill with some useful information

  std::cout<< "Orange in color::cmy<float> = { ";
  std::cout<< std::setw(12) << std::right << yq[0] << ","
           << std::setw(12) << std::right << yq[1] << ","
           << std::setw(12) << std::right << yq[2];
  std::cout<< " };";
  std::cout<< std::endl;
 }

void format_float_yuv()
 {
  ::color::yuv< float > yv; //!< Make an instance

  ::color::make::orange( yv ); //!< Fill with some useful information

  std::cout<< "Orange in color::cmy<float> = { ";
  std::cout<< std::setw(12) << std::right << yv[0] << ","
           << std::setw(12) << std::right << yv[1] << ","
           << std::setw(12) << std::right << yv[2];
  std::cout<< " };";
  std::cout<< std::endl;
 }

