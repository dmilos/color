#ifndef color_tsl_category
#define color_tsl_category

namespace color
 {
  namespace category
   {

    template< typename tag_name >
     struct tsl
      {
       typedef void category_name;
      };

  //using tsl_bool    = ::color::category::tsl< bool    >;
    using tsl_uint8   = ::color::category::tsl< std::uint8_t   >;
    using tsl_uint16  = ::color::category::tsl< std::uint16_t  >;
  //using tsl_uint24  = ::color::category::tsl< uint24  >;
    using tsl_uint32  = ::color::category::tsl< std::uint32_t  >;
  //using tsl_uint48  = ::color::category::tsl< uint48  >;
    using tsl_uint64  = ::color::category::tsl< std::uint64_t  >;
    using tsl_float   = ::color::category::tsl< float   >;
    using tsl_double  = ::color::category::tsl< double  >;
    using tsl_ldouble = ::color::category::tsl< long double >;

   }
 }

#endif
