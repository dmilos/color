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

  if( false == ::color::trait::info< category_name >::meaningful_entity )
   {
    ss << "<s>";
   }

   if( false == ::color::trait::info< category_name >::implemented_entity )
    {
     ss << "\"";
    }

   ss << sizeof( ::color::model<category_name> );

   if( false == ::color::trait::info< category_name >::implemented_entity )
    {
     ss << "\"";
    }

  if( false == ::color::trait::info< category_name >::meaningful_entity )
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
  
  typedef color_name< std::int8_t          > i8_type;
  typedef color_name< std::int16_t         > i16_type;
  typedef color_name< color::type::int24_t > i24_type;
  typedef color_name< std::int32_t         > i32_type;
  typedef color_name< color::type::int48_t > i48_type;
  typedef color_name< std::int64_t         > i64_type;


  typedef color_name< float                 > f_type;
  typedef color_name< double                > d_type;
  typedef color_name< long double           > dl_type;

  typedef color_name< color::type::split233_t >  split233_type;
  typedef color_name< color::type::split332_t >  split332_type;

  typedef color_name< color::type::split233_t > split233_type;
  typedef color_name< color::type::split323_t > split323_type;
  typedef color_name< color::type::split332_t > split332_type;

  typedef color_name< color::type::split422_t > split422_type;
  typedef color_name< color::type::split242_t > split242_type;
  typedef color_name< color::type::split224_t > split224_type;

  typedef color_name< color::type::split555_t > split555_type;

  typedef color_name< color::type::split655_t > split655_type;
  typedef color_name< color::type::split565_t > split565_type;
  typedef color_name< color::type::split556_t > split556_type;

  typedef color_name< color::type::split888_t > split888_type;

  typedef color_name< color::type::splitCAA_t > splitCAA_type;
  typedef color_name< color::type::splitACA_t > splitACA_type;
  typedef color_name< color::type::splitAAC_t > splitAAC_type;

  typedef color_name< color::type::split2222_t >  split2222_type;

  typedef color_name< color::type::split4444_t >  split4444_type;

  typedef color_name< color::type::split5551_t >  split5551_type;
  typedef color_name< color::type::split1555_t >  split1555_type;

  typedef color_name< color::type::split6666_t >  split6666_type;

  typedef color_name< color::type::split8888_t >  split8888_type;

  typedef color_name< color::type::split2AAA_t >  split2AAA_type;
  typedef color_name< color::type::splitAAA2_t >  splitAAA2_type;

  typedef color_name< color::type::splitGGGG_t >  splitGGGG_type;

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

  ss << "<td>" << print_sizeof_one<typename  split5551_type   ::category_type>() << "</td>";
  ss << "<td>" << print_sizeof_one<typename  split1555_type   ::category_type>() << "</td>";

  ss << "<td>" << print_sizeof_one<typename  split2222_type  ::category_type>() << "</td>";
  ss << "<td>" << print_sizeof_one<typename  split4444_type  ::category_type>() << "</td>";
  ss << "<td>" << print_sizeof_one<typename  split8888_type  ::category_type>() << "</td>";
  ss << "<td>" << print_sizeof_one<typename  splitAAA2_type  ::category_type>() << "</td>";

  ss << "</tr>";

  return ss.str();
 }


std::string print_system_sizeof( )
 {
  std::stringstream ss;
  ss << "<table border=\"1\" cellspacing=\"0\" cellpadding=\"2\" >" << std::endl;

  ss << "<tr><td> Type </td> <td> Size</td> </tr> ";

  ss << "<tr><td> char          </td> <td> "<< sizeof( char          )<< "</td> </tr> " << std::endl;
  ss << "<tr><td> char          </td> <td> "<< sizeof( unsigned char )<< "</td> </tr> " << std::endl;
  ss << "<tr><td> wchar_t       </td> <td> "<< sizeof( wchar_t       )<< "</td> </tr> " << std::endl;
  ss << "<tr><td> wchar_t       </td> <td> "<< sizeof( wint_t       )<< "</td> </tr> " << std::endl;

  ss << "<tr><td> std::int8_t  </td> <td> "<< sizeof( std::int8_t  )<< "</td> </tr> " << std::endl;
  ss << "<tr><td> std::int16_t </td> <td> "<< sizeof( std::int16_t )<< "</td> </tr> " << std::endl;
  ss << "<tr><td> std::int32_t </td> <td> "<< sizeof( std::int32_t )<< "</td> </tr> " << std::endl;
  ss << "<tr><td> std::int64_t </td> <td> "<< sizeof( std::int64_t )<< "</td> </tr> " << std::endl;

  ss << "<tr><td> std::uint8_t  </td> <td> "<< sizeof( std::uint8_t  )<< "</td> </tr> " << std::endl;
  ss << "<tr><td> std::uint16_t </td> <td> "<< sizeof( std::uint16_t )<< "</td> </tr> " << std::endl;
  ss << "<tr><td> std::uint32_t </td> <td> "<< sizeof( std::uint32_t )<< "</td> </tr> " << std::endl;
  ss << "<tr><td> std::uint64_t </td> <td> "<< sizeof( std::uint64_t )<< "</td> </tr> " << std::endl;

  ss << "<tr><td> float         </td> <td> "<< sizeof( float         )<< "</td> </tr> " << std::endl;
  ss << "<tr><td> double        </td> <td> "<< sizeof( double        )<< "</td> </tr> " << std::endl;
  ss << "<tr><td> long double   </td> <td> "<< sizeof( long double   )<< "</td> </tr> " << std::endl;

  ss << "<tr><td> nullptr_t     </td> <td> "<< sizeof( nullptr_t         )<< "</td> </tr> " << std::endl;
  ss << "<tr><td> void*         </td> <td> "<< sizeof( void*          )<< "</td> </tr> " << std::endl;
  ss << "<tr><td> unsigned      </td> <td> "<< sizeof( short          )<< "</td> </tr> " << std::endl;
  ss << "<tr><td> short         </td> <td> "<< sizeof( unsigned short )<< "</td> </tr> " << std::endl;
  ss << "<tr><td> int           </td> <td> "<< sizeof( int            )<< "</td> </tr> " << std::endl;
  ss << "<tr><td> unsigned      </td> <td> "<< sizeof( unsigned       )<< "</td> </tr> " << std::endl;
  ss << "<tr><td> long          </td> <td> "<< sizeof( long           )<< "</td> </tr> " << std::endl;
  ss << "<tr><td> long long     </td> <td> "<< sizeof( long long      )<< "</td> </tr> " << std::endl;


  ss << "</table>";
  return ss.str();
 }


template< typename type_type  >
 using yuv601 = color::yuv <type_type, ::color::constant::yuv::BT_601_entity >;

template< typename  type_type  >
 using yuv709 = color::yuv< type_type, ::color::constant::yuv::BT_709_entity >;

template< typename  type_type  >
 using YPbPr601  = ::color::YPbPr< type_type, ::color::constant::YPbPr::BT_601_entity>;

template< typename  type_type  >
 using YPbPr709  = ::color::YPbPr< type_type, ::color::constant::YPbPr::BT_709_entity>;

template< typename  type_type  >
 using YPbPr2020 = ::color::YPbPr< type_type, ::color::constant::YPbPr::BT_2020_entity>;

template< typename  type_type  >
 using lms1 = ::color::lms< type_type, ::color::constant::lms::von_Kries_D65_entity >;

template< typename  type_type  > using lmsKries65 = ::color::lms< type_type, ::color::constant::lms::von_Kries_D65_entity  >;
template< typename  type_type  > using lmsKriesE  = ::color::lms< type_type, ::color::constant::lms::von_Kries_E_entity  >;
template< typename  type_type  > using lmsBFD     = ::color::lms< type_type, ::color::constant::lms::BFD_entity  >;
template< typename  type_type  > using lmsMCAT02  = ::color::lms< type_type, ::color::constant::lms::MCAT02_entity  >;

template< typename  type_type  > using labHunter  = ::color::lab< type_type/*, ::color::constant::lab::Hunter_entity */ >;
template< typename  type_type  > using labCIE     = ::color::lab< type_type/*, ::color::constant::lab::CIE_entity    */ >;


void check_sizeof()
 {
  std::stringstream ss;

  ss << "<table border=\"1\" cellspacing=\"0\" cellpadding=\"2\" >" << std::endl;

  ss << "<tr>";
  ss << "<td>"       << "model"<< "</td>" ;

  ss << "<td>"       << "<code>bool</code>            (" << sizeof( bool          ) << " )</td>" ;

  ss << "<td>"       << "<code>uint8_t</code>         (" << sizeof( std::uint8_t   ) << " )</td>" ;
  ss << "<td>"       << "<code>uint16_t</code>        (" << sizeof( std::uint16_t  ) << " )</td>" ;
  ss << "<td>"       << "<code>uint24_t</code>        (" << sizeof( ::color::type::uint24_t  ) << " )</td>" ;
  ss << "<td>"       << "<code>uint32_t</code>        (" << sizeof( std::uint32_t  ) << " )</td>" ;
  ss << "<td>"       << "<code>uint48_t               (" << sizeof( ::color::type::uint48_t  ) << " )</td>" ;
  ss << "<td>"       << "<code>uint64_t</code>        (" << sizeof( std::uint64_t  ) << " )</td>" ;

  ss << "<td>"       << "<code>float      </code>     (" << sizeof( float        ) << " )</td>" ;
  ss << "<td>"       << "<code>double     </code>     (" << sizeof( double       ) << " )</td>" ;
  ss << "<td>"       << "<code>long double</code>     (" << sizeof( long double  ) << " )</td>" ;

  ss << "<td>"       << "<code>split233</code>        </td>" ;
  ss << "<td>"       << "<code>split332</code>        </td>" ;
  ss << "<td>"       << "<code>split422</code>        </td>" ;
  ss << "<td>"       << "<code>split556</code>        </td>" ;
  ss << "<td>"       << "<code>split565</code>        </td>" ;
  ss << "<td>"       << "<code>split655</code>        </td>" ;

  ss << "<td>"       << "<code>split5551</code>       </td>" ;
  ss << "<td>"       << "<code>split1555</code>       </td>" ;

  ss << "<td>"       << "<code>split2222</code>       </td>" ;
  ss << "<td>"       << "<code>split4444</code>       </td>" ;
  ss << "<td>"       << "<code>split8888</code>       </td>" ;

  ss << "<td>"       << "<code>splitAAA2</code>       </td>" ;
  ss << "</tr>" << std::endl;

  ss << print_sizeof<::color::rgb  > ( "<code>rgb</code>" );  ss << std::endl;
  ss << print_sizeof<::color::bgr  > ( "<code>bgr</code>" );  ss << std::endl;

  ss << print_sizeof<::color::rgba > ( "<code>rgba</code>" );  ss << std::endl;
  ss << print_sizeof<::color::argb > ( "<code>argb</code>" );  ss << std::endl;

  ss << print_sizeof<::color::bgra > ( "<code>bgra</code>" );  ss << std::endl;
  ss << print_sizeof<::color::abgr > ( "<code>abgr</code>" );  ss << std::endl;

  ss << print_sizeof<::color::cmy  > ( "<code>cmy </code>" );  ss << std::endl;
  ss << print_sizeof<::color::cmyk > ( "<code>cmyk</code>" );  ss << std::endl;
  ss << print_sizeof<::color::gray > ( "<code>gray</code>" );  ss << std::endl;
  ss << print_sizeof<::color::hsl  > ( "<code>hsl </code>" );  ss << std::endl;
  ss << print_sizeof<::color::hsv  > ( "<code>hsv </code>" );  ss << std::endl;
  ss << print_sizeof<::color::hsi  > ( "<code>hsi </code>" );  ss << std::endl;
  ss << print_sizeof<::color::yiq  > ( "<code>yiq </code>" );  ss << std::endl;

  ss << print_sizeof< yuv601  > ( "<code>yuv601 </code>" );  ss << std::endl;
  ss << print_sizeof< yuv709  > ( "<code>yuv709 </code>" );  ss << std::endl;

  ss << print_sizeof< YPbPr601   > ( "<code>YPbPr601  </code>" );  ss << std::endl;
  ss << print_sizeof< YPbPr709   > ( "<code>YPbPr709  </code>" );  ss << std::endl;
  ss << print_sizeof< YPbPr2020  > ( "<code>YPbPr2020 </code>" );  ss << std::endl;

  ss << print_sizeof<::color::YCgCo  > ( "<code>YCgCo </code>" );  ss << std::endl;
  ss << print_sizeof<::color::YDbDr  > ( "<code>YDbDr </code>" );  ss << std::endl;
  ss << print_sizeof<::color::xyz    > ( "<code>xyz </code>"   );  ss << std::endl;
  ss << print_sizeof< labCIE    > ( "<code>labCIE</code>"   );  ss << std::endl;
  ss << print_sizeof< labHunter > ( "<code>labHunter </code>"   );  ss << std::endl;
  ss << print_sizeof< lmsKries65 > ( "<code>lmsKries65 </code>"   );  ss << std::endl;
  ss << print_sizeof< lmsKriesE  > ( "<code>lmsKriesE  </code>"   );  ss << std::endl;
  ss << print_sizeof< lmsBFD     > ( "<code>lmsBFD     </code>"   );  ss << std::endl;
  ss << print_sizeof< lmsMCAT02  > ( "<code>lmsMCAT02  </code>"   );  ss << std::endl;
  ss << print_sizeof<::color::luv    > ( "<code>luv </code>"   );  ss << std::endl;
  ss << print_sizeof<::color::xyy    > ( "<code>xyy </code>"   );  ss << std::endl;


  ss << "</table>";

  ss << "<br />";

  ss << print_system_sizeof();

  ss << "<br />";


  ss << "<table border=\"1\" cellspacing=\"0\" cellpadding=\"2\" >" << std::endl;
  {
   #ifdef _MSVC_LANG
   ss << "<tr><td>    _MSVC_LANG </td> <td>" <<  _MSVC_LANG << " </td></tr>" << std::endl;
   #endif

   #if defined ( _MSC_BUILD )
   ss << "<tr><td>  _MSC_BUILD   </td> <td>" <<  _MSC_BUILD << " </td></tr>" << std::endl;
   #endif

   #if defined ( _MSC_VER )
   ss << "<tr><td>   _MSC_VER  </td> <td>" <<  _MSC_VER << " </td></tr>" << std::endl;
   #endif

   #if defined ( _MSC_FULL_VER )
   ss << "<tr><td>  _MSC_FULL_VER   </td> <td>" <<  _MSC_FULL_VER << " </td></tr>" << std::endl;
   #endif
  }
  {
   #if defined ( __GNUC__ )
   ss << "<tr><td>   __GNUC__  </td> <td>" <<  __GNUC__ << " </td></tr>" << std::endl;
   #endif

   #if defined ( __GNUC_MINOR__ )
   ss << "<tr><td>  __GNUC_MINOR__   </td> <td>" <<  __GNUC_MINOR__ << " </td></tr>" << std::endl;
   #endif

   #if defined ( __GNUC_PATCHLEVEL__ )
   ss << "<tr><td>   __GNUC_PATCHLEVEL__  </td> <td>" <<  __GNUC_PATCHLEVEL__ << " </td></tr>" << std::endl;
   #endif

   #if defined ( __STRICT_ANSI__ )
   ss << "<tr><td>  __STRICT_ANSI__   </td> <td>" <<  __STRICT_ANSI__ << " </td></tr>" << std::endl;
   #endif

   #if defined ( __VERSION__ )
   ss << "<tr><td>   __VERSION__  </td> <td>" <<  __VERSION__ << " </td></tr>" << std::endl;
   #endif

  }

  ss << "</table>" << std::endl;

   {
    std::ofstream ofs( std::string( "./mc.html" ).c_str() );
    ofs <<  ss.str();
   }

 }
