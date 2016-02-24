#include <iostream>
#include <iomanip>

#include "color/color.hpp"

void invert_rgb();
void invert_cmy();
void invert_cmyk();
void invert_gray();
void invert_hsl();
void invert_hsv();
void invert_yiq();
void invert_yuv();


int main( int argc, char *argv[] )
 {
  std::cout<< "---- ---- ---- ---- ---- ---- ---- ---- ---- ---- ---- ---- ---- ---- ---- ----" << std::endl;
  std::cout<< "In this example all models use std::uint8_t for component" << std::endl;
  std::cout<< "You may chane it to some other type. e.g float, bouble, long double, std::uint16_t, ..." << std::endl;
  invert_rgb();
  invert_cmy();
  invert_cmyk();
  invert_gray();
  invert_hsl();
  invert_hsv();
  invert_yiq();
  invert_yuv();
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
     std::cout<< std::setw(12) << std::right << (unsigned)c[index] << ",";
    }
   std::cout << " }";
  }
 
void invert_rgb()
 {
  ::color::rgb< std::uint8_t > r;

  ::color::make::orange( r ); //!< Fill with some useful ininvertion

  std::cout<< "Orange in color::rgb<std::uint8_t> = ";
  print( r );
  
  ::color::operation::invert( r );
  
  std::cout<< ";  Innverted = "; 
  print( r );
  std::cout << std::endl;
 }

void invert_cmy()
 {
  ::color::cmy< std::uint8_t > c;

  ::color::make::orange( c ); //!< Fill with some useful ininvertion

  std::cout<< "Orange in color::rgb<std::uint8_t> = ";
  print( c );
  
  ::color::operation::invert( c );
  
  std::cout<< ";  Innverted = "; 
  print( c );
  std::cout << std::endl;
 }

void invert_cmyk()
 {
  ::color::cmyk< std::uint8_t > ck;

  ::color::make::orange( ck ); //!< Fill with some useful ininvertion

  std::cout<< "Orange in color::rgb<std::uint8_t> = ";
  print( ck );
  
  ::color::operation::invert( ck );
  
  std::cout<< ";  Innverted = "; 
  print( ck );
  std::cout << std::endl;
 }

void invert_gray()
 {
  ::color::gray< std::uint8_t > g;

  ::color::make::orange( g ); //!< Fill with some useful ininvertion

  std::cout<< "Orange in color::rgb<std::uint8_t> = ";
  print( g );
  
  ::color::operation::invert( g );
  
  std::cout<< ";  Innverted = "; 
  print( g );
  std::cout << std::endl;
 }

void invert_hsl()
 {
  ::color::hsl< std::uint8_t > hl;

  ::color::make::orange( hl ); //!< Fill with some useful ininvertion

  std::cout<< "Orange in color::rgb<std::uint8_t> = ";
  print( hl );
  
  ::color::operation::invert( hl );
  
  std::cout<< ";  Innverted = "; 
  print( hl );
  std::cout << std::endl;
 }

void invert_hsv()
 {
  ::color::hsv< std::uint8_t > hv;

  ::color::make::orange( hv ); //!< Fill with some useful ininvertion

  std::cout<< "Orange in color::rgb<std::uint8_t> = ";
  print( hv );
  
  ::color::operation::invert( hv );
  
  std::cout<< ";  Innverted = "; 
  print( hv );
  std::cout << std::endl;
 }

void invert_yiq()
 {
  ::color::yiq< std::uint8_t > yq;

  ::color::make::orange( yq ); //!< Fill with some useful ininvertion
  std::cout<< "Orange in color::rgb<std::uint8_t> = ";
  print( yq );
  
  ::color::operation::invert( yq );
  
  std::cout<< ";  Innverted = "; 
  print( yq );
  std::cout << std::endl;
 }

void invert_yuv()
 {
  ::color::yuv< std::uint8_t > yv;

  std::cout<< "Orange in color::rgb<std::uint8_t> = ";
  print( yv );
  
  ::color::operation::invert( yv );
  
  std::cout<< ";  Innverted = "; 
  print( yv );
  std::cout << std::endl;
 }

