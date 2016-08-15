#include <iostream>
#include <iomanip>
#include <sstream>
#include <fstream>

#include "color/color.hpp"


template< typename number_name >
 std::string print_triplet( number_name a, number_name b, number_name c )
 {
  std::stringstream ss;
   //ss << "<table border=1 width=100% cellspacing=0 > ";
   //  ss << "<tr>";
       ss << "<td>";
        ss << std::setprecision(10) << (double)a;
       ss << "</td>";
       ss << "<td>";
        ss << std::setprecision(10) << (double)b;
       ss << "</td>";
       ss << "<td>";
        ss << std::setprecision(10) << (double)c;
       ss << "</td>";
   //  ss << "</tr>";
   //ss << "</table> ";
  return ss.str();
 }

template< typename color_model >
 std::string
 print_bound( std::string const& name, std::string const& format ="xxx" )
  {
   typedef typename color_model::bound_type bound_type;
   std::stringstream ss;
   ss << "<tr>";
     ss << "<td>"+ name +  "</td>";
     ss << "<td>"+ format +  "</td>";
     ss << "<td class=\"table_divider\"></td>";
     ss <<  print_triplet( bound_type::minimum(0), bound_type::maximum(0), bound_type::range(0) );
     ss << "<td class=\"table_divider\"></td>";
     if( 1 < color_model::size() ) ss <<  print_triplet( bound_type::minimum(1), bound_type::maximum(1), bound_type::range(1) );
     ss << "<td class=\"table_divider\"></td>";
     if( 2 < color_model::size() ) ss <<  print_triplet( bound_type::minimum(2), bound_type::maximum(2), bound_type::range(2) );
   ss << "<tr>";

   return ss.str();
  }

std::string
print_semi_title( std::string  const& a, std::string  const& b, std::string const& c)
 {
   std::stringstream ss;
    ss << "<tr>" <<  std::endl;
    ss << "<td colspan=\"2\">&nbsp;</td>" <<  std::endl;
    ss << "<td class=\"table_divider\"></td>";
    ss << "<td colspan=\"3\">"+a+"</td>" <<  std::endl;
    ss << "<td class=\"table_divider\"></td>";
    ss << "<td colspan=\"3\">"+b+"</td>" <<  std::endl;
    ss << "<td class=\"table_divider\"></td>";
    ss << "<td colspan=\"3\">"+c+"</td>" <<  std::endl;
    ss << "</tr>" <<  std::endl;
  return ss.str();
 }

void print_bound()
 {
  std::stringstream ss;
  ss << "<table  border=1 cellspacing=0 > " << std::endl;

  
  ss << print_semi_title( "0","N/A","N/A" );
  ss << print_bound< color::gray<std::uint8_t  > >( "color::gray", "std::uint8_t  " ) << std::endl;
  ss << print_bound< color::gray<std::uint16_t > >( "color::gray", "std::uint16_t " ) << std::endl;
  ss << print_bound< color::gray<std::uint32_t > >( "color::gray", "std::uint32_t " ) << std::endl;
  ss << print_bound< color::gray<std::uint64_t > >( "color::gray", "std::uint64_t " ) << std::endl;
  ss << print_bound< color::gray<float         > >( "color::gray", "float         " ) << std::endl;
  ss << print_bound< color::gray<double        > >( "color::gray", "double        " ) << std::endl;
  ss << print_bound< color::gray<long double   > >( "color::gray", "long double   " ) << std::endl;

  ss << print_semi_title( "Red","Green","Blue" );
  ss << print_bound< color::rgb<std::uint8_t  > >( "color::rgb", "std::uint8_t  " ) << std::endl;
  ss << print_bound< color::rgb<std::uint16_t > >( "color::rgb", "std::uint16_t " ) << std::endl;
  ss << print_bound< color::rgb<std::uint32_t > >( "color::rgb", "std::uint32_t " ) << std::endl;
  ss << print_bound< color::rgb<std::uint64_t > >( "color::rgb", "std::uint64_t " ) << std::endl;
  ss << print_bound< color::rgb<float         > >( "color::rgb", "float         " ) << std::endl;
  ss << print_bound< color::rgb<double        > >( "color::rgb", "double        " ) << std::endl;
  ss << print_bound< color::rgb<long double   > >( "color::rgb", "long double   " ) << std::endl;

  ss << print_bound< color::rgb< color::type::split332_t  > >( "color::rgb", "split332_t " ) << std::endl;
  ss << print_bound< color::rgb< color::type::split422_t  > >( "color::rgb", "split422_t " ) << std::endl;
  ss << print_bound< color::rgb< color::type::split655_t  > >( "color::rgb", "split655_t " ) << std::endl;
  ss << print_bound< color::rgb< color::type::split565_t  > >( "color::rgb", "split565_t " ) << std::endl;
  ss << print_bound< color::rgb< color::type::split556_t  > >( "color::rgb", "split556_t " ) << std::endl;
  ss << print_bound< color::rgb< color::type::splitAAA2_t > >( "color::rgb", "splitAAA2_t" ) << std::endl;

  ss << "<tr><td colspan=\"14\"></td></tr>" <<  std::endl;
  ss << print_semi_title( "Cyan","Yellow","Magenta" );
  ss << print_bound< color::cmy<std::uint8_t  > >( "color::cmy", "std::uint8_t  " ) << std::endl;
  ss << print_bound< color::cmy<std::uint16_t > >( "color::cmy", "std::uint16_t " ) << std::endl;
  ss << print_bound< color::cmy<std::uint32_t > >( "color::cmy", "std::uint32_t " ) << std::endl;
  ss << print_bound< color::cmy<std::uint64_t > >( "color::cmy", "std::uint64_t " ) << std::endl;
  ss << print_bound< color::cmy<float         > >( "color::cmy", "float         " ) << std::endl;
  ss << print_bound< color::cmy<double        > >( "color::cmy", "double        " ) << std::endl;
  ss << print_bound< color::cmy<long double   > >( "color::cmy", "long double   " ) << std::endl;
  ss << "<tr><td colspan=\"14\"></td></tr>" <<  std::endl;
  ss << print_semi_title( "Hue","Saturation","Lightness" );
  ss << print_bound< color::hsl<std::uint8_t  > >( "color::hsl", "std::uint8_t  " ) << std::endl;
  ss << print_bound< color::hsl<std::uint16_t > >( "color::hsl", "std::uint16_t " ) << std::endl;
  ss << print_bound< color::hsl<std::uint32_t > >( "color::hsl", "std::uint32_t " ) << std::endl;
  ss << print_bound< color::hsl<std::uint64_t > >( "color::hsl", "std::uint64_t " ) << std::endl;
  ss << print_bound< color::hsl<float         > >( "color::hsl", "float         " ) << std::endl;
  ss << print_bound< color::hsl<double        > >( "color::hsl", "double        " ) << std::endl;
  ss << print_bound< color::hsl<long double   > >( "color::hsl", "long double   " ) << std::endl;
  ss << "<tr><td colspan=\"14\"></td></tr>" <<  std::endl;

  ss << print_semi_title( "Hue", "Saturation", "Value" );
  ss << print_bound< color::hsv<std::uint8_t  > >( "color::hsv", "std::uint8_t  " ) << std::endl;
  ss << print_bound< color::hsv<std::uint16_t > >( "color::hsv", "std::uint16_t " ) << std::endl;
  ss << print_bound< color::hsv<std::uint32_t > >( "color::hsv", "std::uint32_t " ) << std::endl;
  ss << print_bound< color::hsv<std::uint64_t > >( "color::hsv", "std::uint64_t " ) << std::endl;
  ss << print_bound< color::hsv<float         > >( "color::hsv", "float         " ) << std::endl;
  ss << print_bound< color::hsv<double        > >( "color::hsv", "double        " ) << std::endl;
  ss << print_bound< color::hsv<long double   > >( "color::hsv", "long double   " ) << std::endl;
  ss << "<tr><td colspan=\"14\"></td></tr>" <<  std::endl;

  ss << print_semi_title( "Hue", "Saturation", "Intesity" );
  ss << print_bound< color::hsi<std::uint8_t  > >( "color::hsi", "std::uint8_t  " ) << std::endl;
  ss << print_bound< color::hsi<std::uint16_t > >( "color::hsi", "std::uint16_t " ) << std::endl;
  ss << print_bound< color::hsi<std::uint32_t > >( "color::hsi", "std::uint32_t " ) << std::endl;
  ss << print_bound< color::hsi<std::uint64_t > >( "color::hsi", "std::uint64_t " ) << std::endl;
  ss << print_bound< color::hsi<float         > >( "color::hsi", "float         " ) << std::endl;
  ss << print_bound< color::hsi<double        > >( "color::hsi", "double        " ) << std::endl;
  ss << print_bound< color::hsi<long double   > >( "color::hsi", "long double   " ) << std::endl;
  ss << "<tr><td colspan=\"14\"></td></tr>" <<  std::endl;


  ss << print_semi_title( "(Y)Luminance","In-phase","Quadrature" );
  ss << print_bound< color::yiq<std::uint8_t  > >( "color::yiq", "std::uint8_t  " ) << std::endl;
  ss << print_bound< color::yiq<std::uint16_t > >( "color::yiq", "std::uint16_t " ) << std::endl;
  ss << print_bound< color::yiq<std::uint32_t > >( "color::yiq", "std::uint32_t " ) << std::endl;
  ss << print_bound< color::yiq<std::uint64_t > >( "color::yiq", "std::uint64_t " ) << std::endl;
  ss << print_bound< color::yiq<float         > >( "color::yiq", "float         " ) << std::endl;
  ss << print_bound< color::yiq<double        > >( "color::yiq", "double        " ) << std::endl;
  ss << print_bound< color::yiq<long double   > >( "color::yiq", "long double   " ) << std::endl;
  ss << "<tr><td colspan=\"14\"></td></tr>" <<  std::endl;

  ss << print_semi_title( "(Y)Luminance","(U)Chrominance","(V)Chrominance" );
  ss << print_bound< color::yuv<std::uint8_t , ::color::constant::yuv::BT_601_entity > >( "color::yuv601", "std::uint8_t  " ) << std::endl;
  ss << print_bound< color::yuv<std::uint16_t, ::color::constant::yuv::BT_601_entity > >( "color::yuv601", "std::uint16_t " ) << std::endl;
  ss << print_bound< color::yuv<std::uint32_t, ::color::constant::yuv::BT_601_entity > >( "color::yuv601", "std::uint32_t " ) << std::endl;
  ss << print_bound< color::yuv<std::uint64_t, ::color::constant::yuv::BT_601_entity > >( "color::yuv601", "std::uint64_t " ) << std::endl;
  ss << print_bound< color::yuv<float        , ::color::constant::yuv::BT_601_entity > >( "color::yuv601", "float         " ) << std::endl;
  ss << print_bound< color::yuv<double       , ::color::constant::yuv::BT_601_entity > >( "color::yuv601", "double        " ) << std::endl;
  ss << print_bound< color::yuv<long double  , ::color::constant::yuv::BT_601_entity > >( "color::yuv601", "long double   " ) << std::endl;

  ss << print_semi_title( "(Y)Luminance","(U)Chrominance","(V)Chrominance" );
  ss << print_bound< color::yuv<std::uint8_t , ::color::constant::yuv::BT_709_entity  > >( "color::yuv709", "std::uint8_t  " ) << std::endl;
  ss << print_bound< color::yuv<std::uint16_t, ::color::constant::yuv::BT_709_entity  > >( "color::yuv709", "std::uint16_t " ) << std::endl;
  ss << print_bound< color::yuv<std::uint32_t, ::color::constant::yuv::BT_709_entity  > >( "color::yuv709", "std::uint32_t " ) << std::endl;
  ss << print_bound< color::yuv<std::uint64_t, ::color::constant::yuv::BT_709_entity  > >( "color::yuv709", "std::uint64_t " ) << std::endl;
  ss << print_bound< color::yuv<float        , ::color::constant::yuv::BT_709_entity  > >( "color::yuv709", "float         " ) << std::endl;
  ss << print_bound< color::yuv<double       , ::color::constant::yuv::BT_709_entity  > >( "color::yuv709", "double        " ) << std::endl;
  ss << print_bound< color::yuv<long double  , ::color::constant::yuv::BT_709_entity  > >( "color::yuv709", "long double   " ) << std::endl;
  ss << "<tr><td colspan=\"14\"></td></tr>" <<  std::endl;

  ss << print_semi_title( "Cyan","Yellow","Magenta" );
  ss << print_bound< color::cmyk<std::uint8_t > >( "color::cmyk", "std::uint8_t  " ) << std::endl;
  ss << print_bound< color::cmyk<std::uint16_t> >( "color::cmyk", "std::uint16_t " ) << std::endl;
  ss << print_bound< color::cmyk<std::uint32_t> >( "color::cmyk", "std::uint32_t " ) << std::endl;
  ss << print_bound< color::cmyk<std::uint64_t> >( "color::cmyk", "std::uint64_t " ) << std::endl;
  ss << print_bound< color::cmyk<float        > >( "color::cmyk", "float         " ) << std::endl;
  ss << print_bound< color::cmyk<double       > >( "color::cmyk", "double        " ) << std::endl;
  ss << print_bound< color::cmyk<long double  > >( "color::cmyk", "long double   " ) << std::endl;
  ss << "<tr><td colspan=\"14\"></td></tr>" <<  std::endl;

  ss << print_semi_title( "Y","Cg","Co" );
  ss << print_bound< color::YCgCo<std::uint8_t > >( "color::YCgCo", "std::uint8_t  " ) << std::endl;
  ss << print_bound< color::YCgCo<std::uint16_t> >( "color::YCgCo", "std::uint16_t " ) << std::endl;
  ss << print_bound< color::YCgCo<std::uint32_t> >( "color::YCgCo", "std::uint32_t " ) << std::endl;
  ss << print_bound< color::YCgCo<std::uint64_t> >( "color::YCgCo", "std::uint64_t " ) << std::endl;
  ss << print_bound< color::YCgCo<float        > >( "color::YCgCo", "float         " ) << std::endl;
  ss << print_bound< color::YCgCo<double       > >( "color::YCgCo", "double        " ) << std::endl;
  ss << print_bound< color::YCgCo<long double  > >( "color::YCgCo", "long double   " ) << std::endl;

  ss << print_semi_title( "Y","Db","Dr" );
  ss << print_bound< color::YDbDr<std::uint8_t > >( "color::YDbDr", "std::uint8_t  " ) << std::endl;
  ss << print_bound< color::YDbDr<std::uint16_t> >( "color::YDbDr", "std::uint16_t " ) << std::endl;
  ss << print_bound< color::YDbDr<std::uint32_t> >( "color::YDbDr", "std::uint32_t " ) << std::endl;
  ss << print_bound< color::YDbDr<std::uint64_t> >( "color::YDbDr", "std::uint64_t " ) << std::endl;
  ss << print_bound< color::YDbDr<float        > >( "color::YDbDr", "float         " ) << std::endl;
  ss << print_bound< color::YDbDr<double       > >( "color::YDbDr", "double        " ) << std::endl;
  ss << print_bound< color::YDbDr<long double  > >( "color::YDbDr", "long double   " ) << std::endl;

  ss << print_semi_title( "Y","Pb","Pr" );
  ss << print_bound< color::YPbPr<std::uint8_t , ::color::constant::YPbPr::BT_601_entity> >( "color::YPbPr601", "std::uint8_t  " ) << std::endl;
  ss << print_bound< color::YPbPr<std::uint16_t, ::color::constant::YPbPr::BT_601_entity> >( "color::YPbPr601", "std::uint16_t " ) << std::endl;
  ss << print_bound< color::YPbPr<std::uint32_t, ::color::constant::YPbPr::BT_601_entity> >( "color::YPbPr601", "std::uint32_t " ) << std::endl;
  ss << print_bound< color::YPbPr<std::uint64_t, ::color::constant::YPbPr::BT_601_entity> >( "color::YPbPr601", "std::uint64_t " ) << std::endl;
  ss << print_bound< color::YPbPr<float        , ::color::constant::YPbPr::BT_601_entity> >( "color::YPbPr601", "float         " ) << std::endl;
  ss << print_bound< color::YPbPr<double       , ::color::constant::YPbPr::BT_601_entity> >( "color::YPbPr601", "double        " ) << std::endl;
  ss << print_bound< color::YPbPr<long double  , ::color::constant::YPbPr::BT_601_entity> >( "color::YPbPr601", "long double   " ) << std::endl;

  ss << print_semi_title( "Y","Pb","Pr" );
  ss << print_bound< color::YPbPr<std::uint8_t , ::color::constant::YPbPr::BT_709_entity> >( "color::YPbPr709", "std::uint8_t  " ) << std::endl;
  ss << print_bound< color::YPbPr<std::uint16_t, ::color::constant::YPbPr::BT_709_entity> >( "color::YPbPr709", "std::uint16_t " ) << std::endl;
  ss << print_bound< color::YPbPr<std::uint32_t, ::color::constant::YPbPr::BT_709_entity> >( "color::YPbPr709", "std::uint32_t " ) << std::endl;
  ss << print_bound< color::YPbPr<std::uint64_t, ::color::constant::YPbPr::BT_709_entity> >( "color::YPbPr709", "std::uint64_t " ) << std::endl;
  ss << print_bound< color::YPbPr<float        , ::color::constant::YPbPr::BT_709_entity> >( "color::YPbPr709", "float         " ) << std::endl;
  ss << print_bound< color::YPbPr<double       , ::color::constant::YPbPr::BT_709_entity> >( "color::YPbPr709", "double        " ) << std::endl;
  ss << print_bound< color::YPbPr<long double  , ::color::constant::YPbPr::BT_709_entity> >( "color::YPbPr709", "long double   " ) << std::endl;

  ss << print_semi_title( "Y","Pb","Pr" );
  ss << print_bound< color::YPbPr<std::uint8_t , ::color::constant::YPbPr::BT_2020_entity > >( "color::YPbPr2020", "std::uint8_t  " ) << std::endl;
  ss << print_bound< color::YPbPr<std::uint16_t, ::color::constant::YPbPr::BT_2020_entity > >( "color::YPbPr2020", "std::uint16_t " ) << std::endl;
  ss << print_bound< color::YPbPr<std::uint32_t, ::color::constant::YPbPr::BT_2020_entity > >( "color::YPbPr2020", "std::uint32_t " ) << std::endl;
  ss << print_bound< color::YPbPr<std::uint64_t, ::color::constant::YPbPr::BT_2020_entity > >( "color::YPbPr2020", "std::uint64_t " ) << std::endl;
  ss << print_bound< color::YPbPr<float        , ::color::constant::YPbPr::BT_2020_entity > >( "color::YPbPr2020", "float         " ) << std::endl;
  ss << print_bound< color::YPbPr<double       , ::color::constant::YPbPr::BT_2020_entity > >( "color::YPbPr2020", "double        " ) << std::endl;
  ss << print_bound< color::YPbPr<long double  , ::color::constant::YPbPr::BT_2020_entity > >( "color::YPbPr2020", "long double   " ) << std::endl;

  //ss << "</table> ";

   {
    std::ofstream ofs(  "./bound.html"  );
    ofs <<  ss.str();
   }

 }