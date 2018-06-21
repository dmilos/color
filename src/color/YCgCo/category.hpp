#ifndef color_YCgCo_category
#define color_YCgCo_category

namespace color
 {
  namespace category
   {

    template< typename tag_name >
     struct YCgCo
      {
       typedef void tag_type;
      };

    using YCgCo_uint8   = ::color::category::YCgCo< std::uint8_t  >;
    using YCgCo_uint16  = ::color::category::YCgCo< std::uint16_t >;
  //using YCgCo_uint24  = ::color::category::YCgCo< uint24_t >;
    using YCgCo_uint32  = ::color::category::YCgCo< std::uint32_t >;
  //using YCgCo_uint48  = ::color::category::YCgCo< uint48_t >;
    using YCgCo_uint64  = ::color::category::YCgCo< std::uint64_t >;
    using YCgCo_float   = ::color::category::YCgCo< float         >;
    using YCgCo_double  = ::color::category::YCgCo< double        >;
    using YCgCo_ldouble = ::color::category::YCgCo< long double   >;

   }
 }

#endif
