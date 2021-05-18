#ifndef color_hsl_category
#define color_hsl_category

// color::category::hsl< tag >

namespace color
 {
  namespace category
   {

    template< typename tag_name >
     struct hsl
      {
       typedef void tag_type;
      };

    using hsl_bool    = ::color::category::hsl< bool           >;
    using hsl_uint8   = ::color::category::hsl< std::uint8_t   >;
    using hsl_uint16  = ::color::category::hsl< std::uint16_t  >;
  //using hsl_uint24  = ::color::category::hsl< uint24         >;
    using hsl_uint32  = ::color::category::hsl< std::uint32_t  >;
  //using hsl_uint48  = ::color::category::hsl< uint48         >;
    using hsl_uint64  = ::color::category::hsl< std::uint64_t  >;

    using hsl_float   = ::color::category::hsl< float       >;
    using hsl_double  = ::color::category::hsl< double      >;
    using hsl_ldouble = ::color::category::hsl< long double >;

   }
 }

#endif
