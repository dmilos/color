#include <iostream>
#include <iomanip>

#include "color/color.hpp"

#include "./print.hpp"

void make_check_red_in()
 {
  std::cout << "--------------" << std::endl;
  color::rgb<double>    r;    color::make::magenta( r );
  
  color::rgb<float>     f    ( r ); std::cout << "color::rgb<double>   "; print( r  ) ;  std::cout << std::endl;
  color::rgb<uint8_t>   i8   ( r ); std::cout << "color::rgb<uint8_t>  " << std::setbase( 16 ) << int(  i8.container() ) << std::endl;
  color::rgb<uint16_t>  i16  ( r ); std::cout << "color::rgb<uint16_t> " << std::setbase( 16 ) <<      i16.container()   << std::endl;
  color::rgb<uint32_t>  i32  ( r ); std::cout << "color::rgb<uint32_t> " << std::setbase( 16 ) <<      i32.container()   << std::endl;
  color::rgb<uint64_t>  i64  ( r ); std::cout << "color::rgb<uint64_t> " << std::setbase( 16 ) <<      i64.container()   << std::endl;
 }

void make_check_red_out()
 {
  std::cout << "--------------" << std::endl; 
  color::rgb<double>  r;    color::make::magenta(r);

                                std::cout << "color::rgb<double>   "; print( r  );  std::cout << std::endl;
  color::hsl<double>  hl ( r ); std::cout << "color::hsl<double>   "; print( hl );  std::cout << std::endl;
  color::hsv<double>  hv ( r ); std::cout << "color::hsv<double>   "; print( hv );  std::cout << std::endl;
  color::cmy<double>  c  ( r ); std::cout << "color::cmy<double>   "; print( c  );  std::cout << std::endl;
  color::cmyk<double> ck ( r ); std::cout << "color::cmyk<double>  "; print( ck );  std::cout << std::endl;
  color::yuv<double>  yu ( r ); std::cout << "color::yuv<double>   "; print( yu );  std::cout << std::endl;
  color::yiq<double>  yi ( r ); std::cout << "color::yiq<double>   "; print( yi );  std::cout << std::endl;
  color::xyz<double>  x  ( r ); std::cout << "color::xyz<double>   "; print(  x );  std::cout << std::endl;
 }

void make_test()
 {
  make_check_red_in();
  make_check_red_out();
 }