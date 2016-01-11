#include <sstream>
#include <fstream>
#include <iostream>
#include <iomanip>

#include "color/color.hpp"

#include "./print.hpp"



void print_generic_header( std::string const& name )
 {
  std::stringstream ss;

  ss << "#ifndef  color_generic_make_" << name << ""                                        << std::endl;
  ss << "#define color_generic_make_" << name << ""                                         << std::endl << std::endl;
  ss << "// ::color::make::" << name << "( c )"                                             << std::endl << std::endl;
  ss << " namespace color"                                                                   << std::endl;
  ss << "  {"                                                                                << std::endl;
  ss << "   namespace make"                                                                  << std::endl;
  ss << "    {"                                                                              << std::endl;
  ss                                                                                         << std::endl;
  ss << "     template< typename category_name >"                                            << std::endl;
  ss << "      void " << name << "( ::color::_internal::model< category_name > & color_parameter )"    << std::endl;
  ss << "       {"                                                                           << std::endl;
  ss << "        typedef ::color::_internal::model< category_name > model_type;"             << std::endl;
  ss << "        typedef ::color::_internal::trait< category_name > trait_type;"             << std::endl;
  ss << "        typedef typename model_type::index_type index_type;"                        << std::endl;
  ss                                                                                         << std::endl;
  ss << "        // Do nothing to force specialization"                                      << std::endl;
  ss << "       }"                                                                           << std::endl;
  ss                                                                                         << std::endl;
  ss << "     template< typename category_name >"                                            << std::endl;
  ss << "      inline"                                                                       << std::endl;
  ss << "      ::color::_internal::model< category_name >"                                   << std::endl;
  ss << "      " << name << "( )"                                                            << std::endl;
  ss << "       {"                                                                           << std::endl;
  ss << "        typedef ::color::_internal::model< category_name > model_type;"             << std::endl;
  ss << "        static model_type dummy;"                                                   << std::endl;
  ss << "        // TODO Will call every time, That is no good."                             << std::endl;
  ss << "        ::color::make::" << name << "( dummy );"                                    << std::endl;
  ss                                                                                         << std::endl;
  ss << "        // Do nothing to force specialization"                                      << std::endl;
  ss << "        return dummy;"                                                              << std::endl;
  ss << "       }"                                                                           << std::endl;
  ss                                                                                         << std::endl;
  ss << "    }"                                                                              << std::endl;
  ss << "  }"                                                                                << std::endl;
  ss << std::endl;
  ss << "#endif"                                                                             << std::endl;

   {
    std::ofstream ofs( ( "./gen/"+name + ".hpp" ). c_str() );
    //std::ofstream ofs( ( "../../src/color/generic/make/"+name + ".hpp" ). c_str() );
    ofs <<  ss.str();
   }


 }

template < template<typename> class color_name >
void print_header( std::string const& model, std::string const& name, color::rgb<double>  const& r )
 {
  color_name<uint8_t>      i8   ( r );
  color_name<uint16_t>     i16  ( r );
  color_name<uint32_t>     i32  ( r );
  color_name<uint64_t>     i64  ( r );
  color_name<float>        f    ( r );
  color_name<double>       d    ( r );
  color_name<long double>  ld   ( r );

  color::rgb<uint32_t> r32( r );

  if( 3 == model.size() )
   {
    i32.container() &= 0x00ffffff;
    i32.container() |= 0xff000000;

    i64.container() &= 0x0000ffffffffffff;
    i64.container() |= 0xffff000000000000;
   }

  std::stringstream ss;

  ss << "#ifndef color_"<< model <<"_make_" << name                                                       << std::endl;
  ss << "#define color_"<< model <<"_make_" << name                                                       << std::endl;
  ss                                                                                                      << std::endl;
  ss << "// ::color::make::" << name << "( c )"                                                           << std::endl;
  ss                                                                                                      << std::endl;
  ss << " namespace color"                                                                                << std::endl;
  ss << "  {"                                                                                             << std::endl;
  ss << "   namespace make"                                                                               << std::endl;
  ss << "    { //RGB equivalents: ";
  ss << "std::array<double,3>( { "<< r[0]<<", "<< r[1]<<", "<< r[2]<<" } )";
  ss << " - ";
  ss << "rgb(" << std::setbase(10) <<(unsigned)r32[0] << "," << (unsigned)r32[1] << "," << (unsigned)r32[2] << ")" ;
  ss << " - ";
  ss << "#" << std::setbase(16) <<  std::setw(2) <<  std::setfill('0') << (unsigned)r32[0] 
            << std::setbase(16) <<  std::setw(2) <<  std::setfill('0') << (unsigned)r32[1] 
            << std::setbase(16) <<  std::setw(2) <<  std::setfill('0') << (unsigned)r32[2] ;
  ss << std::endl;

  ss                                                                                                      << std::endl;
  ss << "      inline"                                                                                    << std::endl;
  ss << "      void " << name << "( ::color::_internal::model< color::category::"<< model <<"_uint8 > & color_parameter )"    << std::endl;
  ss << "       {"                                                                                        << std::endl;
  ss << "        color_parameter.container() = " << std::setbase(16) << "0x" << unsigned(i8.container()) << ";"<< std::endl;
  ss << "       }"                                                                                        << std::endl;
  ss                                                                                                      << std::endl;
  ss << "      inline"                                                                                    << std::endl;
  ss << "      void " << name << "( ::color::_internal::model< color::category::"<< model <<"_uint16 > & color_parameter )"   << std::endl;
  ss << "       {"                                                                                        << std::endl;
  ss << "        color_parameter.container() = " << std::setbase(16) << "0x" << i16.container()<< ";"     << std::endl;
  ss << "       }"                                                                                        << std::endl;
  ss                                                                                                      << std::endl;
  ss << "      inline"                                                                                    << std::endl;
  ss << "      void " << name << "( ::color::_internal::model< color::category::"<< model <<"_uint32 > & color_parameter )"   << std::endl;
  ss << "       {"                                                                                        << std::endl;
  ss << "        color_parameter.container() = " << std::setbase(16) << "0x" << i32.container()<< "u;"     << std::endl;
  ss << "       }"                                                                                        << std::endl;
  ss                                                                                                      << std::endl;
  ss << "      inline"                                                                                    << std::endl;
  ss << "      void " << name << "( ::color::_internal::model< color::category::"<< model <<"_uint64 > & color_parameter )"   << std::endl;
  ss << "       {"                                                                                        << std::endl;
  ss << "        color_parameter.container() = " << std::setbase(16) << "0x" << i64.container()<< "ul;"    << std::endl;
  ss << "       }"                                                                                        << std::endl;
  ss                                                                                                      << std::endl;
  ss << "      inline"                                                                                    << std::endl;
  ss << "      void " << name << "( ::color::_internal::model< color::category::"<< model <<"_float > & color_parameter )"    << std::endl;
  ss << "       {"                                                                                        << std::endl;
  ss << "        color_parameter.container() = std::array<float," << f.size() << ">( { " << f[0] << ", " << f[1] << ", " << f[2];
  if( 4 == f.size() ){ ss << ", " << f[3];  }
  ss  << " } );" << std::endl;
  ss << "       }"                                                                                        << std::endl;
  ss                                                                                                      << std::endl;
  ss << "      inline"                                                                                    << std::endl;
  ss << "      void " << name << "( ::color::_internal::model< color::category::"<< model <<"_double> & color_parameter )"    << std::endl;
  ss << "       {"                                                                                        << std::endl;
  ss << "        color_parameter.container() = std::array<double," << d.size() << ">( { " << d[0] << ", " << d[1] << ", " << d[2];
  if( 4 == d.size() ){ ss << ", " << d[3];  }
  ss  << " } );" << std::endl;
  ss << "       }"                                                                                        << std::endl;
  ss                                                                                                      << std::endl;
  ss << "      inline"                                                                                    << std::endl;
  ss << "      void " << name << "( ::color::_internal::model< color::category::"<< model <<"_ldouble> & color_parameter )"   << std::endl;
  ss << "       {"                                                                                        << std::endl;
  ss << "        color_parameter.container() = std::array<long double," << ld.size() << ">( { " << ld[0] << ", " << ld[1] << ", " << ld[2];
  if( 4 == ld.size() ){ ss << ", " << ld[3];}
  ss  << " } );" << std::endl;
  ss << "       }"                                                                                        << std::endl;
  ss                                                                                                      << std::endl;
  ss << "    }"                                                                                           << std::endl;
  ss << "  }"                                                                                             << std::endl;
  ss                                                                                                      << std::endl;
  ss << "#endif"                                                                                          << std::endl;

  //std::cout << ss.str();
  //std::cout << "-------" << std:: endl;

   {
    std::ofstream ofs( ( "./gen-"+ model +"/"+name + ".hpp" ). c_str() );
    //std::ofstream ofs( ( "../../src/color/"+ model +"/make/"+name + ".hpp" ). c_str() );
    ofs <<  ss.str();
   }

  }

template < template<typename> class color_name >
  void print_all_header( std::string const& name )
   {

    color::rgb<double>  r;

    color::make::aqua       ( r );  print_header<color_name>(  name, "aqua",    r );
    color::make::black      ( r );  print_header<color_name>(  name, "black",   r );
    color::make::blue       ( r );  print_header<color_name>(  name, "blue",    r );
    color::make::cyan       ( r );  print_header<color_name>(  name, "cyan",    r );
    color::make::fuchsia    ( r );  print_header<color_name>(  name, "fuchsia", r );
    color::make::gray50     ( r );  print_header<color_name>(  name, "gray50",  r );
    color::make::green      ( r );  print_header<color_name>(  name, "green",   r );
    color::make::lime       ( r );  print_header<color_name>(  name, "lime",    r );
    color::make::magenta    ( r );  print_header<color_name>(  name, "magenta", r );
    color::make::maroon     ( r );  print_header<color_name>(  name, "maroon",  r );
    color::make::navy       ( r );  print_header<color_name>(  name, "navy",    r );
    color::make::olive      ( r );  print_header<color_name>(  name, "olive",   r );
    color::make::orange     ( r );  print_header<color_name>(  name, "orange",  r );
    color::make::purple     ( r );  print_header<color_name>(  name, "purple",  r );
    color::make::red        ( r );  print_header<color_name>(  name, "red",     r );
    color::make::silver     ( r );  print_header<color_name>(  name, "silver",  r );
    color::make::teal       ( r );  print_header<color_name>(  name, "teal",    r );
    color::make::violet     ( r );  print_header<color_name>(  name, "violet",  r );
    color::make::white      ( r );  print_header<color_name>(  name, "white",   r );
    color::make::yellow     ( r );  print_header<color_name>(  name, "yellow",  r );

    color::make::aquamarine ( r );  print_header<color_name>(  name, "aquamarine",  r );
    color::make::azure      ( r );  print_header<color_name>(  name, "azure",       r );
    color::make::beige      ( r );  print_header<color_name>(  name, "beige",       r );
    color::make::bisque     ( r );  print_header<color_name>(  name, "bisque",      r );
    color::make::brown      ( r );  print_header<color_name>(  name, "brown",       r );
    color::make::chocolate  ( r );  print_header<color_name>(  name, "chocolate",   r );
    color::make::coral      ( r );  print_header<color_name>(  name, "coral",       r );
    color::make::crimson    ( r );  print_header<color_name>(  name, "crimson",     r );
    color::make::gainsboro  ( r );  print_header<color_name>(  name, "gainsboro",   r );
    color::make::gold       ( r );  print_header<color_name>(  name, "gold",        r );
    color::make::indigo     ( r );  print_header<color_name>(  name, "indigo",      r );
    color::make::ivory      ( r );  print_header<color_name>(  name, "ivory",       r );
    color::make::khaki      ( r );  print_header<color_name>(  name, "khaki",       r );
    color::make::lavender   ( r );  print_header<color_name>(  name, "lavender",    r );
    color::make::linen      ( r );  print_header<color_name>(  name, "linen",       r );
    color::make::moccasin   ( r );  print_header<color_name>(  name, "moccasin",    r );
    color::make::orchid     ( r );  print_header<color_name>(  name, "orchid",      r );
    color::make::peru       ( r );  print_header<color_name>(  name, "peru",        r );
    color::make::pink       ( r );  print_header<color_name>(  name, "pink",        r );
    color::make::plum       ( r );  print_header<color_name>(  name, "plum",        r );
    color::make::salmon     ( r );  print_header<color_name>(  name, "salmon",      r );
    color::make::sienna     ( r );  print_header<color_name>(  name, "sienna",      r );
    color::make::snow       ( r );  print_header<color_name>(  name, "snow",        r );
    color::make::tan        ( r );  print_header<color_name>(  name, "tan",         r );
    color::make::thistle    ( r );  print_header<color_name>(  name, "thistle",     r );
    color::make::tomato     ( r );  print_header<color_name>(  name, "tomato",      r );
    color::make::turquoise  ( r );  print_header<color_name>(  name, "turquoise",   r );
    color::make::wheat      ( r );  print_header<color_name>(  name, "wheat",       r );
   }

void make_test()
 {
  print_all_header< color::cmy>(  "cmy");
  print_all_header< color::cmyk>( "cmyk");
  print_all_header< color::hsv>(  "hsv");
  print_all_header< color::hsl>(  "hsl");
  print_all_header< color::yiq>(  "yiq");
  print_all_header< color::xyz>(  "xyz");
  print_all_header< color::yuv>(  "yuv");
  //print_all_header< color::rgb>("rgb");
 }

