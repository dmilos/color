#ifndef color_yuv_category
#define color_yuv_category

#include "./constant/reference.hpp"

namespace color
 {
  namespace category
   {

    template< typename tag_name , ::color::constant::yuv::reference_enum reference_number = ::color::constant::yuv::BT_601_entity >
     struct yuv
      {
       typedef tag_name tag_name;
       typedef ::color::constant::yuv::reference_enum reference_type;

       enum { reference_entity = reference_number };

       static /* constexpr*/ reference_type const reference()  { return  reference_entity; }
      };

    using yuv_void    = ::color::category::yuv< void          >;
    using yuv_bool    = ::color::category::yuv< bool          >;
    using yuv_uint8   = ::color::category::yuv< std::uint8_t  >;
    using yuv_uint16  = ::color::category::yuv< std::uint16_t >;
  //using yuv_uint24  = ::color::category::yuv< std::uint24_t >;
    using yuv_uint32  = ::color::category::yuv< std::uint32_t >;
  //using yuv_uint48  = ::color::category::yuv< std::uint48_t >;
    using yuv_uint64  = ::color::category::yuv< std::uint64_t >;
    using yuv_float   = ::color::category::yuv< float         >;
    using yuv_double  = ::color::category::yuv< double        >;
    using yuv_ldouble = ::color::category::yuv< long double   >;

   }
 }

#endif
