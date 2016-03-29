#include <iostream>
#include <iomanip>

#include "color/color.hpp"

void format_split4444_rgba();
void format_split4444_bgra();
void format_split4444_argb();
void format_split4444_abgr();

int main( int argc, char *argv[] )
 {
  std::cout<< "---- ---- ---- ---- ---- ---- ---- ---- ---- ---- ---- ---- ---- ---- ---- ----" << std::endl;
  std::cout<< "In this example all models use ::color::type::split4444_t for component" << std::endl;
   format_split4444_rgba();
   format_split4444_bgra();
   format_split4444_argb();
   format_split4444_abgr();
  std::cout<< "---- ---- ---- ---- ---- ---- ---- ---- ---- ---- ---- ---- ---- ---- ---- ----" << std::endl;

  return EXIT_SUCCESS;
 }
 
void format_split4444_rgba()
 {
  ::color::rgba< ::color::type::split4444_t > r;
  ::color::make::orange( r ); //!< Fill with some useful information

  std::cout<< "Orange in color::rgba<::color::type::split4444_t> = { ";
  std::cout<< std::setw(12) << std::right << (unsigned)r[0] << ","
           << std::setw(12) << std::right << (unsigned)r[1] << ","
           << std::setw(12) << std::right << (unsigned)r[2];
  std::cout<< " };";
  std::cout<< std::endl;
 }

void format_split4444_bgra()
 {
  ::color::bgra< ::color::type::split4444_t > r;
  ::color::make::orange( r ); //!< Fill with some useful information

  std::cout<< "Orange in color::bgra<::color::type::split4444_t> = { ";
  std::cout<< std::setw(12) << std::right << (unsigned)r[0] << ","
           << std::setw(12) << std::right << (unsigned)r[1] << ","
           << std::setw(12) << std::right << (unsigned)r[2];
  std::cout<< " };";
  std::cout<< std::endl;
 }

void format_split4444_argb()
 {
  ::color::argb< ::color::type::split4444_t > r;
  ::color::make::orange( r ); //!< Fill with some useful information

  std::cout<< "Orange in color::argb<::color::type::split4444_t> = { ";
  std::cout<< std::setw(12) << std::right << (unsigned)r[0] << ","
           << std::setw(12) << std::right << (unsigned)r[1] << ","
           << std::setw(12) << std::right << (unsigned)r[2];
  std::cout<< " };";
  std::cout<< std::endl;
 }

void format_split4444_abgr()
 {
  ::color::abgr< ::color::type::split4444_t > r;
  ::color::make::orange( r ); //!< Fill with some useful information

  std::cout<< "Orange in color::abgr<::color::type::split4444_t> = { ";
  std::cout<< std::setw(12) << std::right << (unsigned)r[0] << ","
           << std::setw(12) << std::right << (unsigned)r[1] << ","
           << std::setw(12) << std::right << (unsigned)r[2];
  std::cout<< " };";
  std::cout<< std::endl;
 }
