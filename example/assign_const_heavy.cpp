#include <iostream>
#include <iomanip>
#include <cstdint>

#include "color/color.hpp"

void assign_const_cmy();
void assign_const_cmyk();
void assign_const_hsl();
void assign_const_hsv();
void assign_const_rgb();
void assign_const_yiq();
void assign_const_yuv();

int main( int argc, char *argv[] )
 {

 std::cout<< "---- ---- ---- ---- ---- ---- ---- ---- ---- ---- ---- ---- ---- ---- ---- ----" << std::endl;

  assign_const_cmy();
  assign_const_cmyk();
  assign_const_hsl();
  assign_const_hsv();
  assign_const_rgb();
  assign_const_yiq();
  assign_const_yuv();

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

void assign_const_cmy()
 {
//color::cmy<bool>           c0; //!< Not yet supported
  color::cmy<std::uint8_t>   c1; c1 = ::color::constant::lavender_type{};
  color::cmy<std::uint16_t>  c2; c2 = ::color::constant::lavender_type{};
  color::cmy<std::uint32_t>  c3; c3 = ::color::constant::lavender_type{};
  color::cmy<std::uint64_t>  c4; c4 = ::color::constant::lavender_type{};
  color::cmy<float>          c5; c5 = ::color::constant::lavender_type{};
  color::cmy<double>         c6; c6 = ::color::constant::lavender_type{};
  color::cmy<long double>    c7; c7 = ::color::constant::lavender_type{};

  std::cout<< " color::cmy<std::uint8_t>  =  "; print( c1 ); std::cout << std::endl;
  std::cout<< " color::cmy<std::uint16_t> =  "; print( c2 ); std::cout << std::endl;
  std::cout<< " color::cmy<std::uint32_t> =  "; print( c3 ); std::cout << std::endl;
  std::cout<< " color::cmy<std::uint64_t> =  "; print( c4 ); std::cout << std::endl;
  std::cout<< " color::cmy<float>         =  "; print( c5 ); std::cout << std::endl;
  std::cout<< " color::cmy<double>        =  "; print( c6 ); std::cout << std::endl;
  std::cout<< " color::cmy<long double>   =  "; print( c7 ); std::cout << std::endl;
 }


void assign_const_cmyk()
 {
//color::cmyk<bool>           c0( { true, false, false } ); //!< Not yet supported
  color::cmyk<std::uint8_t>   c1; c1 = ::color::constant::lavender_type{};
  color::cmyk<std::uint16_t>  c2; c2 = ::color::constant::lavender_type{};
  color::cmyk<std::uint32_t>  c3; c3 = ::color::constant::lavender_type{};
  color::cmyk<std::uint64_t>  c4; c4 = ::color::constant::lavender_type{};
  color::cmyk<float>          c5; c5 = ::color::constant::lavender_type{};
  color::cmyk<double>         c6; c6 = ::color::constant::lavender_type{};
  color::cmyk<long double>    c7; c7 = ::color::constant::lavender_type{};

  std::cout<< " color::cmyk<std::uint8_t>  =  "; print( c1 ); std::cout << std::endl;
  std::cout<< " color::cmyk<std::uint16_t> =  "; print( c2 ); std::cout << std::endl;
  std::cout<< " color::cmyk<std::uint32_t> =  "; print( c3 ); std::cout << std::endl;
  std::cout<< " color::cmyk<std::uint64_t> =  "; print( c4 ); std::cout << std::endl;
  std::cout<< " color::cmyk<float>         =  "; print( c5 ); std::cout << std::endl;
  std::cout<< " color::cmyk<double>        =  "; print( c6 ); std::cout << std::endl;
  std::cout<< " color::cmyk<long double>   =  "; print( c7 ); std::cout << std::endl;
 }

void assign_const_hsl()
 {
  //color::hsl<bool>           c0( { true, false, false} ); //!< Not yet supported
  color::hsl<std::uint8_t>   c1; c1 = ::color::constant::lavender_type{};
  color::hsl<std::uint16_t>  c2; c2 = ::color::constant::lavender_type{};
  color::hsl<std::uint32_t>  c3; c3 = ::color::constant::lavender_type{};
  color::hsl<std::uint64_t>  c4; c4 = ::color::constant::lavender_type{};
  color::hsl<float>          c5; c5 = ::color::constant::lavender_type{};
  color::hsl<double>         c6; c6 = ::color::constant::lavender_type{};
  color::hsl<long double>    c7; c7 = ::color::constant::lavender_type{};

  std::cout<< " color::hsl<std::uint8_t>  =  "; print( c1 ); std::cout << std::endl;
  std::cout<< " color::hsl<std::uint16_t> =  "; print( c2 ); std::cout << std::endl;
  std::cout<< " color::hsl<std::uint32_t> =  "; print( c3 ); std::cout << std::endl;
  std::cout<< " color::hsl<std::uint64_t> =  "; print( c4 ); std::cout << std::endl;
  std::cout<< " color::hsl<float>         =  "; print( c5 ); std::cout << std::endl;
  std::cout<< " color::hsl<double>        =  "; print( c6 ); std::cout << std::endl;
  std::cout<< " color::hsl<long double>   =  "; print( c7 ); std::cout << std::endl;
 }


void assign_const_hsv()
 {
//color::hsv<bool>           c0( { true, false, false} ); //!< Not yet supported
  color::hsv<std::uint8_t>   c1; c1 = ::color::constant::lavender_type{};
  color::hsv<std::uint16_t>  c2; c2 = ::color::constant::lavender_type{};
  color::hsv<std::uint32_t>  c3; c3 = ::color::constant::lavender_type{};
  color::hsv<std::uint64_t>  c4; c4 = ::color::constant::lavender_type{};
  color::hsv<float>          c5; c5 = ::color::constant::lavender_type{};
  color::hsv<double>         c6; c6 = ::color::constant::lavender_type{};
  color::hsv<long double>    c7; c7 = ::color::constant::lavender_type{};

  std::cout<< " color::hsv<std::uint8_t>  =  "; print( c1 ); std::cout << std::endl;
  std::cout<< " color::hsv<std::uint16_t> =  "; print( c2 ); std::cout << std::endl;
  std::cout<< " color::hsv<std::uint32_t> =  "; print( c3 ); std::cout << std::endl;
  std::cout<< " color::hsv<std::uint64_t> =  "; print( c4 ); std::cout << std::endl;
  std::cout<< " color::hsv<float>         =  "; print( c5 ); std::cout << std::endl;
  std::cout<< " color::hsv<double>        =  "; print( c6 ); std::cout << std::endl;
  std::cout<< " color::hsv<long double>   =  "; print( c7 ); std::cout << std::endl;
 }

void assign_const_rgb()
 {
  // color::rgb<bool>           c0( { true, false, false} ); //!< Not yet supported
  color::rgb<std::uint8_t>   c1; c1 = ::color::constant::lavender_type{};
  color::rgb<std::uint16_t>  c2; c2 = ::color::constant::lavender_type{};
  color::rgb<std::uint32_t>  c3; c3 = ::color::constant::lavender_type{};
  color::rgb<std::uint64_t>  c4; c4 = ::color::constant::lavender_type{};
  color::rgb<float>          c5; c5 = ::color::constant::lavender_type{};
  color::rgb<double>         c6; c6 = ::color::constant::lavender_type{};
  color::rgb<long double>    c7; c7 = ::color::constant::lavender_type{};

  std::cout<< " color::rgb<std::uint8_t>  =  "; print( c1 ); std::cout << std::endl;
  std::cout<< " color::rgb<std::uint16_t> =  "; print( c2 ); std::cout << std::endl;
  std::cout<< " color::rgb<std::uint32_t> =  "; print( c3 ); std::cout << std::endl;
  std::cout<< " color::rgb<std::uint64_t> =  "; print( c4 ); std::cout << std::endl;
  std::cout<< " color::rgb<float>         =  "; print( c5 ); std::cout << std::endl;
  std::cout<< " color::rgb<double>        =  "; print( c6 ); std::cout << std::endl;
  std::cout<< " color::rgb<long double>   =  "; print( c7 ); std::cout << std::endl;
 }

void assign_const_yiq()
 {
//color::yiq<bool>           c0( { true, false, false} ); //!< Not yet supported
  color::yiq<std::uint8_t>   c1; c1 = ::color::constant::lavender_type{};
  color::yiq<std::uint16_t>  c2; c2 = ::color::constant::lavender_type{};
  color::yiq<std::uint32_t>  c3; c3 = ::color::constant::lavender_type{};
  color::yiq<std::uint64_t>  c4; c4 = ::color::constant::lavender_type{};
  color::yiq<float>          c5; c5 = ::color::constant::lavender_type{};
  color::yiq<double>         c6; c6 = ::color::constant::lavender_type{};
  color::yiq<long double>    c7; c7 = ::color::constant::lavender_type{};

  std::cout<< " color::yiq<std::uint8_t>  =  "; print( c1 ); std::cout << std::endl;
  std::cout<< " color::yiq<std::uint16_t> =  "; print( c2 ); std::cout << std::endl;
  std::cout<< " color::yiq<std::uint32_t> =  "; print( c3 ); std::cout << std::endl;
  std::cout<< " color::yiq<std::uint64_t> =  "; print( c4 ); std::cout << std::endl;
  std::cout<< " color::yiq<float>         =  "; print( c5 ); std::cout << std::endl;
  std::cout<< " color::yiq<double>        =  "; print( c6 ); std::cout << std::endl;
  std::cout<< " color::yiq<long double>   =  "; print( c7 ); std::cout << std::endl;
 }

void assign_const_yuv()
 {
  //color::yuv<bool>           c0( { true, false, false} ); //!< Not yet supported
  color::yuv<std::uint8_t>   c1; c1 = ::color::constant::lavender_type{};
  color::yuv<std::uint16_t>  c2; c2 = ::color::constant::lavender_type{};
  color::yuv<std::uint32_t>  c3; c3 = ::color::constant::lavender_type{};
  color::yuv<std::uint64_t>  c4; c4 = ::color::constant::lavender_type{};
  color::yuv<float>          c5; c5 = ::color::constant::lavender_type{};
  color::yuv<double>         c6; c6 = ::color::constant::lavender_type{};
  color::yuv<long double>    c7; c7 = ::color::constant::lavender_type{};

  std::cout<< " color::yuv<std::uint8_t>  =  "; print( c1 ); std::cout << std::endl;
  std::cout<< " color::yuv<std::uint16_t> =  "; print( c2 ); std::cout << std::endl;
  std::cout<< " color::yuv<std::uint32_t> =  "; print( c3 ); std::cout << std::endl;
  std::cout<< " color::yuv<std::uint64_t> =  "; print( c4 ); std::cout << std::endl;
  std::cout<< " color::yuv<float>         =  "; print( c5 ); std::cout << std::endl;
  std::cout<< " color::yuv<double>        =  "; print( c6 ); std::cout << std::endl;
  std::cout<< " color::yuv<long double>   =  "; print( c7 ); std::cout << std::endl;
 }
 