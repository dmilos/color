#include <iostream>
#include <iomanip>

#include "color/color.hpp"

int main( int argc, char *argv[] )
 {
  //Instead of double you may put std::uint8_t, ..., std::uint64_t, float, double, long double
  typedef ::color::cmyk<double>::category_type  category_type;

  std::cout << "---cmyk"
    << "  black      " << ::color::place::black       <category_type>() << std::endl
    << "  blue       " << ::color::place::blue        <category_type>() << std::endl
    << "  chroma     " << ::color::place::chroma      <category_type>() << std::endl
    << "  cyan       " << ::color::place::cyan        <category_type>() << std::endl
    << "  gray       " << ::color::place::gray        <category_type>() << std::endl
    << "  green      " << ::color::place::green       <category_type>() << std::endl
    << "  hue        " << ::color::place::hue         <category_type>() << std::endl
    << "  inphase    " << ::color::place::inphase     <category_type>() << std::endl
    << "  intensity  " << ::color::place::intensity   <category_type>() << std::endl
    << "  lightness  " << ::color::place::lightness   <category_type>() << std::endl
    << "  luma       " << ::color::place::luma        <category_type>() << std::endl
    << "  luminance  " << ::color::place::luminance   <category_type>() << std::endl
    << "  magenta    " << ::color::place::magenta     <category_type>() << std::endl
    << "  quadrature " << ::color::place::quadrature  <category_type>() << std::endl
    << "  red        " << ::color::place::red         <category_type>() << std::endl
    << "  saturation " << ::color::place::saturation  <category_type>() << std::endl
    << "  value      " << ::color::place::value       <category_type>() << std::endl
    << "  white      " << ::color::place::white       <category_type>() << std::endl
    << "  yellow     " << ::color::place::yellow      <category_type>() << std::endl;

  return EXIT_SUCCESS;
 }
