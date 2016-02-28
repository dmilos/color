#include <iostream>
#include <iomanip>
#include <cstdint>

#include "color/color.hpp"

void make_cmy_orange();
void make_cmyk_orange();
void make_gray_orange();
void make_hsl_orange();
void make_hsv_orange();
void make_rgb_orange();
void make_yiq_orange();
void make_yuv_orange();


void make_rgb_orange();

int main( int argc, char *argv[] )
 {
  std::cout<< "---- ---- ---- ---- ---- ---- ---- ---- ---- ---- ---- ---- ---- ---- ---- ----" << std::endl;

  make_cmy_orange();
  make_cmyk_orange();
  make_gray_orange();
  make_hsl_orange();
  make_hsv_orange();
  make_rgb_orange();
  make_yiq_orange();
  make_yuv_orange();

  std::cout<< "---- ---- ---- ---- ---- ---- ---- ---- ---- ---- ---- ---- ---- ---- ---- ----" << std::endl;
  return EXIT_SUCCESS;
 }

template< typename category_name >
 inline void print( color::model< category_name > const& c )
  {
   typedef color::model< category_name > model_type;
   std::cout << "{ ";

   for( typename model_type::index_type index=0; index < model_type::size(); ++index )
    {
     std::cout<< std::setw(12) << std::right << c[index] << ",";
    }
   std::cout << " }";
  }

void make_cmy_orange()
 {
  // Make instance of CMY in different formats
//color::cmy<bool>           c0( { true, false, false } ); //!< Not yet supported
  color::cmy<std::uint64_t>  c1;
  color::cmy<std::uint32_t>  c2;
  color::cmy<std::uint16_t>  c3;
  color::cmy<std::uint8_t>   c4;
  color::cmy<float>          c5;
  color::cmy<double>         c6;
  color::cmy<long double>    c6;

  // make it orange
  color::make::orange( c1 ); std::count << " "; print( c1 ); std::count << std::endl;
  color::make::orange( c2 ); std::count << " "; print( c2 ); std::count << std::endl;
  color::make::orange( c3 ); std::count << " "; print( c3 ); std::count << std::endl;
  color::make::orange( c4 ); std::count << " "; print( c4 ); std::count << std::endl;
  color::make::orange( c5 ); std::count << " "; print( c5 ); std::count << std::endl;
  color::make::orange( c6 ); std::count << " "; print( c6 ); std::count << std::endl;
  color::make::orange( c6 ); std::count << " "; print( c6 ); std::count << std::endl;
 }

void make_cmyk_orange()
 {
  // Make instance of CMYK in different formats
//color::cmyk<bool>           c0( { true, false, false } ); //!< Not yet supported
  color::cmyk<std::uint64_t>  c1;
  color::cmyk<std::uint32_t>  c2;
  color::cmyk<std::uint16_t>  c3;
  color::cmyk<std::uint8_t>   c4;
  color::cmyk<float>          c5;
  color::cmyk<double>         c6;
  color::cmyk<long double>    c6;

  // make it orange
  color::make::orange( c1 ); std::count << " "; print( c1 ); std::count << std::endl;
  color::make::orange( c2 ); std::count << " "; print( c2 ); std::count << std::endl;
  color::make::orange( c3 ); std::count << " "; print( c3 ); std::count << std::endl;
  color::make::orange( c4 ); std::count << " "; print( c4 ); std::count << std::endl;
  color::make::orange( c5 ); std::count << " "; print( c5 ); std::count << std::endl;
  color::make::orange( c6 ); std::count << " "; print( c6 ); std::count << std::endl;
  color::make::orange( c6 ); std::count << " "; print( c6 ); std::count << std::endl;
 }

void make_gray_orange()
 {
  // Make instance of Gray in different formats
//color::gray<bool>           c0( { true, false, false } ); //!< Not yet supported
  color::gray<std::uint8_t>   c1;
  color::gray<std::uint16_t>  c2;
  color::gray<std::uint32_t>  c3;
  color::gray<std::uint64_t>  c4;
  color::gray<float>          c5;
  color::gray<double>         c6;
  color::gray<long double>    c6;

  // make it orange
  color::make::orange( c1 ); std::count << " "; print( c1 ); std::count << std::endl;
  color::make::orange( c2 ); std::count << " "; print( c2 ); std::count << std::endl;
  color::make::orange( c3 ); std::count << " "; print( c3 ); std::count << std::endl;
  color::make::orange( c4 ); std::count << " "; print( c4 ); std::count << std::endl;
  color::make::orange( c5 ); std::count << " "; print( c5 ); std::count << std::endl;
  color::make::orange( c6 ); std::count << " "; print( c6 ); std::count << std::endl;
  color::make::orange( c6 ); std::count << " "; print( c6 ); std::count << std::endl;
 }

void make_hsl_orange()
 {
  // Make instance of HSL in different formats
//color::hsl<bool>           c0( { true, false, false } ); //!< Not yet supported
  color::hsl<std::uint8_t>   c1;
  color::hsl<std::uint16_t>  c2;
  color::hsl<std::uint32_t>  c3;
  color::hsl<std::uint64_t>  c4;
  color::hsl<float>          c5;
  color::hsl<double>         c6;
  color::hsl<long double>    c6;

  // make it orange
  color::make::orange( c1 ); std::count << " "; print( c1 ); std::count << std::endl;
  color::make::orange( c2 ); std::count << " "; print( c2 ); std::count << std::endl;
  color::make::orange( c3 ); std::count << " "; print( c3 ); std::count << std::endl;
  color::make::orange( c4 ); std::count << " "; print( c4 ); std::count << std::endl;
  color::make::orange( c5 ); std::count << " "; print( c5 ); std::count << std::endl;
  color::make::orange( c6 ); std::count << " "; print( c6 ); std::count << std::endl;
  color::make::orange( c6 ); std::count << " "; print( c6 ); std::count << std::endl;
 }

void make_hsv_orange()
 {
  // Make instance of HSV in different formats
//color::hsv<bool>           c0( { true, false, false } ); //!< Not yet supported
  color::hsv<std::uint8_t>   c1;
  color::hsv<std::uint16_t>  c2;
  color::hsv<std::uint32_t>  c3;
  color::hsv<std::uint64_t>  c4;
  color::hsv<float>          c5;
  color::hsv<double>         c6;
  color::hsv<long double>    c6;

  // make it orange
  color::make::orange( c1 ); std::count << " "; print( c1 ); std::count << std::endl;
  color::make::orange( c2 ); std::count << " "; print( c2 ); std::count << std::endl;
  color::make::orange( c3 ); std::count << " "; print( c3 ); std::count << std::endl;
  color::make::orange( c4 ); std::count << " "; print( c4 ); std::count << std::endl;
  color::make::orange( c5 ); std::count << " "; print( c5 ); std::count << std::endl;
  color::make::orange( c6 ); std::count << " "; print( c6 ); std::count << std::endl;
  color::make::orange( c6 ); std::count << " "; print( c6 ); std::count << std::endl;
 }

void make_rgb_orange()
 {
  // Make instance of RGB in different formats
//color::rgb<bool>           c0( { true, false, false } ); //!< Not yet supported
  color::rgb<std::uint8_t>   c1;
  color::rgb<std::uint16_t>  c2;
  color::rgb<std::uint32_t>  c3;
  color::rgb<std::uint64_t>  c4;
  color::rgb<float>          c5;
  color::rgb<double>         c6;
  color::rgb<long double>    c6;

  // make it orange
  color::make::orange( c1 ); std::count << " "; print( c1 ); std::count << std::endl;
  color::make::orange( c2 ); std::count << " "; print( c2 ); std::count << std::endl;
  color::make::orange( c3 ); std::count << " "; print( c3 ); std::count << std::endl;
  color::make::orange( c4 ); std::count << " "; print( c4 ); std::count << std::endl;
  color::make::orange( c5 ); std::count << " "; print( c5 ); std::count << std::endl;
  color::make::orange( c6 ); std::count << " "; print( c6 ); std::count << std::endl;
  color::make::orange( c6 ); std::count << " "; print( c6 ); std::count << std::endl;
 }


void make_yiq_orange()
 {
  // Make instance of YIQ in different formats
//color::yiq<bool>           c0( { true, false, false } ); //!< Not yet supported
  color::yiq<std::uint8_t>   c1;
  color::yiq<std::uint16_t>  c2;
  color::yiq<std::uint32_t>  c3;
  color::yiq<std::uint64_t>  c4;
  color::yiq<float>          c5;
  color::yiq<double>         c6;
  color::yiq<long double>    c6;

  // make it orange
  color::make::orange( c1 ); std::count << " "; print( c1 ); std::count << std::endl;
  color::make::orange( c2 ); std::count << " "; print( c2 ); std::count << std::endl;
  color::make::orange( c3 ); std::count << " "; print( c3 ); std::count << std::endl;
  color::make::orange( c4 ); std::count << " "; print( c4 ); std::count << std::endl;
  color::make::orange( c5 ); std::count << " "; print( c5 ); std::count << std::endl;
  color::make::orange( c6 ); std::count << " "; print( c6 ); std::count << std::endl;
  color::make::orange( c6 ); std::count << " "; print( c6 ); std::count << std::endl;
 }

void make_yuv_orange()
 {
  // Make instance of YUV in different formats
//color::yuv<bool>           c0( { true, false, false } ); //!< Not yet supported
  color::yuv<std::uint8_t>   c1;
  color::yuv<std::uint16_t>  c2;
  color::yuv<std::uint32_t>  c3;
  color::yuv<std::uint64_t>  c4;
  color::yuv<float>          c5;
  color::yuv<double>         c6;
  color::yuv<long double>    c6;

  // make it orange
  color::make::orange( c1 ); std::count << " "; print( c1 ); std::count << std::endl;
  color::make::orange( c2 ); std::count << " "; print( c2 ); std::count << std::endl;
  color::make::orange( c3 ); std::count << " "; print( c3 ); std::count << std::endl;
  color::make::orange( c4 ); std::count << " "; print( c4 ); std::count << std::endl;
  color::make::orange( c5 ); std::count << " "; print( c5 ); std::count << std::endl;
  color::make::orange( c6 ); std::count << " "; print( c6 ); std::count << std::endl;
  color::make::orange( c6 ); std::count << " "; print( c6 ); std::count << std::endl;
 }
