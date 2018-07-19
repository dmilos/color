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
 print_bound4( std::string const& name, std::string const& format ="xxx" )
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
     else ss << "<td>" << "N/A" << "</td>" << "<td>" << "N/A" << "</td>" << "<td>" << "N/A" << "</td>";
     ss << "<td class=\"table_divider\"></td>";
     if( 2 < color_model::size() ) ss <<  print_triplet( bound_type::minimum(2), bound_type::maximum(2), bound_type::range(2) );
     else ss << "<td>" << "N/A" << "</td>" << "<td>" << "N/A" << "</td>" << "<td>" << "N/A" << "</td>";
     ss << "<td class=\"table_divider\"></td>";
     if( 3 < color_model::size() ) ss <<  print_triplet( bound_type::minimum(3), bound_type::maximum(3), bound_type::range(3) );
     else ss << "<td>" << "N/A" << "</td>" << "<td>" << "N/A" << "</td>" << "<td>" << "N/A" << "</td>";
   ss << "</tr>";

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
     else ss << "<td>" << "N/A" << "</td>" << "<td>" << "N/A" << "</td>" << "<td>" << "N/A" << "</td>";
     ss << "<td class=\"table_divider\"></td>";
     if( 2 < color_model::size() ) ss <<  print_triplet( bound_type::minimum(2), bound_type::maximum(2), bound_type::range(2) );
     else ss << "<td>" << "N/A" << "</td>" << "<td>" << "N/A" << "</td>" << "<td>" << "N/A" << "</td>";
   ss << "</tr>";

   return ss.str();
  }

std::string
print_semi_title4( std::string  const& a, std::string  const& b, std::string const& c, std::string const& d )
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
    ss << "<td class=\"table_divider\"></td>";
    ss << "<td colspan=\"3\">"+d+"</td>" <<  std::endl;
    ss << "</tr>" <<  std::endl;
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

void print_bound_rgb()
 {
  std::stringstream ss;
  ss << "<table  border=1 cellspacing=0 > " << std::endl;

  ss << print_semi_title4( "Red","Green","Blue", "(Alpha)?" );

  ss << print_bound4< ::color::model< ::color::category::rgb_uint8        > >( "color::rgb", "rgb_uint8     " ) << std::endl;
  ss << print_bound4< ::color::model< ::color::category::rgb_uint16       > >( "color::rgb", "rgb_uint16    " ) << std::endl;
  ss << print_bound4< ::color::model< ::color::category::rgb_uint32       > >( "color::rgb", "rgb_uint32    " ) << std::endl;
  ss << print_bound4< ::color::model< ::color::category::rgb_uint64       > >( "color::rgb", "rgb_uint64    " ) << std::endl;
  ss << print_bound4< ::color::model< ::color::category::rgb_float        > >( "color::rgb", "rgb_float     " ) << std::endl;
  ss << print_bound4< ::color::model< ::color::category::rgb_double       > >( "color::rgb", "rgb_double    " ) << std::endl;
  ss << print_bound4< ::color::model< ::color::category::rgb_ldouble      > >( "color::rgb", "rgb_ldouble   " ) << std::endl;
  ss << print_bound4< ::color::model< ::color::category::rgb_pack<2,3,3> > >( "color::rgb", "rgb_split233  " ) << std::endl;
  ss << print_bound4< ::color::model< ::color::category::rgb_pack<3,2,3> > >( "color::rgb", "rgb_split323  " ) << std::endl;
  ss << print_bound4< ::color::model< ::color::category::rgb_pack<3,3,2> > >( "color::rgb", "rgb_split332  " ) << std::endl;
  ss << print_bound4< ::color::model< ::color::category::rgb_pack<4,2,2> > >( "color::rgb", "rgb_split422  " ) << std::endl;
  ss << print_bound4< ::color::model< ::color::category::rgb_pack<5,5,6> > >( "color::rgb", "rgb_split556  " ) << std::endl;
  ss << print_bound4< ::color::model< ::color::category::rgb_pack<5,6,5> > >( "color::rgb", "rgb_split565  " ) << std::endl;
  ss << print_bound4< ::color::model< ::color::category::rgb_pack<6,5,5> > >( "color::rgb", "rgb_split655  " ) << std::endl;

  ss << print_bound4< ::color::model< ::color::category::rgba_uint8        > >( "color::rgb", "rgba_uint8    " ) << std::endl;
  ss << print_bound4< ::color::model< ::color::category::rgba_uint16       > >( "color::rgb", "rgba_uint16   " ) << std::endl;
  ss << print_bound4< ::color::model< ::color::category::rgba_uint32       > >( "color::rgb", "rgba_uint32   " ) << std::endl;
  ss << print_bound4< ::color::model< ::color::category::rgba_uint64       > >( "color::rgb", "rgba_uint64   " ) << std::endl;
  ss << print_bound4< ::color::model< ::color::category::rgba_float        > >( "color::rgb", "rgba_float    " ) << std::endl;
  ss << print_bound4< ::color::model< ::color::category::rgba_double       > >( "color::rgb", "rgba_double   " ) << std::endl;
  ss << print_bound4< ::color::model< ::color::category::rgba_ldouble      > >( "color::rgb", "rgba_ldouble  " ) << std::endl;
  ss << print_bound4< ::color::model< ::color::category::rgba_pack<  2,  2,  2,  2 > > >( "color::rgb", "rgba_split2222" ) << std::endl;
  ss << print_bound4< ::color::model< ::color::category::rgba_pack<  4,  4,  4,  4 > > >( "color::rgb", "rgba_split4444" ) << std::endl;
  ss << print_bound4< ::color::model< ::color::category::rgba_pack<  8,  8,  8,  8 > > >( "color::rgb", "rgba_split8888" ) << std::endl;
  ss << print_bound4< ::color::model< ::color::category::rgba_pack<  5,  5,  5,  1 > > >( "color::rgb", "rgba_split5551" ) << std::endl;
  ss << print_bound4< ::color::model< ::color::category::rgba_pack< 10, 10, 10,  2 > > >( "color::rgb", "rgba_splitAAA2" ) << std::endl;
  ss << print_bound4< ::color::model< ::color::category::rgba_pack< 16, 16, 16, 16 > > >( "color::rgb", "rgba_splitGGGG" ) << std::endl;

  ss << print_bound4< ::color::model< ::color::category::argb_uint8     > >( "color::rgb", "argb_uint8    " ) << std::endl;
  ss << print_bound4< ::color::model< ::color::category::argb_uint16    > >( "color::rgb", "argb_uint16   " ) << std::endl;
  ss << print_bound4< ::color::model< ::color::category::argb_uint32    > >( "color::rgb", "argb_uint32   " ) << std::endl;
  ss << print_bound4< ::color::model< ::color::category::argb_uint64    > >( "color::rgb", "argb_uint64   " ) << std::endl;
  ss << print_bound4< ::color::model< ::color::category::argb_float     > >( "color::rgb", "argb_float    " ) << std::endl;
  ss << print_bound4< ::color::model< ::color::category::argb_double    > >( "color::rgb", "argb_double   " ) << std::endl;
  ss << print_bound4< ::color::model< ::color::category::argb_ldouble   > >( "color::rgb", "argb_ldouble  " ) << std::endl;
  ss << print_bound4< ::color::model< ::color::category::argb_pack<2,2,2,2> > >( "color::rgb", "argb_split2222" ) << std::endl;
  ss << print_bound4< ::color::model< ::color::category::argb_pack<4,4,4,4> > >( "color::rgb", "argb_split4444" ) << std::endl;
  ss << print_bound4< ::color::model< ::color::category::argb_pack<8,8,8,8> > >( "color::rgb", "argb_split8888" ) << std::endl;
  ss << print_bound4< ::color::model< ::color::category::argb_pack<1,5,5,5> > >( "color::rgb", "argb_split1555" ) << std::endl;
  ss << print_bound4< ::color::model< ::color::category::argb_pack<2,10,10,10> > >( "color::rgb", "argb_split2AAA" ) << std::endl;
  ss << print_bound4< ::color::model< ::color::category::argb_pack<16,16,16,16> > >( "color::rgb", "argb_splitGGGG" ) << std::endl;

  ss << print_bound4< ::color::model< ::color::category::bgr_uint8      > >( "color::rgb", "bgr_uint8     " ) << std::endl;
  ss << print_bound4< ::color::model< ::color::category::bgr_uint16     > >( "color::rgb", "bgr_uint16    " ) << std::endl;
  ss << print_bound4< ::color::model< ::color::category::bgr_uint32     > >( "color::rgb", "bgr_uint32    " ) << std::endl;
  ss << print_bound4< ::color::model< ::color::category::bgr_uint64     > >( "color::rgb", "bgr_uint64    " ) << std::endl;
  ss << print_bound4< ::color::model< ::color::category::bgr_float      > >( "color::rgb", "bgr_float     " ) << std::endl;
  ss << print_bound4< ::color::model< ::color::category::bgr_double     > >( "color::rgb", "bgr_double    " ) << std::endl;
  ss << print_bound4< ::color::model< ::color::category::bgr_ldouble    > >( "color::rgb", "bgr_ldouble   " ) << std::endl;
  ss << print_bound4< ::color::model< ::color::category::bgr_pack<2,3,3>   > >( "color::rgb", "bgr_split233  " ) << std::endl;
  ss << print_bound4< ::color::model< ::color::category::bgr_pack<3,2,3>   > >( "color::rgb", "bgr_split323  " ) << std::endl;
  ss << print_bound4< ::color::model< ::color::category::bgr_pack<3,3,2>   > >( "color::rgb", "bgr_split332  " ) << std::endl;
  ss << print_bound4< ::color::model< ::color::category::bgr_pack<4,2,2>   > >( "color::rgb", "bgr_split422  " ) << std::endl;
  ss << print_bound4< ::color::model< ::color::category::bgr_pack<5,5,6>   > >( "color::rgb", "bgr_split556  " ) << std::endl;
  ss << print_bound4< ::color::model< ::color::category::bgr_pack<5,6,5>   > >( "color::rgb", "bgr_split565  " ) << std::endl;
  ss << print_bound4< ::color::model< ::color::category::bgr_pack<6,5,5>   > >( "color::rgb", "bgr_split655  " ) << std::endl;

  ss << print_bound4< ::color::model< ::color::category::bgra_uint8     > >( "color::rgb", "bgra_uint8    " ) << std::endl;
  ss << print_bound4< ::color::model< ::color::category::bgra_uint16    > >( "color::rgb", "bgra_uint16   " ) << std::endl;
  ss << print_bound4< ::color::model< ::color::category::bgra_uint32    > >( "color::rgb", "bgra_uint32   " ) << std::endl;
  ss << print_bound4< ::color::model< ::color::category::bgra_uint64    > >( "color::rgb", "bgra_uint64   " ) << std::endl;
  ss << print_bound4< ::color::model< ::color::category::bgra_float     > >( "color::rgb", "bgra_float    " ) << std::endl;
  ss << print_bound4< ::color::model< ::color::category::bgra_double    > >( "color::rgb", "bgra_double   " ) << std::endl;
  ss << print_bound4< ::color::model< ::color::category::bgra_ldouble   > >( "color::rgb", "bgra_ldouble  " ) << std::endl;
  ss << print_bound4< ::color::model< ::color::category::bgra_pack<2,2,2,2> > >( "color::rgb", "bgra_split2222" ) << std::endl;
  ss << print_bound4< ::color::model< ::color::category::bgra_pack<4,4,4,4> > >( "color::rgb", "bgra_split4444" ) << std::endl;
  ss << print_bound4< ::color::model< ::color::category::bgra_pack<5,5,5,1> > >( "color::rgb", "bgra_split5551" ) << std::endl;
  ss << print_bound4< ::color::model< ::color::category::bgra_pack<8,8,8,8> > >( "color::rgb", "bgra_split8888" ) << std::endl;
  ss << print_bound4< ::color::model< ::color::category::bgra_pack<10,10,10,2> > >( "color::rgb", "bgra_splitAAA2" ) << std::endl;
  ss << print_bound4< ::color::model< ::color::category::bgra_pack<16,16,16,16> > >( "color::rgb", "bgra_splitGGGG" ) << std::endl;

  ss << print_bound4< ::color::model< ::color::category::abgr_uint8     > >( "color::rgb", "abgr_uint8    " ) << std::endl;
  ss << print_bound4< ::color::model< ::color::category::abgr_uint16    > >( "color::rgb", "abgr_uint16   " ) << std::endl;
  ss << print_bound4< ::color::model< ::color::category::abgr_uint32    > >( "color::rgb", "abgr_uint32   " ) << std::endl;
  ss << print_bound4< ::color::model< ::color::category::abgr_uint64    > >( "color::rgb", "abgr_uint64   " ) << std::endl;
  ss << print_bound4< ::color::model< ::color::category::abgr_float     > >( "color::rgb", "abgr_float    " ) << std::endl;
  ss << print_bound4< ::color::model< ::color::category::abgr_double    > >( "color::rgb", "abgr_double   " ) << std::endl;
  ss << print_bound4< ::color::model< ::color::category::abgr_ldouble   > >( "color::rgb", "abgr_ldouble  " ) << std::endl;
  ss << print_bound4< ::color::model< ::color::category::abgr_pack<2,2,2,2> > >( "color::rgb", "abgr_split2222" ) << std::endl;
  ss << print_bound4< ::color::model< ::color::category::abgr_pack<4,4,4,4> > >( "color::rgb", "abgr_split4444" ) << std::endl;
  ss << print_bound4< ::color::model< ::color::category::abgr_pack<1,5,5,5> > >( "color::rgb", "abgr_split1555" ) << std::endl;
  ss << print_bound4< ::color::model< ::color::category::abgr_pack<8,8,8,8> > >( "color::rgb", "abgr_split8888" ) << std::endl;
  ss << print_bound4< ::color::model< ::color::category::abgr_pack<2,10,10,10> > >( "color::rgb", "abgr_split2AAA" ) << std::endl;
  ss << print_bound4< ::color::model< ::color::category::abgr_pack<16,16,16,16> > >( "color::rgb", "abgr_splitGGGG" ) << std::endl;

  //ss << "</table> ";

   {
    std::ofstream ofs(  "./bound-rgb.html"  );
    ofs <<  ss.str();
   }

}

void print_bound()
 {
  print_bound_rgb();
  std::stringstream ss;
  ss << "<table  border=1 cellspacing=0 > " << std::endl;

  ss << print_semi_title( "0","N/A","N/A" );

  ss << print_semi_title( "Cyan","Yellow","Magenta" );
  ss << print_bound< color::cmy<std::uint8_t  > >( "color::cmy", "std::uint8_t  " ) << std::endl;
  ss << print_bound< color::cmy<std::uint16_t > >( "color::cmy", "std::uint16_t " ) << std::endl;
  ss << print_bound< color::cmy<std::uint32_t > >( "color::cmy", "std::uint32_t " ) << std::endl;
  ss << print_bound< color::cmy<std::uint64_t > >( "color::cmy", "std::uint64_t " ) << std::endl;
  ss << print_bound< color::cmy<float         > >( "color::cmy", "float         " ) << std::endl;
  ss << print_bound< color::cmy<double        > >( "color::cmy", "double        " ) << std::endl;
  ss << print_bound< color::cmy<long double   > >( "color::cmy", "long double   " ) << std::endl;
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

  ss << print_bound< color::gray<std::uint8_t  > >( "color::gray", "std::uint8_t  " ) << std::endl;
  ss << print_bound< color::gray<std::uint16_t > >( "color::gray", "std::uint16_t " ) << std::endl;
  ss << print_bound< color::gray<std::uint32_t > >( "color::gray", "std::uint32_t " ) << std::endl;
  ss << print_bound< color::gray<std::uint64_t > >( "color::gray", "std::uint64_t " ) << std::endl;
  ss << print_bound< color::gray<float         > >( "color::gray", "float         " ) << std::endl;
  ss << print_bound< color::gray<double        > >( "color::gray", "double        " ) << std::endl;
  ss << print_bound< color::gray<long double   > >( "color::gray", "long double   " ) << std::endl;
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

  ss << print_semi_title( "hue","white","black" );
  ss << print_bound< color::hwb<std::uint8_t  > >( "color::hwb", "std::uint8_t  " ) << std::endl;
  ss << print_bound< color::hwb<std::uint16_t > >( "color::hwb", "std::uint16_t " ) << std::endl;
  ss << print_bound< color::hwb<std::uint32_t > >( "color::hwb", "std::uint32_t " ) << std::endl;
  ss << print_bound< color::hwb<std::uint64_t > >( "color::hwb", "std::uint64_t " ) << std::endl;
  ss << print_bound< color::hwb<float         > >( "color::hwb", "float         " ) << std::endl;
  ss << print_bound< color::hwb<double        > >( "color::hwb", "double        " ) << std::endl;
  ss << print_bound< color::hwb<long double   > >( "color::hwb", "long double   " ) << std::endl;
  ss << "<tr><td colspan=\"14\"></td></tr>" <<  std::endl;

  ss << print_semi_title( "L","a","b" );
  ss << print_bound< color::lab<std::uint8_t , ::color::constant::lab::CIE_entity > >( "color::labCIE", "std::uint8_t  " ) << std::endl;
  ss << print_bound< color::lab<std::uint16_t, ::color::constant::lab::CIE_entity > >( "color::labCIE", "std::uint16_t " ) << std::endl;
  ss << print_bound< color::lab<std::uint32_t, ::color::constant::lab::CIE_entity > >( "color::labCIE", "std::uint32_t " ) << std::endl;
  ss << print_bound< color::lab<std::uint64_t, ::color::constant::lab::CIE_entity > >( "color::labCIE", "std::uint64_t " ) << std::endl;
  ss << print_bound< color::lab<std::int8_t ,  ::color::constant::lab::CIE_entity > >( "color::labCIE", "std::int8_t   " ) << std::endl;
  ss << print_bound< color::lab<std::int16_t,  ::color::constant::lab::CIE_entity > >( "color::labCIE", "std::int16_t  " ) << std::endl;
  ss << print_bound< color::lab<std::int32_t,  ::color::constant::lab::CIE_entity > >( "color::labCIE", "std::int32_t  " ) << std::endl;
  ss << print_bound< color::lab<std::int64_t,  ::color::constant::lab::CIE_entity > >( "color::labCIE", "std::int64_t  " ) << std::endl;
  ss << print_bound< color::lab<float        , ::color::constant::lab::CIE_entity > >( "color::labCIE", "float         " ) << std::endl;
  ss << print_bound< color::lab<double       , ::color::constant::lab::CIE_entity > >( "color::labCIE", "double        " ) << std::endl;
  ss << print_bound< color::lab<long double  , ::color::constant::lab::CIE_entity > >( "color::labCIE", "long double   " ) << std::endl;
  ss << "<tr><td colspan=\"14\"></td></tr>" <<  std::endl;

  ss << print_semi_title( "L","a","b" );
  ss << print_bound< color::lab<std::uint8_t , ::color::constant::lab::Hunter_entity > >( "color::labHunter", "std::uint8_t  " ) << std::endl;
  ss << print_bound< color::lab<std::uint16_t, ::color::constant::lab::Hunter_entity > >( "color::labHunter", "std::uint16_t " ) << std::endl;
  ss << print_bound< color::lab<std::uint32_t, ::color::constant::lab::Hunter_entity > >( "color::labHunter", "std::uint32_t " ) << std::endl;
  ss << print_bound< color::lab<std::uint64_t, ::color::constant::lab::Hunter_entity > >( "color::labHunter", "std::uint64_t " ) << std::endl;
  ss << print_bound< color::lab<std::int8_t  , ::color::constant::lab::Hunter_entity > >( "color::labHunter", "std::int8_t   " ) << std::endl;
  ss << print_bound< color::lab<std::int16_t , ::color::constant::lab::Hunter_entity > >( "color::labHunter", "std::int16_t  " ) << std::endl;
  ss << print_bound< color::lab<std::int32_t , ::color::constant::lab::Hunter_entity > >( "color::labHunter", "std::int32_t  " ) << std::endl;
  ss << print_bound< color::lab<std::int64_t , ::color::constant::lab::Hunter_entity > >( "color::labHunter", "std::int64_t  " ) << std::endl;
  ss << print_bound< color::lab<float        , ::color::constant::lab::Hunter_entity > >( "color::labHunter", "float         " ) << std::endl;
  ss << print_bound< color::lab<double       , ::color::constant::lab::Hunter_entity > >( "color::labHunter", "double        " ) << std::endl;
  ss << print_bound< color::lab<long double  , ::color::constant::lab::Hunter_entity > >( "color::labHunter", "long double   " ) << std::endl;
  ss << "<tr><td colspan=\"14\"></td></tr>" <<  std::endl;

  ss << print_semi_title( "L","chroma","hue" );
  ss << print_bound< color::LabCH<std::uint8_t  > >( "color::LabCH", "std::uint8_t  " ) << std::endl;
  ss << print_bound< color::LabCH<std::uint16_t > >( "color::LabCH", "std::uint16_t " ) << std::endl;
  ss << print_bound< color::LabCH<std::uint32_t > >( "color::LabCH", "std::uint32_t " ) << std::endl;
  ss << print_bound< color::LabCH<std::uint64_t > >( "color::LabCH", "std::uint64_t " ) << std::endl;
  ss << print_bound< color::LabCH<float         > >( "color::LabCH", "float         " ) << std::endl;
  ss << print_bound< color::LabCH<double        > >( "color::LabCH", "double        " ) << std::endl;
  ss << print_bound< color::LabCH<long double   > >( "color::LabCH", "long double   " ) << std::endl;
  ss << "<tr><td colspan=\"14\"></td></tr>" <<  std::endl;

  ss << print_semi_title( "L","m","s" );
  ss << print_bound< color::lms<std::uint8_t , ::color::constant::lms::von_Kries_D65_entity > >( "color::lmsKriesD65", "std::uint8_t  " ) << std::endl;
  ss << print_bound< color::lms<std::uint16_t, ::color::constant::lms::von_Kries_D65_entity > >( "color::lmsKriesD65", "std::uint16_t " ) << std::endl;
  ss << print_bound< color::lms<std::uint32_t, ::color::constant::lms::von_Kries_D65_entity > >( "color::lmsKriesD65", "std::uint32_t " ) << std::endl;
  ss << print_bound< color::lms<std::uint64_t, ::color::constant::lms::von_Kries_D65_entity > >( "color::lmsKriesD65", "std::uint64_t " ) << std::endl;

  ss << print_bound< color::lms<std::int8_t  , ::color::constant::lms::von_Kries_D65_entity > >( "color::lmsKriesD65", "std::int8_t   " ) << std::endl;
  ss << print_bound< color::lms<std::int16_t , ::color::constant::lms::von_Kries_D65_entity > >( "color::lmsKriesD65", "std::int16_t  " ) << std::endl;
  ss << print_bound< color::lms<std::int32_t , ::color::constant::lms::von_Kries_D65_entity > >( "color::lmsKriesD65", "std::int32_t  " ) << std::endl;
  ss << print_bound< color::lms<std::int64_t , ::color::constant::lms::von_Kries_D65_entity > >( "color::lmsKriesD65", "std::int64_t  " ) << std::endl;

  ss << print_bound< color::lms<float        , ::color::constant::lms::von_Kries_D65_entity > >( "color::lmsKriesD65", "float         " ) << std::endl;
  ss << print_bound< color::lms<double       , ::color::constant::lms::von_Kries_D65_entity > >( "color::lmsKriesD65", "double        " ) << std::endl;
  ss << print_bound< color::lms<long double  , ::color::constant::lms::von_Kries_D65_entity > >( "color::lmsKriesD65", "long double   " ) << std::endl;
  ss << "<tr><td colspan=\"14\"></td></tr>" <<  std::endl;

  ss << print_semi_title( "L","m","s" );
  ss << print_bound< color::lms<std::uint8_t , ::color::constant::lms::von_Kries_E_entity > >( "color::lmsKriesE", "std::uint8_t  " ) << std::endl;
  ss << print_bound< color::lms<std::uint16_t, ::color::constant::lms::von_Kries_E_entity > >( "color::lmsKriesE", "std::uint16_t " ) << std::endl;
  ss << print_bound< color::lms<std::uint32_t, ::color::constant::lms::von_Kries_E_entity > >( "color::lmsKriesE", "std::uint32_t " ) << std::endl;
  ss << print_bound< color::lms<std::uint64_t, ::color::constant::lms::von_Kries_E_entity > >( "color::lmsKriesE", "std::uint64_t " ) << std::endl;

  ss << print_bound< color::lms<std::int8_t  , ::color::constant::lms::von_Kries_E_entity > >( "color::lmsKriesE", "std::int8_t   " ) << std::endl;
  ss << print_bound< color::lms<std::int16_t , ::color::constant::lms::von_Kries_E_entity > >( "color::lmsKriesE", "std::int16_t  " ) << std::endl;
  ss << print_bound< color::lms<std::int32_t , ::color::constant::lms::von_Kries_E_entity > >( "color::lmsKriesE", "std::int32_t  " ) << std::endl;
  ss << print_bound< color::lms<std::int64_t , ::color::constant::lms::von_Kries_E_entity > >( "color::lmsKriesE", "std::int64_t  " ) << std::endl;

  ss << print_bound< color::lms<float        , ::color::constant::lms::von_Kries_E_entity > >( "color::lmsKriesE", "float         " ) << std::endl;
  ss << print_bound< color::lms<double       , ::color::constant::lms::von_Kries_E_entity > >( "color::lmsKriesE", "double        " ) << std::endl;
  ss << print_bound< color::lms<long double  , ::color::constant::lms::von_Kries_E_entity > >( "color::lmsKriesE", "long double   " ) << std::endl;
  ss << "<tr><td colspan=\"14\"></td></tr>" <<  std::endl;

  ss << print_semi_title( "L","m","s" );
  ss << print_bound< color::lms<std::uint8_t , ::color::constant::lms::BFD_entity > >( "color::lmsBFD", "std::uint8_t  " ) << std::endl;
  ss << print_bound< color::lms<std::uint16_t, ::color::constant::lms::BFD_entity > >( "color::lmsBFD", "std::uint16_t " ) << std::endl;
  ss << print_bound< color::lms<std::uint32_t, ::color::constant::lms::BFD_entity > >( "color::lmsBFD", "std::uint32_t " ) << std::endl;
  ss << print_bound< color::lms<std::uint64_t, ::color::constant::lms::BFD_entity > >( "color::lmsBFD", "std::uint64_t " ) << std::endl;
  ss << print_bound< color::lms<float        , ::color::constant::lms::BFD_entity > >( "color::lmsBFD", "float         " ) << std::endl;
  ss << print_bound< color::lms<double       , ::color::constant::lms::BFD_entity > >( "color::lmsBFD", "double        " ) << std::endl;
  ss << print_bound< color::lms<long double  , ::color::constant::lms::BFD_entity > >( "color::lmsBFD", "long double   " ) << std::endl;
  ss << "<tr><td colspan=\"14\"></td></tr>" <<  std::endl;

  ss << print_semi_title( "L","m","s" );
  ss << print_bound< color::lms<std::uint8_t , ::color::constant::lms::MCAT02_entity > >( "color::lmsMCAT02", "std::uint8_t  " ) << std::endl;
  ss << print_bound< color::lms<std::uint16_t, ::color::constant::lms::MCAT02_entity > >( "color::lmsMCAT02", "std::uint16_t " ) << std::endl;
  ss << print_bound< color::lms<std::uint32_t, ::color::constant::lms::MCAT02_entity > >( "color::lmsMCAT02", "std::uint32_t " ) << std::endl;
  ss << print_bound< color::lms<std::uint64_t, ::color::constant::lms::MCAT02_entity > >( "color::lmsMCAT02", "std::uint64_t " ) << std::endl;
  ss << print_bound< color::lms<float        , ::color::constant::lms::MCAT02_entity > >( "color::lmsMCAT02", "float         " ) << std::endl;
  ss << print_bound< color::lms<double       , ::color::constant::lms::MCAT02_entity > >( "color::lmsMCAT02", "double        " ) << std::endl;
  ss << print_bound< color::lms<long double  , ::color::constant::lms::MCAT02_entity > >( "color::lmsMCAT02", "long double   " ) << std::endl;
  ss << "<tr><td colspan=\"14\"></td></tr>" <<  std::endl;

  ss << print_semi_title( "L","u","v" );
  ss << print_bound< color::luv<std::uint8_t  > >( "color::luv", "std::uint8_t  " ) << std::endl;
  ss << print_bound< color::luv<std::uint16_t > >( "color::luv", "std::uint16_t " ) << std::endl;
  ss << print_bound< color::luv<std::uint32_t > >( "color::luv", "std::uint32_t " ) << std::endl;
  ss << print_bound< color::luv<std::uint64_t > >( "color::luv", "std::uint64_t " ) << std::endl;
  ss << print_bound< color::luv<std::int8_t   > >( "color::luv", "std::int8_t   " ) << std::endl;
  ss << print_bound< color::luv<std::int16_t  > >( "color::luv", "std::int16_t  " ) << std::endl;
  ss << print_bound< color::luv<std::int32_t  > >( "color::luv", "std::int32_t  " ) << std::endl;
  ss << print_bound< color::luv<std::int64_t  > >( "color::luv", "std::int64_t  " ) << std::endl;
  ss << print_bound< color::luv<float         > >( "color::luv", "float         " ) << std::endl;
  ss << print_bound< color::luv<double        > >( "color::luv", "double        " ) << std::endl;
  ss << print_bound< color::luv<long double   > >( "color::luv", "long double   " ) << std::endl;
  ss << "<tr><td colspan=\"14\"></td></tr>" <<  std::endl;

  ss << print_semi_title( "L","chroma","hue" );
  ss << print_bound< color::LuvCH<std::uint8_t  > >( "color::LuvCH", "std::uint8_t  " ) << std::endl;
  ss << print_bound< color::LuvCH<std::uint16_t > >( "color::LuvCH", "std::uint16_t " ) << std::endl;
  ss << print_bound< color::LuvCH<std::uint32_t > >( "color::LuvCH", "std::uint32_t " ) << std::endl;
  ss << print_bound< color::LuvCH<std::uint64_t > >( "color::LuvCH", "std::uint64_t " ) << std::endl;
  ss << print_bound< color::LuvCH<float         > >( "color::LuvCH", "float         " ) << std::endl;
  ss << print_bound< color::LuvCH<double        > >( "color::LuvCH", "double        " ) << std::endl;
  ss << print_bound< color::LuvCH<long double   > >( "color::LuvCH", "long double   " ) << std::endl;
  ss << "<tr><td colspan=\"14\"></td></tr>" <<  std::endl;

  ss << print_semi_title( "Y","Cg","Co" );
  ss << print_bound< color::YCgCo<std::uint8_t > >( "color::YCgCo", "std::uint8_t  " ) << std::endl;
  ss << print_bound< color::YCgCo<std::uint16_t> >( "color::YCgCo", "std::uint16_t " ) << std::endl;
  ss << print_bound< color::YCgCo<std::uint32_t> >( "color::YCgCo", "std::uint32_t " ) << std::endl;
  ss << print_bound< color::YCgCo<std::uint64_t> >( "color::YCgCo", "std::uint64_t " ) << std::endl;
  ss << print_bound< color::YCgCo<float        > >( "color::YCgCo", "float         " ) << std::endl;
  ss << print_bound< color::YCgCo<double       > >( "color::YCgCo", "double        " ) << std::endl;
  ss << print_bound< color::YCgCo<long double  > >( "color::YCgCo", "long double   " ) << std::endl;
  ss << "<tr><td colspan=\"14\"></td></tr>" <<  std::endl;

  ss << print_semi_title( "Y","Db","Dr" );
  ss << print_bound< color::YDbDr<std::uint8_t > >( "color::YDbDr", "std::uint8_t  " ) << std::endl;
  ss << print_bound< color::YDbDr<std::uint16_t> >( "color::YDbDr", "std::uint16_t " ) << std::endl;
  ss << print_bound< color::YDbDr<std::uint32_t> >( "color::YDbDr", "std::uint32_t " ) << std::endl;
  ss << print_bound< color::YDbDr<std::uint64_t> >( "color::YDbDr", "std::uint64_t " ) << std::endl;
  ss << print_bound< color::YDbDr<float        > >( "color::YDbDr", "float         " ) << std::endl;
  ss << print_bound< color::YDbDr<double       > >( "color::YDbDr", "double        " ) << std::endl;
  ss << print_bound< color::YDbDr<long double  > >( "color::YDbDr", "long double   " ) << std::endl;
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

  ss << print_semi_title( "Y","Pb","Pr" );
  ss << print_bound< color::YPbPr<std::uint8_t , ::color::constant::YPbPr::BT_601_entity> >( "color::YPbPr601", "std::uint8_t  " ) << std::endl;
  ss << print_bound< color::YPbPr<std::uint16_t, ::color::constant::YPbPr::BT_601_entity> >( "color::YPbPr601", "std::uint16_t " ) << std::endl;
  ss << print_bound< color::YPbPr<std::uint32_t, ::color::constant::YPbPr::BT_601_entity> >( "color::YPbPr601", "std::uint32_t " ) << std::endl;
  ss << print_bound< color::YPbPr<std::uint64_t, ::color::constant::YPbPr::BT_601_entity> >( "color::YPbPr601", "std::uint64_t " ) << std::endl;
  ss << print_bound< color::YPbPr<float        , ::color::constant::YPbPr::BT_601_entity> >( "color::YPbPr601", "float         " ) << std::endl;
  ss << print_bound< color::YPbPr<double       , ::color::constant::YPbPr::BT_601_entity> >( "color::YPbPr601", "double        " ) << std::endl;
  ss << print_bound< color::YPbPr<long double  , ::color::constant::YPbPr::BT_601_entity> >( "color::YPbPr601", "long double   " ) << std::endl;
  ss << "<tr><td colspan=\"14\"></td></tr>" <<  std::endl;

  ss << print_semi_title( "Y","Pb","Pr" );
  ss << print_bound< color::YPbPr<std::uint8_t , ::color::constant::YPbPr::BT_709_entity> >( "color::YPbPr709", "std::uint8_t  " ) << std::endl;
  ss << print_bound< color::YPbPr<std::uint16_t, ::color::constant::YPbPr::BT_709_entity> >( "color::YPbPr709", "std::uint16_t " ) << std::endl;
  ss << print_bound< color::YPbPr<std::uint32_t, ::color::constant::YPbPr::BT_709_entity> >( "color::YPbPr709", "std::uint32_t " ) << std::endl;
  ss << print_bound< color::YPbPr<std::uint64_t, ::color::constant::YPbPr::BT_709_entity> >( "color::YPbPr709", "std::uint64_t " ) << std::endl;
  ss << print_bound< color::YPbPr<float        , ::color::constant::YPbPr::BT_709_entity> >( "color::YPbPr709", "float         " ) << std::endl;
  ss << print_bound< color::YPbPr<double       , ::color::constant::YPbPr::BT_709_entity> >( "color::YPbPr709", "double        " ) << std::endl;
  ss << print_bound< color::YPbPr<long double  , ::color::constant::YPbPr::BT_709_entity> >( "color::YPbPr709", "long double   " ) << std::endl;
  ss << "<tr><td colspan=\"14\"></td></tr>" <<  std::endl;

  ss << print_semi_title( "Y","Pb","Pr" );
  ss << print_bound< color::YPbPr<std::uint8_t , ::color::constant::YPbPr::BT_2020_entity > >( "color::YPbPr2020", "std::uint8_t  " ) << std::endl;
  ss << print_bound< color::YPbPr<std::uint16_t, ::color::constant::YPbPr::BT_2020_entity > >( "color::YPbPr2020", "std::uint16_t " ) << std::endl;
  ss << print_bound< color::YPbPr<std::uint32_t, ::color::constant::YPbPr::BT_2020_entity > >( "color::YPbPr2020", "std::uint32_t " ) << std::endl;
  ss << print_bound< color::YPbPr<std::uint64_t, ::color::constant::YPbPr::BT_2020_entity > >( "color::YPbPr2020", "std::uint64_t " ) << std::endl;
  ss << print_bound< color::YPbPr<float        , ::color::constant::YPbPr::BT_2020_entity > >( "color::YPbPr2020", "float         " ) << std::endl;
  ss << print_bound< color::YPbPr<double       , ::color::constant::YPbPr::BT_2020_entity > >( "color::YPbPr2020", "double        " ) << std::endl;
  ss << print_bound< color::YPbPr<long double  , ::color::constant::YPbPr::BT_2020_entity > >( "color::YPbPr2020", "long double   " ) << std::endl;
  ss << "<tr><td colspan=\"14\"></td></tr>" <<  std::endl;

  ss << print_semi_title( "(Y)Luminance","(U)Chrominance","(V)Chrominance" );
  ss << print_bound< color::yuv<std::uint8_t , ::color::constant::yuv::BT_601_entity > >( "color::yuv601", "std::uint8_t  " ) << std::endl;
  ss << print_bound< color::yuv<std::uint16_t, ::color::constant::yuv::BT_601_entity > >( "color::yuv601", "std::uint16_t " ) << std::endl;
  ss << print_bound< color::yuv<std::uint32_t, ::color::constant::yuv::BT_601_entity > >( "color::yuv601", "std::uint32_t " ) << std::endl;
  ss << print_bound< color::yuv<std::uint64_t, ::color::constant::yuv::BT_601_entity > >( "color::yuv601", "std::uint64_t " ) << std::endl;
  ss << print_bound< color::yuv<float        , ::color::constant::yuv::BT_601_entity > >( "color::yuv601", "float         " ) << std::endl;
  ss << print_bound< color::yuv<double       , ::color::constant::yuv::BT_601_entity > >( "color::yuv601", "double        " ) << std::endl;
  ss << print_bound< color::yuv<long double  , ::color::constant::yuv::BT_601_entity > >( "color::yuv601", "long double   " ) << std::endl;
  ss << "<tr><td colspan=\"14\"></td></tr>" <<  std::endl;

  ss << print_semi_title( "(Y)Luminance","(U)Chrominance","(V)Chrominance" );
  ss << print_bound< color::yuv<std::uint8_t , ::color::constant::yuv::BT_709_entity  > >( "color::yuv709", "std::uint8_t  " ) << std::endl;
  ss << print_bound< color::yuv<std::uint16_t, ::color::constant::yuv::BT_709_entity  > >( "color::yuv709", "std::uint16_t " ) << std::endl;
  ss << print_bound< color::yuv<std::uint32_t, ::color::constant::yuv::BT_709_entity  > >( "color::yuv709", "std::uint32_t " ) << std::endl;
  ss << print_bound< color::yuv<std::uint64_t, ::color::constant::yuv::BT_709_entity  > >( "color::yuv709", "std::uint64_t " ) << std::endl;
  ss << print_bound< color::yuv<float        , ::color::constant::yuv::BT_709_entity  > >( "color::yuv709", "float         " ) << std::endl;
  ss << print_bound< color::yuv<double       , ::color::constant::yuv::BT_709_entity  > >( "color::yuv709", "double        " ) << std::endl;
  ss << print_bound< color::yuv<long double  , ::color::constant::yuv::BT_709_entity  > >( "color::yuv709", "long double   " ) << std::endl;
  ss << "<tr><td colspan=\"14\"></td></tr>" <<  std::endl;

  ss << print_semi_title( "x","y","z" );
  ss << print_bound< color::xyz<std::uint8_t  > >( "color::xyz", "std::uint8_t  " ) << std::endl;
  ss << print_bound< color::xyz<std::uint16_t > >( "color::xyz", "std::uint16_t " ) << std::endl;
  ss << print_bound< color::xyz<std::uint32_t > >( "color::xyz", "std::uint32_t " ) << std::endl;
  ss << print_bound< color::xyz<std::uint64_t > >( "color::xyz", "std::uint64_t " ) << std::endl;
  ss << print_bound< color::xyz<float         > >( "color::xyz", "float         " ) << std::endl;
  ss << print_bound< color::xyz<double        > >( "color::xyz", "double        " ) << std::endl;
  ss << print_bound< color::xyz<long double   > >( "color::xyz", "long double   " ) << std::endl;
  ss << "<tr><td colspan=\"14\"></td></tr>" <<  std::endl;


  ss << print_semi_title( "x","y","Y" );
  ss << print_bound< color::xyy<std::uint8_t  > >( "color::xyy", "std::uint8_t  " ) << std::endl;
  ss << print_bound< color::xyy<std::uint16_t > >( "color::xyy", "std::uint16_t " ) << std::endl;
  ss << print_bound< color::xyy<std::uint32_t > >( "color::xyy", "std::uint32_t " ) << std::endl;
  ss << print_bound< color::xyy<std::uint64_t > >( "color::xyy", "std::uint64_t " ) << std::endl;
  ss << print_bound< color::xyy<float         > >( "color::xyy", "float         " ) << std::endl;
  ss << print_bound< color::xyy<double        > >( "color::xyy", "double        " ) << std::endl;
  ss << print_bound< color::xyy<long double   > >( "color::xyy", "long double   " ) << std::endl;
  ss << "<tr><td colspan=\"14\"></td></tr>" <<  std::endl;


  //ss << "</table> ";

   {
    std::ofstream ofs(  "./bound.html"  );
    ofs <<  ss.str();
   }

 }