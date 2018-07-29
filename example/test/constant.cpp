#include <sstream>
#include <fstream>
#include <iostream>
#include <iomanip>
#include <string>

#include "color/color.hpp"


template< typename color_name >
static std::string print_color( std::string const& text, color_name const& c )
 {
  ::color::rgb<std::uint8_t> r; r = c;
  std::stringstream ss;

  ss <<  "<div style=\"background-color:rgb("<< (unsigned)r[0] <<","<< (unsigned)r[1] <<","<< (unsigned)r[2] <<");color:white\">";

  if( 0 != text.size() )
   {
    ss << text << " - " << "<br>";
   }
  ss << "("<< (int)r[0] <<","<< (int)r[1] <<","<< (int)r[2] <<")"<< "<br>";
  ss << "("<< (int)c[0] <<","<< (int)c[1] <<","<< (int)c[2] <<")"<< "<br>";

  ss << "</div>";
  return ss.str();
 }

static std::string print_color( std::string const& text, ::color::gray<double> const& c )
 {
  ::color::rgb<std::uint8_t> r; r = c;
  std::stringstream ss;

  ss <<  "<div style=\"background-color:rgb(" << (unsigned)r[0] <<","<< (unsigned)r[1] <<","<< (unsigned)r[2] <<");color:white\">";

  if( 0 != text.size() )
   {
    ss << text << " - " << "<br>";
   }
  ss << "("<< (int)r[0] <<","<< (int)r[1] <<","<< (int)r[2] <<")"<< "<br>";
  ss << "("<< (int)c[0] <<")"<< "<br>";

  ss << "</div>";
  return ss.str();
 }

static std::string print_color( std::string const& text, ::color::rgb<double> const& c )
 {
  ::color::rgb<std::uint8_t> r; r = c;
  std::stringstream ss;

  ss <<  "<div style=\"background-color:rgb("<< (unsigned)r[0] <<","<< (unsigned)r[1] <<","<< (unsigned)r[2] <<");color:white\">";

  if( 0 != text.size() )
   {
    ss << text << " - " << "<br>";
   }
  ss << "("<< (int)r[0] <<","<< (int)r[1] <<","<< (int)r[2] <<")"<< "<br>";
  ss << "("<< (int)(100*c[0]) <<","<< (int)(100*c[1]) <<","<< (int)(100*c[2]) <<")"<< "<br>";

  ss << "</div>";
  return ss.str();
 }


template< typename tag_name >
 std::string print( ::color::constant::base< tag_name > const& constant, std::string const& name )
 {
  std::stringstream ss;
  typedef ::color::constant::base< tag_name > constant_t;

   ss << "<tr>" << std::endl;
     ss << "<td  style=\"background-color:" << name << "\"> W3  -" << name << "</td>";
     ss << "<td>" << print_color( "gray-"       + name, ::color::gray<  double >( constant ) ) << "</td>";
     ss << "<td>" << print_color( "rgb -"       + name, ::color::rgb<   double >( constant ) ) << "</td>";
     ss << "<td>" << print_color( "cmy -"       + name, ::color::cmy<   double >( constant ) ) << "</td>";
     ss << "<td>" << print_color( "cmyk-"       + name, ::color::cmyk<  double >( constant ) ) << "</td>";
     ss << "<td>" << print_color( "hsl -"       + name, ::color::hsl<   double >( constant ) ) << "</td>";
     ss << "<td>" << print_color( "hsv -"       + name, ::color::hsv<   double >( constant ) ) << "</td>";
     ss << "<td>" << print_color( "hsi -"       + name, ::color::hsi<   double >( constant ) ) << "</td>";
     ss << "<td>" << print_color( "yiq -"       + name, ::color::yiq<   double >( constant ) ) << "</td>";
     ss << "<td>" << print_color( "yuv -"       + name, ::color::yuv<   double >( constant ) ) << "</td>";
     ss << "<td>" << print_color( "YCgCo -"     + name, ::color::YCgCo< double >( constant ) ) << "</td>";
     ss << "<td>" << print_color( "YDbDr -"     + name, ::color::YDbDr< double >( constant ) ) << "</td>";
     ss << "<td>" << print_color( "YPbPr -"     + name, ::color::YPbPr< double >( constant ) ) << "</td>";
     ss << "<td>" << print_color( "xyz -"       + name, ::color::xyz<   double >( constant ) ) << "</td>";
     ss << "<td>" << print_color( "labCIE -"    + name, ::color::lab<   double, ::color::constant::lab::CIE_entity    >( constant ) ) << "</td>";
     ss << "<td>" << print_color( "labHunter -" + name, ::color::lab<   double, ::color::constant::lab::Hunter_entity >( constant ) ) << "</td>";
     ss << "<td>" << print_color( "lmsK65 -"    + name, ::color::lms<   double, ::color::constant::lms::von_Kries_D65_entity >( constant ) ) << "</td>";
     ss << "<td>" << print_color( "lmsKE -"     + name, ::color::lms<   double, ::color::constant::lms::von_Kries_E_entity   >( constant ) ) << "</td>";
     ss << "<td>" << print_color( "lmsBFD -"    + name, ::color::lms<   double, ::color::constant::lms::BFD_entity           >( constant ) ) << "</td>";
     ss << "<td>" << print_color( "lmsMCAT -"   + name, ::color::lms<   double, ::color::constant::lms::MCAT02_entity        >( constant ) ) << "</td>";
     ss << "<td>" << print_color( "luv -"       + name, ::color::luv<   double >( constant ) ) << "</td>";
     ss << "<td>" << print_color( "xyy -"       + name, ::color::xyy<   double >( constant ) ) << "</td>";
     ss << "<td>" << print_color( "hwb -"       + name, ::color::hwb<   double >( constant ) ) << "</td>";

     ss << "<td>" << print_color( "LabCH -"       + name, ::color::LabCH<   double >( constant ) ) << "</td>";
     ss << "<td>" << print_color( "LuvCH -"       + name, ::color::LuvCH<   double >( constant ) ) << "</td>";

     ss << "</tr>" << std::endl;

  return ss.str();
 }

void test_constant()
 {
  std::stringstream ss;

  ss << "<table>";

  ss << print( ::color::constant::black_t{},        "black"      );
  ss << print( ::color::constant::white_t{},        "white"      );
  ss << print( ::color::constant::aqua_t{},         "aqua"       );
  ss << print( ::color::constant::aquamarine_t{},   "aquamarine" );
  ss << print( ::color::constant::azure_t{},        "azure"      );
  ss << print( ::color::constant::beige_t{},        "beige"      );
  ss << print( ::color::constant::bisque_t{},       "bisque"     );
  ss << print( ::color::constant::blue_t{},         "blue"       );
  ss << print( ::color::constant::brown_t{},        "brown"      );
  ss << print( ::color::constant::chocolate_t{},    "chocolate"  );
  ss << print( ::color::constant::coral_t{},        "coral"      );
  ss << print( ::color::constant::crimson_t{},      "crimson"    );
  ss << print( ::color::constant::cyan_t{},         "cyan"       );
  ss << print( ::color::constant::fuchsia_t{},      "fuchsia"    );
  ss << print( ::color::constant::gainsboro_t{},    "gainsboro"  );
  ss << print( ::color::constant::gold_t{},         "gold"       );
  ss << print( ::color::constant::green_t{},        "green"      );
  ss << print( ::color::constant::indigo_t{},       "indigo"     );
  ss << print( ::color::constant::ivory_t{},        "ivory"      );
  ss << print( ::color::constant::khaki_t{},        "khaki"      );
  ss << print( ::color::constant::lavender_t{},     "lavender"   );
  ss << print( ::color::constant::lime_t{},         "lime"       );
  ss << print( ::color::constant::linen_t{},        "linen"      );
  ss << print( ::color::constant::magenta_t{},      "magenta"    );
  ss << print( ::color::constant::maroon_t{},       "maroon"     );
  ss << print( ::color::constant::moccasin_t{},     "moccasin"   );
  ss << print( ::color::constant::navy_t{},         "navy"       );
  ss << print( ::color::constant::olive_t{},        "olive"      );
  ss << print( ::color::constant::orange_t{},       "orange"     );
  ss << print( ::color::constant::orchid_t{},       "orchid"     );
  ss << print( ::color::constant::peru_t{},         "peru"       );
  ss << print( ::color::constant::pink_t{},         "pink"       );
  ss << print( ::color::constant::plum_t{},         "plum"       );
  ss << print( ::color::constant::purple_t{},       "purple"     );
  ss << print( ::color::constant::red_t{},          "red"        );
  ss << print( ::color::constant::salmon_t{},       "salmon"     );
  ss << print( ::color::constant::sienna_t{},       "sienna"     );
  ss << print( ::color::constant::silver_t{},       "silver"     );
  ss << print( ::color::constant::snow_t{},         "snow"       );
  ss << print( ::color::constant::tan_t{},          "tan"        );
  ss << print( ::color::constant::teal_t{},         "teal"       );
  ss << print( ::color::constant::thistle_t{},      "thistle"    );
  ss << print( ::color::constant::tomato_t{},       "tomato"     );
  ss << print( ::color::constant::turquoise_t{},    "turquoise"  );
  ss << print( ::color::constant::violet_t{},       "violet"     );
  ss << print( ::color::constant::wheat_t{},        "wheat"      );
  ss << print( ::color::constant::yellow_t{},       "yellow"     );

//  ss << print( ::color::constant::vga::black_t{},       "black"     );
//  ss << print( ::color::constant::vga::silver_t{},      "silver"   );
//  ss << print( ::color::constant::vga::gray_t{},        "gray"     );
//  ss << print( ::color::constant::vga::white_t{},       "white"    );
//  ss << print( ::color::constant::vga::maroon_t{},     "maroon "  );
//  ss << print( ::color::constant::vga::red_t{},         "red"      );
//  ss << print( ::color::constant::vga::purple_t{},      "purple"   );
//  ss << print( ::color::constant::vga::fuchsia_t{},    "fuchsia" );

//  ss << print( ::color::constant::vga::green_t{},    "green"    );
//  ss << print( ::color::constant::vga::lime_t{},     "lime"     );
//  ss << print( ::color::constant::vga::olive_t{},    "olive"    );
//  ss << print( ::color::constant::vga::yellow_t{},   "yellow"   );
//  ss << print( ::color::constant::vga::navy_t{},     "navy"     );
//  ss << print( ::color::constant::vga::blue_t{},     "blue"     );
//  ss << print( ::color::constant::vga::teal_type{},     "teal"     );
//  ss << print( ::color::constant::vga::aqua_t{},     "aqua"     );

  ss << print( ::color::constant::gray_t<1,1>{},    "gray"       );
  ss << print( ::color::constant::x11::gray_t{},     "#BEBEBE"  );
  ss << print( ::color::constant::x11::green_t{},    "#00FF00"  );
  ss << print( ::color::constant::x11::maroon_t{},   "#B03060"  );
  ss << print( ::color::constant::x11::purple_t{},   "#A020F0"  );

  ss << print( ::color::constant::gray_t<0,1>{},   "#ffffff"   ); ss << print( ::color::constant::gray_t<1,0>{},   "#000000"   );

  ss << print( ::color::constant::gray_t<1,2>{},   "rgb(170,170,170)"   ); ss << print( ::color::constant::gray_t<2,1>{},   "rgb(85,85,85)"   );

  ss << print( ::color::constant::gray_t<1,3>{},   "rgb(191,191,191)"   ); ss << print( ::color::constant::gray_t<3,1>{},   "rgb(63,63,63)"   );
  ss << print( ::color::constant::gray_t<2,3>{},   "rgb(153,153,153)"   ); ss << print( ::color::constant::gray_t<3,2>{},   "rgb(102,102,102)"   );

  ss << print( ::color::constant::gray_t<1,4>{},   "rgb(204,204,204)"   ); ss << print( ::color::constant::gray_t<4,1>{},   "rgb(51,51,51)"   );

  ss << print( ::color::constant::gray_t<2,4>{},   "rgb(170,170,170)"   ); ss << print( ::color::constant::gray_t<4,2>{},  "rgb(85,85,85)"   );
  ss << print( ::color::constant::gray_t<3,4>{},   "rgb(145,145,145)"   );ss << print( ::color::constant::gray_t<4,3>{},   "rgb(109,109,109)"   );

  ss << print( ::color::constant::gray_t<1,5>{},   "rgb(212,212,212)"   ); ss << print( ::color::constant::gray_t<5,1>{},   "rgb(42,42,42)"   );
  ss << print( ::color::constant::gray_t<2,5>{},   "rgb(182,182,182)"   ); ss << print( ::color::constant::gray_t<5,2>{},   "rgb(72,72,72)"   );
  ss << print( ::color::constant::gray_t<3,5>{},   "rgb(159,159,159)"   ); ss << print( ::color::constant::gray_t<5,3>{},   "rgb(95,95,95)"   );
  ss << print( ::color::constant::gray_t<4,5>{},   "rgb(141,141,141)"   ); ss << print( ::color::constant::gray_t<5,4>{},   "rgb(113,113,113)"   );



  ss << "</table>";

   {
    std::ofstream ofs( "./constant.html" );
    ofs <<  ss.str();
   }

 }

