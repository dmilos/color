#ifndef color_hsv_category
#define color_hsv_category

namespace color
 {
  namespace category
   {

    template< typename tag_name >
     struct hsv
      {
       typedef void tag_type;
      };

  //using hsv_bool    = ::color::category::hsv< bool    >;
    using hsv_uint8   = ::color::category::hsv< std::uint8_t   >;
    using hsv_uint16  = ::color::category::hsv< std::uint16_t  >;
  //using hsv_uint24  = ::color::category::hsv< uint24  >;
    using hsv_uint32  = ::color::category::hsv< std::uint32_t  >;
  //using hsv_uint48  = ::color::category::hsv< uint48  >;
    using hsv_uint64  = ::color::category::hsv< std::uint64_t  >;
    using hsv_float   = ::color::category::hsv< float   >;
    using hsv_double  = ::color::category::hsv< double  >;
    using hsv_ldouble = ::color::category::hsv< long double >;

   }
 }

#endif
