#ifndef color_hsi_category
#define color_hsi_category

namespace color
 {
  namespace category
   {

    template< typename tag_name >
     struct hsi
      {
       typedef void tag_type;
      };

  //using hsi_bool    = ::color::category::hsi< bool    >;
    using hsi_uint8   = ::color::category::hsi< std::uint8_t   >;
    using hsi_uint16  = ::color::category::hsi< std::uint16_t  >;
  //using hsi_uint24  = ::color::category::hsi< uint24  >;
    using hsi_uint32  = ::color::category::hsi< std::uint32_t  >;
  //using hsi_uint48  = ::color::category::hsi< uint48  >;
    using hsi_uint64  = ::color::category::hsi< std::uint64_t  >;
    using hsi_float   = ::color::category::hsi< float   >;
    using hsi_double  = ::color::category::hsi< double  >;
    using hsi_ldouble = ::color::category::hsi< long double >;

   }
 }

#endif
