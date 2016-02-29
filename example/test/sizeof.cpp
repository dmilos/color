#include <iostream>
#include <iomanip>
#include <sstream>
#include <fstream>
#include <string>

#include "color/color.hpp"


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
  typedef color_name< color::type::splitAAA2_t > splitAAA2_type;

  std::stringstream ss;

  ss << "<tr>";

  ss << "<td>"       << name  << "</td>" ;

  ss << "<td>" << sizeof( b_type   ) << "</td>";

  ss << "<td>" << sizeof( u8_type  ) << "</td>";
  ss << "<td>" << sizeof( u16_type ) << "</td>";
  ss << "<td>" << sizeof( u24_type ) << "</td>";
  ss << "<td>" << sizeof( u32_type ) << "</td>";
  ss << "<td>" << sizeof( u48_type ) << "</td>";
  ss << "<td>" << sizeof( u64_type ) << "</td>";

  ss << "<td>" << sizeof( f_type   ) << "</td>";
  ss << "<td>" << sizeof( d_type   ) << "</td>";
  ss << "<td>" << sizeof( dl_type  ) << "</td>";

  ss << "<td>" << sizeof( split233_type   ) << "</td>";
  ss << "<td>" << sizeof( split332_type   ) << "</td>";
  ss << "<td>" << sizeof( split422_type   ) << "</td>";
  ss << "<td>" << sizeof( split556_type   ) << "</td>";
  ss << "<td>" << sizeof( split565_type   ) << "</td>";
  ss << "<td>" << sizeof( split655_type   ) << "</td>";
  ss << "<td>" << sizeof( splitAAA2_type  ) << "</td>";

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
  ss << "<td>"       << "<code>splitAAA2</code>"  << "</td>" ;
  ss << "</tr>" << std::endl;

  ss << print_sizeof<::color::rgb  > ( "<code>rgb </code>" );  ss << std::endl;
  ss << print_sizeof<::color::cmy  > ( "<code>cmy </code>" );  ss << std::endl;
  ss << print_sizeof<::color::cmyk >( "<code>cmyk</code>" );  ss << std::endl;
  ss << print_sizeof<::color::gray >( "<code>gray</code>" );  ss << std::endl;
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
