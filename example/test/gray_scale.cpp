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

  model_type m;

  ss << "<tr>" << std::endl;
   ss << "<td>" << name << "</td>";

   ::color::make::gray( m,   0.0 );   ss << "<td>" << print_color( "", ::color::rgb<std::uint8_t>( m ) ) << "</td>";
   ::color::make::gray( m,  10.0 );   ss << "<td>" << print_color( "", ::color::rgb<std::uint8_t>( m ) ) << "</td>";
   ::color::make::gray( m,  16.6 );   ss << "<td>" << print_color( "", ::color::rgb<std::uint8_t>( m ) ) << "</td>";
   ::color::make::gray( m,  20.0 );   ss << "<td>" << print_color( "", ::color::rgb<std::uint8_t>( m ) ) << "</td>";
   ::color::make::gray( m,  25.0 );   ss << "<td>" << print_color( "", ::color::rgb<std::uint8_t>( m ) ) << "</td>";
   ::color::make::gray( m,  30.0 );   ss << "<td>" << print_color( "", ::color::rgb<std::uint8_t>( m ) ) << "</td>";
   ::color::make::gray( m,  33.3 );   ss << "<td>" << print_color( "", ::color::rgb<std::uint8_t>( m ) ) << "</td>";
   ::color::make::gray( m,  40.0 );   ss << "<td>" << print_color( "", ::color::rgb<std::uint8_t>( m ) ) << "</td>";
   ::color::make::gray( m,  50.0 );   ss << "<td>" << print_color( "", ::color::rgb<std::uint8_t>( m ) ) << "</td>";
   ::color::make::gray( m,  60.0 );   ss << "<td>" << print_color( "", ::color::rgb<std::uint8_t>( m ) ) << "</td>";
   ::color::make::gray( m,  66.6 );   ss << "<td>" << print_color( "", ::color::rgb<std::uint8_t>( m ) ) << "</td>";
   ::color::make::gray( m,  70.0 );   ss << "<td>" << print_color( "", ::color::rgb<std::uint8_t>( m ) ) << "</td>";
   ::color::make::gray( m,  75.0 );   ss << "<td>" << print_color( "", ::color::rgb<std::uint8_t>( m ) ) << "</td>";
   ::color::make::gray( m,  80.0 );   ss << "<td>" << print_color( "", ::color::rgb<std::uint8_t>( m ) ) << "</td>";
   ::color::make::gray( m,  83.3 );   ss << "<td>" << print_color( "", ::color::rgb<std::uint8_t>( m ) ) << "</td>";
   ::color::make::gray( m,  90.0 );   ss << "<td>" << print_color( "", ::color::rgb<std::uint8_t>( m ) ) << "</td>";
   ::color::make::gray( m, 100.0 );   ss << "<td>" << print_color( "", ::color::rgb<std::uint8_t>( m ) ) << "</td>";

  ss << "</tr>" << std::endl;

  ss << "<tr>" << std::endl;
   ss << "<td>" << "&nbsp;" << "</td>";

   m = ::color::make::gray< typename model_type::category_type>(   0.0 );   ss << "<td>" << print_color( "", ::color::rgb<std::uint8_t>( m ) ) << "</td>";
   m = ::color::make::gray< typename model_type::category_type>(  10.0 );   ss << "<td>" << print_color( "", ::color::rgb<std::uint8_t>( m ) ) << "</td>";
   m = ::color::make::gray< typename model_type::category_type>(  16.6 );   ss << "<td>" << print_color( "", ::color::rgb<std::uint8_t>( m ) ) << "</td>";
   m = ::color::make::gray< typename model_type::category_type>(  20.0 );   ss << "<td>" << print_color( "", ::color::rgb<std::uint8_t>( m ) ) << "</td>";
   m = ::color::make::gray< typename model_type::category_type>(  25.0 );   ss << "<td>" << print_color( "", ::color::rgb<std::uint8_t>( m ) ) << "</td>";
   m = ::color::make::gray< typename model_type::category_type>(  30.0 );   ss << "<td>" << print_color( "", ::color::rgb<std::uint8_t>( m ) ) << "</td>";
   m = ::color::make::gray< typename model_type::category_type>(  33.3 );   ss << "<td>" << print_color( "", ::color::rgb<std::uint8_t>( m ) ) << "</td>";
   m = ::color::make::gray< typename model_type::category_type>(  40.0 );   ss << "<td>" << print_color( "", ::color::rgb<std::uint8_t>( m ) ) << "</td>";
   m = ::color::make::gray< typename model_type::category_type>(  50.0 );   ss << "<td>" << print_color( "", ::color::rgb<std::uint8_t>( m ) ) << "</td>";
   m = ::color::make::gray< typename model_type::category_type>(  60.0 );   ss << "<td>" << print_color( "", ::color::rgb<std::uint8_t>( m ) ) << "</td>";
   m = ::color::make::gray< typename model_type::category_type>(  66.6 );   ss << "<td>" << print_color( "", ::color::rgb<std::uint8_t>( m ) ) << "</td>";
   m = ::color::make::gray< typename model_type::category_type>(  70.0 );   ss << "<td>" << print_color( "", ::color::rgb<std::uint8_t>( m ) ) << "</td>";
   m = ::color::make::gray< typename model_type::category_type>(  75.0 );   ss << "<td>" << print_color( "", ::color::rgb<std::uint8_t>( m ) ) << "</td>";
   m = ::color::make::gray< typename model_type::category_type>(  80.0 );   ss << "<td>" << print_color( "", ::color::rgb<std::uint8_t>( m ) ) << "</td>";
   m = ::color::make::gray< typename model_type::category_type>(  83.3 );   ss << "<td>" << print_color( "", ::color::rgb<std::uint8_t>( m ) ) << "</td>";
   m = ::color::make::gray< typename model_type::category_type>(  90.0 );   ss << "<td>" << print_color( "", ::color::rgb<std::uint8_t>( m ) ) << "</td>";
   m = ::color::make::gray< typename model_type::category_type>( 100.0 );   ss << "<td>" << print_color( "", ::color::rgb<std::uint8_t>( m ) ) << "</td>";

  ss << "</tr>" << std::endl;

  ss << "<tr>" << std::endl;
   ss << "<td>" << "&nbsp;" << "</td>";
   m = ::color::constant::gray_t<  100,   0 >{};   ss << "<td>" << print_color( "", ::color::rgb<std::uint8_t>( m ) ) << "</td>";
   m = ::color::constant::gray_t<   90,  10 >{};   ss << "<td>" << print_color( "", ::color::rgb<std::uint8_t>( m ) ) << "</td>";
   m = ::color::constant::gray_t<    5,   1 >{};   ss << "<td>" << print_color( "", ::color::rgb<std::uint8_t>( m ) ) << "</td>";
   m = ::color::constant::gray_t<   80,  20 >{};   ss << "<td>" << print_color( "", ::color::rgb<std::uint8_t>( m ) ) << "</td>";
   m = ::color::constant::gray_t<   75,  25 >{};   ss << "<td>" << print_color( "", ::color::rgb<std::uint8_t>( m ) ) << "</td>";
   m = ::color::constant::gray_t<   70,  30 >{};   ss << "<td>" << print_color( "", ::color::rgb<std::uint8_t>( m ) ) << "</td>";
   m = ::color::constant::gray_t<    2,   1 >{};   ss << "<td>" << print_color( "", ::color::rgb<std::uint8_t>( m ) ) << "</td>";
   m = ::color::constant::gray_t<   60,  40 >{};   ss << "<td>" << print_color( "", ::color::rgb<std::uint8_t>( m ) ) << "</td>";
   m = ::color::constant::gray_t<   50,  50 >{};   ss << "<td>" << print_color( "", ::color::rgb<std::uint8_t>( m ) ) << "</td>";
   m = ::color::constant::gray_t<   40,  60 >{};   ss << "<td>" << print_color( "", ::color::rgb<std::uint8_t>( m ) ) << "</td>";
   m = ::color::constant::gray_t<    1,   2 >{};   ss << "<td>" << print_color( "", ::color::rgb<std::uint8_t>( m ) ) << "</td>";
   m = ::color::constant::gray_t<   30,  70 >{};   ss << "<td>" << print_color( "", ::color::rgb<std::uint8_t>( m ) ) << "</td>";
   m = ::color::constant::gray_t<   25,  75 >{};   ss << "<td>" << print_color( "", ::color::rgb<std::uint8_t>( m ) ) << "</td>";
   m = ::color::constant::gray_t<   20,  80 >{};   ss << "<td>" << print_color( "", ::color::rgb<std::uint8_t>( m ) ) << "</td>";
   m = ::color::constant::gray_t<    1,   5 >{};   ss << "<td>" << print_color( "", ::color::rgb<std::uint8_t>( m ) ) << "</td>";
   m = ::color::constant::gray_t<   10,  90 >{};   ss << "<td>" << print_color( "", ::color::rgb<std::uint8_t>( m ) ) << "</td>";
   m = ::color::constant::gray_t<    0, 100 >{};   ss << "<td>" << print_color( "", ::color::rgb<std::uint8_t>( m ) ) << "</td>";


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
  ss <<  make_test_gray_single< ::color::hwb< double> >( "hwb" );
  ss <<  make_test_gray_single< ::color::rgb< double> >( "rgb" );
  ss <<  make_test_gray_single< ::color::yiq< double> >( "yiq" );
  ss <<  make_test_gray_single< ::color::yuv< double, ::color::constant::yuv::BT_601_entity> >( "y601" );
  ss <<  make_test_gray_single< ::color::yuv< double, ::color::constant::yuv::BT_709_entity> >( "y706" );

  ss <<  make_test_gray_single< ::color::YCgCo< double> >( "YCgCo" );
  ss <<  make_test_gray_single< ::color::YDbDr< double> >( "YDbDr" );

  ss <<  make_test_gray_single< ::color::YPbPr< double, ::color::constant::YPbPr::BT_601_entity> >(  "YPbPr601"  );
  ss <<  make_test_gray_single< ::color::YPbPr< double, ::color::constant::YPbPr::BT_709_entity> >(  "YPbPr709"  );
  ss <<  make_test_gray_single< ::color::YPbPr< double, ::color::constant::YPbPr::BT_2020_entity> >( "YPbPr2020" );

  ss <<  make_test_gray_single< ::color::xyz< double> >( "xyz" );
  ss <<  make_test_gray_single< ::color::lab< double, ::color::constant::lab::CIE_entity >   >( "LabCIE" );
  ss <<  make_test_gray_single< ::color::lab< double, ::color::constant::lab::Hunter_entity> >( "LabHunter" );

  ss <<  make_test_gray_single< ::color::lms< double, ::color::constant::lms::von_Kries_D65_entity> >( "lmsK65" );
  ss <<  make_test_gray_single< ::color::lms< double, ::color::constant::lms::von_Kries_E_entity > >( "lmsE" );
  ss <<  make_test_gray_single< ::color::lms< double, ::color::constant::lms::BFD_entity > >( "lmsBFD" );
  ss <<  make_test_gray_single< ::color::lms< double, ::color::constant::lms::MCAT02_entity > >( "lmsMCAT02" );

  ss <<  make_test_gray_single< ::color::luv< double> >( "luv" );
  ss <<  make_test_gray_single< ::color::xyy< double> >( "xyy" );

  ss <<  make_test_gray_single< ::color::LabCH< double> >( "LabCH" );
  ss <<  make_test_gray_single< ::color::LuvCH< double> >( "LuvCH" );


  ss << "</table>" << std::endl;

   {
    std::ofstream ofs( std::string( "./gray_test.html" ). c_str() );
    ofs <<  ss.str();
   }

 }
