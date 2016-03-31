#include <iostream>
#include <iomanip>
#include <sstream>
#include <fstream>
#include <string>

#include "color/color.hpp"


template < typename category_name >
 std::string print_sizeof_one( ) 
  {
   std::stringstream ss;

  if( false == ::color::trait::info< category_name >::meaningful_enum )
   {
    ss << "<s>";    
   }

   if( false == ::color::trait::info< category_name >::implemented_enum )
    {
	 ss << "\"";
    }

   ss << sizeof( ::color::model<category_name> );

   if( false == ::color::trait::info< category_name >::implemented_enum )
    {
	 ss << "\"";
    }

  if( false == ::color::trait::info< category_name >::meaningful_enum )
   {
    ss << "</s>";    
   }

  return ss.str();
 }

template < template<typename> class color_name >
std::string print_sizeof( std::string const& name )
 {

  typedef color_name< bool                  > b_type;
  typedef color_name< std::uint8_t          > u8_type;
  typedef color_name< std::uint16_t         > u16_type;
  typedef color_name< color::type::uint24_t > u24_type;
  typedef color_name< std::uint32_t         > u32_type;
  typedef color_name< color::type::uint48_t > u48_type;
  typedef color_name< std::uint64_t         > u64_type;

  typedef color_name< float                 > f_type;
  typedef color_name< double                > d_type;
  typedef color_name< long double           > dl_type;

  typedef color_name< color::type::split233_t >  split233_type;
  typedef color_name< color::type::split332_t >  split332_type;
  typedef color_name< color::type::split422_t >  split422_type;
  typedef color_name< color::type::split556_t >  split556_type;
  typedef color_name< color::type::split565_t >  split565_type;
  typedef color_name< color::type::split655_t >  split655_type;

  typedef color_name< color::type::split2222_t > split2222_type;
  typedef color_name< color::type::split4444_t > split4444_type;
  typedef color_name< color::type::split8888_t > split8888_type;

  typedef color_name< color::type::split5551_t > split5551_type;
  typedef color_name< color::type::splitAAA2_t > splitAAA2_type;

  std::stringstream ss;

  ss << "<tr>";

  ss << "<td>"       << name  << "</td>" ;

  ss << "<td>" << print_sizeof_one<typename b_type::category_type>()  << "</td>";

  ss << "<td>" << print_sizeof_one<typename  u8_type  ::category_type>() << "</td>";
  ss << "<td>" << print_sizeof_one<typename  u16_type ::category_type>() << "</td>";
  ss << "<td>" << print_sizeof_one<typename  u24_type ::category_type>() << "</td>";
  ss << "<td>" << print_sizeof_one<typename  u32_type ::category_type>() << "</td>";
  ss << "<td>" << print_sizeof_one<typename  u48_type ::category_type>() << "</td>";
  ss << "<td>" << print_sizeof_one<typename  u64_type ::category_type>() << "</td>";

  ss << "<td>" << print_sizeof_one<typename  f_type   ::category_type>() << "</td>";
  ss << "<td>" << print_sizeof_one<typename  d_type   ::category_type>() << "</td>";
  ss << "<td>" << print_sizeof_one<typename  dl_type  ::category_type>() << "</td>";

  ss << "<td>" << print_sizeof_one<typename  split233_type   ::category_type>() << "</td>";
  ss << "<td>" << print_sizeof_one<typename  split332_type   ::category_type>() << "</td>";
  ss << "<td>" << print_sizeof_one<typename  split422_type   ::category_type>() << "</td>";
  ss << "<td>" << print_sizeof_one<typename  split556_type   ::category_type>() << "</td>";
  ss << "<td>" << print_sizeof_one<typename  split565_type   ::category_type>() << "</td>";
  ss << "<td>" << print_sizeof_one<typename  split655_type   ::category_type>() << "</td>";
  ss << "<td>" << print_sizeof_one<typename  split2222_type  ::category_type>() << "</td>";
  ss << "<td>" << print_sizeof_one<typename  split4444_type  ::category_type>() << "</td>";
  ss << "<td>" << print_sizeof_one<typename  split8888_type  ::category_type>() << "</td>";
  ss << "<td>" << print_sizeof_one<typename  splitAAA2_type  ::category_type>() << "</td>";

  ss << "</tr>";

  return ss.str();
 }

void check_sizeof()
 {
  std::stringstream ss;

  ss << "<table border=\"1\" cellspacing=\"0\" cellpadding=\"2\" >" << std::endl;

  ss << "<tr>";
  ss << "<td>"       << "model"<< "</td>" ;

  ss << "<td>"       << "<code>bool</code>                 "<< "</td>" ;

  ss << "<td>"       << "<code>uint8_t</code>         "<< "</td>" ;
  ss << "<td>"       << "<code>uint16_t</code>        "<< "</td>" ;
  ss << "<td>"       << "<code>uint24_t</code>"<< "</td>" ;
  ss << "<td>"       << "<code>uint32_t</code>        "<< "</td>" ;
  ss << "<td>"       << "<code>uint48_t"<< "</td>" ;
  ss << "<td>"       << "<code>uint64_t</code>        "<< "</td>" ;

  ss << "<td>"       << "<code>float      </code>" << "</td>" ;
  ss << "<td>"       << "<code>double     </code>" << "</td>" ;
  ss << "<td>"       << "<code>long double</code>" << "</td>" ;

  ss << "<td>"       << "<code>split233</code>"  << "</td>" ;
  ss << "<td>"       << "<code>split332</code>"  << "</td>" ;
  ss << "<td>"       << "<code>split422</code>"  << "</td>" ;
  ss << "<td>"       << "<code>split556</code>"  << "</td>" ;
  ss << "<td>"       << "<code>split565</code>"  << "</td>" ;
  ss << "<td>"       << "<code>split655</code>"  << "</td>" ;

  ss << "<td>"       << "<code>split2222</code>"  << "</td>" ;
  ss << "<td>"       << "<code>split4444</code>"  << "</td>" ;
  ss << "<td>"       << "<code>split8888</code>"  << "</td>" ;

  ss << "<td>"       << "<code>splitAAA2</code>"  << "</td>" ;
  ss << "</tr>" << std::endl;

  ss << print_sizeof<::color::rgb  > ( "<code>rgb </code>" );  ss << std::endl;
  ss << print_sizeof<::color::rgba > ( "<code>rgba</code>" );  ss << std::endl;
  ss << print_sizeof<::color::cmy  > ( "<code>cmy </code>" );  ss << std::endl;
  ss << print_sizeof<::color::cmyk > ( "<code>cmyk</code>" );  ss << std::endl;
  ss << print_sizeof<::color::gray > ( "<code>gray</code>" );  ss << std::endl;
  ss << print_sizeof<::color::hsl  > ( "<code>hsl </code>" );  ss << std::endl;
  ss << print_sizeof<::color::hsv  > ( "<code>hsv </code>" );  ss << std::endl;
  ss << print_sizeof<::color::yiq  > ( "<code>yiq </code>" );  ss << std::endl;
  ss << print_sizeof<::color::yuv  > ( "<code>yuv </code>" );  ss << std::endl;

  ss << "</table>";

   {
    std::ofstream ofs( std::string( "./mc.html" ).c_str() );
    ofs <<  ss.str();
   }

 }
