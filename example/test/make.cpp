#include <sstream>
#include <fstream>
#include <iostream>
#include <iomanip>

#include "color/color.hpp"

#include "./print.hpp"


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

  i32.container() &= 0x00ffffff;
  i32.container() |= 0xff000000;

  i64.container() &= 0x0000ffffffffffff;
  i64.container() |= 0xffff000000000000;

  std::stringstream ss; 
 
  ss << "#ifndef color_"<< model <<"_make_" << name << ""                                                 << std::endl;
  ss << "#define color_"<< model <<"_make_" << name << ""                                                 << std::endl;
  ss << ""                                                                                                << std::endl;
  ss << "// ::color::make::" << name << "( c )"                                                           << std::endl;
  ss << ""                                                                                                << std::endl;
  ss << " namespace color"                                                                                << std::endl;
  ss << "  {"                                                                                             << std::endl;
  ss << "   namespace make"                                                                               << std::endl;
  ss << "    { //RGB equivalent std::array<double,3>( { "<< r[0]<<", "<< r[1]<<", "<< r[2]<<" } ) "       << std::endl; 
  ss << ""                                                                                                << std::endl;
  ss << "      inline"                                                                                    << std::endl;
  ss << "      void " << name << "( ::color::_internal::model< color::category::"<< model <<"_uint8 > & color_parameter )"    << std::endl;
  ss << "       {"                                                                                        << std::endl;
  ss << "        color_parameter.container() = " << std::setbase(16) << "0x" << unsigned(i8.container()) << ";"<< std::endl;
  ss << "       }"                                                                                        << std::endl;
  ss << ""                                                                                                << std::endl;
  ss << "      inline"                                                                                    << std::endl;
  ss << "      void " << name << "( ::color::_internal::model< color::category::"<< model <<"_uint16 > & color_parameter )"   << std::endl;
  ss << "       {"                                                                                        << std::endl;
  ss << "        color_parameter.container() = " << std::setbase(16) << "0x" << i16.container()<< ";"     << std::endl;
  ss << "       }"                                                                                        << std::endl;
  ss << ""                                                                                                << std::endl;
  ss << "      inline"                                                                                    << std::endl;
  ss << "      void " << name << "( ::color::_internal::model< color::category::"<< model <<"_uint32 > & color_parameter )"   << std::endl;
  ss << "       {"                                                                                        << std::endl;
  ss << "        color_parameter.container() = " << std::setbase(16) << "0x" << i32.container()<< "u;"     << std::endl;
  ss << "       }"                                                                                        << std::endl;
  ss << ""                                                                                                << std::endl;
  ss << "      inline"                                                                                    << std::endl;
  ss << "      void " << name << "( ::color::_internal::model< color::category::"<< model <<"_uint64 > & color_parameter )"   << std::endl;
  ss << "       {"                                                                                        << std::endl;
  ss << "        color_parameter.container() = " << std::setbase(16) << "0x" << i64.container()<< "ul;"    << std::endl;
  ss << "       }"                                                                                        << std::endl;
  ss << ""                                                                                                << std::endl;
  ss << "      inline"                                                                                    << std::endl;
  ss << "      void " << name << "( ::color::_internal::model< color::category::"<< model <<"_float > & color_parameter )"    << std::endl;
  ss << "       {"                                                                                        << std::endl;
  ss << "        color_parameter.container() = std::array<float,3>( { "<< f[0]<<", "<< f[1]<<", "<< f[2]<<" } );"                       << std::endl;
  ss << "       }"                                                                                        << std::endl;
  ss << ""                                                                                                << std::endl;
  ss << "      inline"                                                                                    << std::endl;
  ss << "      void " << name << "( ::color::_internal::model< color::category::"<< model <<"_double> & color_parameter )"    << std::endl;
  ss << "       {"                                                                                        << std::endl;
  ss << "        color_parameter.container() = std::array<double,3>( { "<< d[0]<<", "<< d[1]<<", "<< d[2]<<" } );"                      << std::endl;
  ss << "       }"                                                                                        << std::endl;
  ss << ""                                                                                                << std::endl;
  ss << "      inline"                                                                                    << std::endl;
  ss << "      void " << name << "( ::color::_internal::model< color::category::"<< model <<"_ldouble> & color_parameter )"   << std::endl;
  ss << "       {"                                                                                        << std::endl;
  ss << "        color_parameter.container() = std::array<long double,3>( { "<< ld[0]<<", "<< ld[1]<<", "<< ld[2]<<" } );"                 << std::endl;
  ss << "       }"                                                                                        << std::endl;
  ss << ""                                                                                                << std::endl;
  ss << "    }"                                                                                           << std::endl;
  ss << "  }"                                                                                             << std::endl;
  ss << ""                                                                                                << std::endl;
  ss << "#endif"                                                                                          << std::endl;
  ss << std::endl;

  std::cout << ss.str();
  std::cout << "-------" << std:: endl;

   {
    std::ofstream ofs( ( "./gen/"+name + ".hpp" ). c_str() );
    ofs <<  ss.str();
   }
 
  }

void make_test()
 {
  color::rgb<double>  r;
  color::make::aqua       ( r );  print_header<color::yuv>(  "yuv", "aqua",    r );
  color::make::black      ( r );  print_header<color::yuv>(  "yuv", "black",   r );
  color::make::blue       ( r );  print_header<color::yuv>(  "yuv", "blue",    r );
  color::make::cyan       ( r );  print_header<color::yuv>(  "yuv", "cyan",    r );
  color::make::fuchsia    ( r );  print_header<color::yuv>(  "yuv", "fuchsia", r );
  color::make::gray50     ( r );  print_header<color::yuv>(  "yuv", "gray50",  r );
  color::make::green      ( r );  print_header<color::yuv>(  "yuv", "green",   r );
  color::make::lime       ( r );  print_header<color::yuv>(  "yuv", "lime",    r );
  color::make::magenta    ( r );  print_header<color::yuv>(  "yuv", "magenta", r );
  color::make::maroon     ( r );  print_header<color::yuv>(  "yuv", "maroon",  r );
  color::make::navy       ( r );  print_header<color::yuv>(  "yuv", "navy",    r );
  color::make::olive      ( r );  print_header<color::yuv>(  "yuv", "olive",   r );
  color::make::orange     ( r );  print_header<color::yuv>(  "yuv", "orange",  r );
  color::make::purple     ( r );  print_header<color::yuv>(  "yuv", "purple",  r );
  color::make::red        ( r );  print_header<color::yuv>(  "yuv", "red",     r );
  color::make::silver     ( r );  print_header<color::yuv>(  "yuv", "silver",  r );
  color::make::teal       ( r );  print_header<color::yuv>(  "yuv", "teal",    r );
  color::make::violet     ( r );  print_header<color::yuv>(  "yuv", "violet",  r );
  color::make::white      ( r );  print_header<color::yuv>(  "yuv", "white",   r );
  color::make::yellow     ( r );  print_header<color::yuv>(  "yuv", "yellow",  r );
 }

