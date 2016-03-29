#include <iostream>
#include <iomanip>

#include "color/color.hpp"

void format_split2222_rgba();
void format_split2222_bgra();
void format_split2222_argb();
void format_split2222_abgr();

int main( int argc, char *argv[] )
 {
  std::cout<< "---- ---- ---- ---- ---- ---- ---- ---- ---- ---- ---- ---- ---- ---- ---- ----" << std::endl;
  std::cout<< "In this example all models use ::color::type::split2222_t for component" << std::endl;
   format_split2222_rgba();
   format_split2222_bgra();
   format_split2222_argb();
   format_split2222_abgr();
  std::cout<< "---- ---- ---- ---- ---- ---- ---- ---- ---- ---- ---- ---- ---- ---- ---- ----" << std::endl;

  return EXIT_SUCCESS;
 }
 
void format_split2222_rgba()
 {
  ::color::rgba< ::color::type::split2222_t > r;
  ::color::make::orange( r ); //!< Fill with some useful information

  std::cout<< "Orange in color::rgba<::color::type::split2222_t> = { ";
  std::cout<< std::setw(12) << std::right << (unsigned)r[0] << ","
           << std::setw(12) << std::right << (unsigned)r[1] << ","
           << std::setw(12) << std::right << (unsigned)r[2];
  std::cout<< " };";
  std::cout<< std::endl;
 }

void format_split2222_bgra()
 {
  ::color::bgra< ::color::type::split2222_t > r;
  ::color::make::orange( r ); //!< Fill with some useful information

  std::cout<< "Orange in color::bgra<::color::type::split2222_t> = { ";
  std::cout<< std::setw(12) << std::right << (unsigned)r[0] << ","
           << std::setw(12) << std::right << (unsigned)r[1] << ","
           << std::setw(12) << std::right << (unsigned)r[2];
  std::cout<< " };";
  std::cout<< std::endl;
 }

void format_split2222_argb()
 {
  ::color::argb< ::color::type::split2222_t > r;
  ::color::make::orange( r ); //!< Fill with some useful information

  std::cout<< "Orange in color::argb<::color::type::split2222_t> = { ";
  std::cout<< std::setw(12) << std::right << (unsigned)r[0] << ","
           << std::setw(12) << std::right << (unsigned)r[1] << ","
           << std::setw(12) << std::right << (unsigned)r[2];
  std::cout<< " };";
  std::cout<< std::endl;
 }

void format_split2222_abgr()
 {
  ::color::abgr< ::color::type::split2222_t > r;
  ::color::make::orange( r ); //!< Fill with some useful information

  std::cout<< "Orange in color::abgr<::color::type::split2222_t> = { ";
  std::cout<< std::setw(12) << std::right << (unsigned)r[0] << ","
           << std::setw(12) << std::right << (unsigned)r[1] << ","
           << std::setw(12) << std::right << (unsigned)r[2];
  std::cout<< " };";
  std::cout<< std::endl;
 }
