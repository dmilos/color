#ifndef color_YDbDr_category
#define color_YDbDr_category

namespace color
 {
  namespace category
   {

    template< typename tag_name >
     struct YDbDr
      {
       typedef void tag_type;
      };

    using YDbDr_bool    = ::color::category::YDbDr< bool    >;
    using YDbDr_uint8   = ::color::category::YDbDr< std::uint8_t   >;
    using YDbDr_uint16  = ::color::category::YDbDr< std::uint16_t  >;
  //using YDbDr_uint24  = ::color::category::YDbDr< uint24_t  >;
    using YDbDr_uint32  = ::color::category::YDbDr< std::uint32_t  >;
  //using YDbDr_uint48  = ::color::category::YDbDr< uint48_t  >;
    using YDbDr_uint64  = ::color::category::YDbDr< std::uint64_t  >;
    using YDbDr_float   = ::color::category::YDbDr< float   >;
    using YDbDr_double  = ::color::category::YDbDr< double  >;
    using YDbDr_ldouble = ::color::category::YDbDr< long double >;

   }
 }

#endif
