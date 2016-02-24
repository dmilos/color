#include <iostream>
#include <iomanip>

#include "color/color.hpp"

void place_rgb();
void place_bgr();
void place_cmy();
void place_cmyk();
void place_gray();
void place_hsl();
void place_hsv();
void place_yiq();
void place_yuv();


int main( int argc, char *argv[] )
 {
  std::cout<< "---- ---- ---- ---- ---- ---- ---- ---- ---- ---- ---- ---- ---- ---- ---- ----" << std::endl;
  place_rgb();
  place_bgr();
  place_cmy();
  place_cmyk();
  place_gray();
  place_hsl();
  place_hsv();
  place_yiq();
  place_yuv();
  std::cout<< "---- ---- ---- ---- ---- ---- ---- ---- ---- ---- ---- ---- ---- ---- ---- ----" << std::endl;

  return EXIT_SUCCESS;
 }

void place_rgb()
 {
  typedef ::color::rgb<double>::category_type  category_type;

  std::cout<< "Memory ( and index ) positions of component in rgb<double>" << std::endl;

  std::cout<< "    red        " << ::color::place::red        <category_type>() << std::endl
           << "    green      " << ::color::place::green      <category_type>() << std::endl
           << "    blue       " << ::color::place::blue       <category_type>() << std::endl
           << "    cyan       " << ::color::place::cyan       <category_type>() << std::endl
           << "    magenta    " << ::color::place::magenta    <category_type>() << std::endl
           << "    yellow     " << ::color::place::yellow     <category_type>() << std::endl
           << "    hue        " << ::color::place::hue        <category_type>() << std::endl
           << "    saturation " << ::color::place::saturation <category_type>() << std::endl
           << "    value      " << ::color::place::value      <category_type>() << std::endl
           << "    luminance  " << ::color::place::luminance  <category_type>() << std::endl
           << "    quadrature " << ::color::place::quadrature <category_type>() << std::endl
           << "    inphase    " << ::color::place::inphase    <category_type>() << std::endl
           << "    gray       " << ::color::place::gray       <category_type>() << std::endl;
 }

void place_bgr()
 {
  typedef ::color::bgr<double>::category_type  category_type;

  std::cout<< "Memory ( and index ) positions of component in bgr<double>" << std::endl;

  std::cout<< "    red        " << ::color::place::red        <category_type>() << std::endl
           << "    green      " << ::color::place::green      <category_type>() << std::endl
           << "    blue       " << ::color::place::blue       <category_type>() << std::endl
           << "    cyan       " << ::color::place::cyan       <category_type>() << std::endl
           << "    magenta    " << ::color::place::magenta    <category_type>() << std::endl
           << "    yellow     " << ::color::place::yellow     <category_type>() << std::endl
           << "    hue        " << ::color::place::hue        <category_type>() << std::endl
           << "    saturation " << ::color::place::saturation <category_type>() << std::endl
           << "    value      " << ::color::place::value      <category_type>() << std::endl
           << "    luminance  " << ::color::place::luminance  <category_type>() << std::endl
           << "    quadrature " << ::color::place::quadrature <category_type>() << std::endl
           << "    inphase    " << ::color::place::inphase    <category_type>() << std::endl
           << "    gray       " << ::color::place::gray       <category_type>() << std::endl;
 }

void place_cmy()
 {
  typedef ::color::cmy<double>::category_type  category_type;

  std::cout<< "Memory ( and index ) positions of component in cmy<double>" << std::endl;

  std::cout<< "    red        " << ::color::place::red        <category_type>() << std::endl
           << "    green      " << ::color::place::green      <category_type>() << std::endl
           << "    blue       " << ::color::place::blue       <category_type>() << std::endl
           << "    cyan       " << ::color::place::cyan       <category_type>() << std::endl
           << "    magenta    " << ::color::place::magenta    <category_type>() << std::endl
           << "    yellow     " << ::color::place::yellow     <category_type>() << std::endl
           << "    hue        " << ::color::place::hue        <category_type>() << std::endl
           << "    saturation " << ::color::place::saturation <category_type>() << std::endl
           << "    value      " << ::color::place::value      <category_type>() << std::endl
           << "    luminance  " << ::color::place::luminance  <category_type>() << std::endl
           << "    quadrature " << ::color::place::quadrature <category_type>() << std::endl
           << "    inphase    " << ::color::place::inphase    <category_type>() << std::endl
           << "    gray       " << ::color::place::gray       <category_type>() << std::endl;
 }

void place_cmyk()
 {
  typedef ::color::cmy<double>::category_type  category_type;

  std::cout<< "Memory ( and index ) positions of component in cmy<double>" << std::endl;

  std::cout<< "    red        " << ::color::place::red        <category_type>() << std::endl
           << "    green      " << ::color::place::green      <category_type>() << std::endl
           << "    blue       " << ::color::place::blue       <category_type>() << std::endl
           << "    cyan       " << ::color::place::cyan       <category_type>() << std::endl
           << "    magenta    " << ::color::place::magenta    <category_type>() << std::endl
           << "    yellow     " << ::color::place::yellow     <category_type>() << std::endl
           << "    hue        " << ::color::place::hue        <category_type>() << std::endl
           << "    saturation " << ::color::place::saturation <category_type>() << std::endl
           << "    value      " << ::color::place::value      <category_type>() << std::endl
           << "    luminance  " << ::color::place::luminance  <category_type>() << std::endl
           << "    quadrature " << ::color::place::quadrature <category_type>() << std::endl
           << "    inphase    " << ::color::place::inphase    <category_type>() << std::endl
           << "    gray       " << ::color::place::gray       <category_type>() << std::endl;
 }

void place_gray()
 {
  typedef ::color::gray<double>::category_type  category_type;
  std::cout<< "Memory ( and index ) positions of component in gray<double>" << std::endl;

  std::cout<< "    red        " << ::color::place::red        <category_type>() << std::endl
           << "    green      " << ::color::place::green      <category_type>() << std::endl
           << "    blue       " << ::color::place::blue       <category_type>() << std::endl
           << "    cyan       " << ::color::place::cyan       <category_type>() << std::endl
           << "    magenta    " << ::color::place::magenta    <category_type>() << std::endl
           << "    yellow     " << ::color::place::yellow     <category_type>() << std::endl
           << "    hue        " << ::color::place::hue        <category_type>() << std::endl
           << "    saturation " << ::color::place::saturation <category_type>() << std::endl
           << "    value      " << ::color::place::value      <category_type>() << std::endl
           << "    luminance  " << ::color::place::luminance  <category_type>() << std::endl
           << "    quadrature " << ::color::place::quadrature <category_type>() << std::endl
           << "    inphase    " << ::color::place::inphase    <category_type>() << std::endl
           << "    gray       " << ::color::place::gray       <category_type>() << std::endl;
 }

void place_hsl()
 {
  typedef ::color::hsl<double>::category_type  category_type;
  std::cout<< "Memory ( and index ) positions of component in hsl<double>" << std::endl;

  std::cout<< "    red        " << ::color::place::red        <category_type>() << std::endl
           << "    green      " << ::color::place::green      <category_type>() << std::endl
           << "    blue       " << ::color::place::blue       <category_type>() << std::endl
           << "    cyan       " << ::color::place::cyan       <category_type>() << std::endl
           << "    magenta    " << ::color::place::magenta    <category_type>() << std::endl
           << "    yellow     " << ::color::place::yellow     <category_type>() << std::endl
           << "    hue        " << ::color::place::hue        <category_type>() << std::endl
           << "    saturation " << ::color::place::saturation <category_type>() << std::endl
           << "    value      " << ::color::place::value      <category_type>() << std::endl
           << "    luminance  " << ::color::place::luminance  <category_type>() << std::endl
           << "    quadrature " << ::color::place::quadrature <category_type>() << std::endl
           << "    inphase    " << ::color::place::inphase    <category_type>() << std::endl
           << "    gray       " << ::color::place::gray       <category_type>() << std::endl;
 }

void place_hsv()
 {
  typedef ::color::hsv<double>::category_type  category_type;
  std::cout<< "Memory ( and index ) positions of component in hsv<double>" << std::endl;

  std::cout<< "    red        " << ::color::place::red        <category_type>() << std::endl
           << "    green      " << ::color::place::green      <category_type>() << std::endl
           << "    blue       " << ::color::place::blue       <category_type>() << std::endl
           << "    cyan       " << ::color::place::cyan       <category_type>() << std::endl
           << "    magenta    " << ::color::place::magenta    <category_type>() << std::endl
           << "    yellow     " << ::color::place::yellow     <category_type>() << std::endl
           << "    hue        " << ::color::place::hue        <category_type>() << std::endl
           << "    saturation " << ::color::place::saturation <category_type>() << std::endl
           << "    value      " << ::color::place::value      <category_type>() << std::endl
           << "    luminance  " << ::color::place::luminance  <category_type>() << std::endl
           << "    quadrature " << ::color::place::quadrature <category_type>() << std::endl
           << "    inphase    " << ::color::place::inphase    <category_type>() << std::endl
           << "    gray       " << ::color::place::gray       <category_type>() << std::endl;
 }

void place_yiq()
 {
  typedef ::color::yiq<double>::category_type  category_type;
  std::cout<< "Memory ( and index ) positions of component in yiq<double>" << std::endl;

  std::cout<< "    red        " << ::color::place::red        <category_type>() << std::endl
           << "    green      " << ::color::place::green      <category_type>() << std::endl
           << "    blue       " << ::color::place::blue       <category_type>() << std::endl
           << "    cyan       " << ::color::place::cyan       <category_type>() << std::endl
           << "    magenta    " << ::color::place::magenta    <category_type>() << std::endl
           << "    yellow     " << ::color::place::yellow     <category_type>() << std::endl
           << "    hue        " << ::color::place::hue        <category_type>() << std::endl
           << "    saturation " << ::color::place::saturation <category_type>() << std::endl
           << "    value      " << ::color::place::value      <category_type>() << std::endl
           << "    luminance  " << ::color::place::luminance  <category_type>() << std::endl
           << "    quadrature " << ::color::place::quadrature <category_type>() << std::endl
           << "    inphase    " << ::color::place::inphase    <category_type>() << std::endl
           << "    gray       " << ::color::place::gray       <category_type>() << std::endl;
 }

void place_yuv()
 {
  typedef ::color::yuv<double>::category_type  category_type;
  std::cout<< "Memory ( and index ) positions of component in yuv<double>" << std::endl;

  std::cout<< "    red        " << ::color::place::red        <category_type>() << std::endl
           << "    green      " << ::color::place::green      <category_type>() << std::endl
           << "    blue       " << ::color::place::blue       <category_type>() << std::endl
           << "    cyan       " << ::color::place::cyan       <category_type>() << std::endl
           << "    magenta    " << ::color::place::magenta    <category_type>() << std::endl
           << "    yellow     " << ::color::place::yellow     <category_type>() << std::endl
           << "    hue        " << ::color::place::hue        <category_type>() << std::endl
           << "    saturation " << ::color::place::saturation <category_type>() << std::endl
           << "    value      " << ::color::place::value      <category_type>() << std::endl
           << "    luminance  " << ::color::place::luminance  <category_type>() << std::endl
           << "    quadrature " << ::color::place::quadrature <category_type>() << std::endl
           << "    inphase    " << ::color::place::inphase    <category_type>() << std::endl
           << "    gray       " << ::color::place::gray       <category_type>() << std::endl;
 }

