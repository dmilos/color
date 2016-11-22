#include <sstream>
#include <fstream>
#include <iostream>
#include <iomanip>
#include <string>

#include "color/color.hpp"

#include "./print.hpp"






template< typename type_type  >
 using yuv601 = color::yuv <type_type, ::color::constant::yuv::BT_601_entity >;

template< typename  type_type  >
 using yuv709 = color::yuv< type_type, ::color::constant::yuv::BT_709_entity >;

template< typename  type_type  >
 using YPbPr601  = color::YPbPr< type_type, ::color::constant::YPbPr::BT_601_entity>;

template< typename  type_type  >
 using YPbPr709  = color::YPbPr< type_type, ::color::constant::YPbPr::BT_709_entity>;

template< typename  type_type  >
 using YPbPr2020 = color::YPbPr< type_type, ::color::constant::YPbPr::BT_2020_entity>;



std::string print_color( std::string const& text,  ::color::rgb<std::uint8_t> const& r )
 {
  std::stringstream ss;

  ss <<  "<div style=\"background-color:rgb("<< (unsigned)r[0] <<","<< (unsigned)r[1] <<","<< (unsigned)r[2] <<");color:white\">";

  if( 0 != text.size() )
   {
    ss << text << " - ";
   }
  ss << "("<< (unsigned)r[0] <<","<< (unsigned)r[1] <<","<< (unsigned)r[2] <<")";

  ss << "</div>";
  return ss.str();
 }


template < typename model_type>
std::string make_test_gray_single( std::string const& name )
 {
  std::stringstream ss;

  model_type r;

  ss << "<tr>" << std::endl;

   ss << "<td>" << name << "</td>";

   ::color::make::gray( r,   0.0 );   ss << "<td>" << print_color( "", ::color::rgb<std::uint8_t>( r ) ) << "</td>";
   ::color::make::gray( r,  10.0 );   ss << "<td>" << print_color( "", ::color::rgb<std::uint8_t>( r ) ) << "</td>";
   ::color::make::gray( r,  16.6 );   ss << "<td>" << print_color( "", ::color::rgb<std::uint8_t>( r ) ) << "</td>";
   ::color::make::gray( r,  20.0 );   ss << "<td>" << print_color( "", ::color::rgb<std::uint8_t>( r ) ) << "</td>";
   ::color::make::gray( r,  25.0 );   ss << "<td>" << print_color( "", ::color::rgb<std::uint8_t>( r ) ) << "</td>";
   ::color::make::gray( r,  30.0 );   ss << "<td>" << print_color( "", ::color::rgb<std::uint8_t>( r ) ) << "</td>";
   ::color::make::gray( r,  33.3 );   ss << "<td>" << print_color( "", ::color::rgb<std::uint8_t>( r ) ) << "</td>";
   ::color::make::gray( r,  40.0 );   ss << "<td>" << print_color( "", ::color::rgb<std::uint8_t>( r ) ) << "</td>";
   ::color::make::gray( r,  50.0 );   ss << "<td>" << print_color( "", ::color::rgb<std::uint8_t>( r ) ) << "</td>";
   ::color::make::gray( r,  60.0 );   ss << "<td>" << print_color( "", ::color::rgb<std::uint8_t>( r ) ) << "</td>";
   ::color::make::gray( r,  66.6 );   ss << "<td>" << print_color( "", ::color::rgb<std::uint8_t>( r ) ) << "</td>";
   ::color::make::gray( r,  70.0 );   ss << "<td>" << print_color( "", ::color::rgb<std::uint8_t>( r ) ) << "</td>";
   ::color::make::gray( r,  75.0 );   ss << "<td>" << print_color( "", ::color::rgb<std::uint8_t>( r ) ) << "</td>";
   ::color::make::gray( r,  80.0 );   ss << "<td>" << print_color( "", ::color::rgb<std::uint8_t>( r ) ) << "</td>";
   ::color::make::gray( r,  83.3 );   ss << "<td>" << print_color( "", ::color::rgb<std::uint8_t>( r ) ) << "</td>";
   ::color::make::gray( r,  90.0 );   ss << "<td>" << print_color( "", ::color::rgb<std::uint8_t>( r ) ) << "</td>";
   ::color::make::gray( r, 100.0 );   ss << "<td>" << print_color( "", ::color::rgb<std::uint8_t>( r ) ) << "</td>";

   r = ::color::make::gray< typename model_type::category_type>(   0.0 );   ss << "<td>" << print_color( "", ::color::rgb<std::uint8_t>( r ) ) << "</td>";
   r = ::color::make::gray< typename model_type::category_type>(  10.0 );   ss << "<td>" << print_color( "", ::color::rgb<std::uint8_t>( r ) ) << "</td>";
   r = ::color::make::gray< typename model_type::category_type>(  16.6 );   ss << "<td>" << print_color( "", ::color::rgb<std::uint8_t>( r ) ) << "</td>";
   r = ::color::make::gray< typename model_type::category_type>(  20.0 );   ss << "<td>" << print_color( "", ::color::rgb<std::uint8_t>( r ) ) << "</td>";
   r = ::color::make::gray< typename model_type::category_type>(  25.0 );   ss << "<td>" << print_color( "", ::color::rgb<std::uint8_t>( r ) ) << "</td>";
   r = ::color::make::gray< typename model_type::category_type>(  30.0 );   ss << "<td>" << print_color( "", ::color::rgb<std::uint8_t>( r ) ) << "</td>";
   r = ::color::make::gray< typename model_type::category_type>(  33.3 );   ss << "<td>" << print_color( "", ::color::rgb<std::uint8_t>( r ) ) << "</td>";
   r = ::color::make::gray< typename model_type::category_type>(  40.0 );   ss << "<td>" << print_color( "", ::color::rgb<std::uint8_t>( r ) ) << "</td>";
   r = ::color::make::gray< typename model_type::category_type>(  50.0 );   ss << "<td>" << print_color( "", ::color::rgb<std::uint8_t>( r ) ) << "</td>";
   r = ::color::make::gray< typename model_type::category_type>(  60.0 );   ss << "<td>" << print_color( "", ::color::rgb<std::uint8_t>( r ) ) << "</td>";
   r = ::color::make::gray< typename model_type::category_type>(  66.6 );   ss << "<td>" << print_color( "", ::color::rgb<std::uint8_t>( r ) ) << "</td>";
   r = ::color::make::gray< typename model_type::category_type>(  70.0 );   ss << "<td>" << print_color( "", ::color::rgb<std::uint8_t>( r ) ) << "</td>";
   r = ::color::make::gray< typename model_type::category_type>(  75.0 );   ss << "<td>" << print_color( "", ::color::rgb<std::uint8_t>( r ) ) << "</td>";
   r = ::color::make::gray< typename model_type::category_type>(  80.0 );   ss << "<td>" << print_color( "", ::color::rgb<std::uint8_t>( r ) ) << "</td>";
   r = ::color::make::gray< typename model_type::category_type>(  83.3 );   ss << "<td>" << print_color( "", ::color::rgb<std::uint8_t>( r ) ) << "</td>";
   r = ::color::make::gray< typename model_type::category_type>(  90.0 );   ss << "<td>" << print_color( "", ::color::rgb<std::uint8_t>( r ) ) << "</td>";
   r = ::color::make::gray< typename model_type::category_type>( 100.0 );   ss << "<td>" << print_color( "", ::color::rgb<std::uint8_t>( r ) ) << "</td>";

  ss << "</tr>" << std::endl;

  return ss.str();
 }

void make_test_gray_scale()
 {
  std::stringstream ss;

  ss << "<table cellpadding=\"0\" cellspacing=\"0\">" << std::endl;
  ss <<  make_test_gray_single< ::color::cmy< double> >( "cmy" );
  ss <<  make_test_gray_single< ::color::cmyk<double> >( "cmyk" );
  ss <<  make_test_gray_single< ::color::gray<double> >( "gray" );
  ss <<  make_test_gray_single< ::color::hsv< double> >( "hsv" );
  ss <<  make_test_gray_single< ::color::hsi< double> >( "hsi" );
  ss <<  make_test_gray_single< ::color::hsl< double> >( "hsl" );
  ss <<  make_test_gray_single< ::color::rgb< double> >( "rgb" );
  ss <<  make_test_gray_single< ::color::yiq< double> >( "yiq" );
  ss <<  make_test_gray_single< ::color::yuv< double, ::color::constant::yuv::BT_601_entity> >( "y601" );
  ss <<  make_test_gray_single< ::color::yuv< double, ::color::constant::yuv::BT_709_entity> >( "y706" );

  ss <<  make_test_gray_single< ::color::YCgCo< double> >( "YCgCo" );
  ss <<  make_test_gray_single< ::color::YDbDr< double> >( "YDbDr" );

  ss <<  make_test_gray_single< ::color::YPbPr< double, ::color::constant::YPbPr::BT_601_entity> >(  "YPbPr601"  );
  ss <<  make_test_gray_single< ::color::YPbPr< double, ::color::constant::YPbPr::BT_709_entity> >(  "YPbPr709"  );
  ss <<  make_test_gray_single< ::color::YPbPr< double, ::color::constant::YPbPr::BT_2020_entity> >( "YPbPr2020" );

  ss << "</table>" << std::endl;

   {
    std::ofstream ofs( std::string( "./gray_test.html" ). c_str() );
    ofs <<  ss.str();
   }

 }
