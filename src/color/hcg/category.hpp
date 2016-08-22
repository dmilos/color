#ifndef color_hcg_category
#define color_hcg_category

namespace color
 {
  namespace category
   {

    template< typename tag_name >
     struct hcg
      {
       typedef void category_name;
      };

    using hcg_bool    = ::color::category::hcg< bool    >;
    using hcg_uint8   = ::color::category::hcg< std::uint8_t   >;
    using hcg_uint16  = ::color::category::hcg< std::uint16_t  >;
  //using hcg_uint24  = ::color::category::hcg< uint24_t  >;
    using hcg_uint32  = ::color::category::hcg< std::uint32_t  >;
  //using hcg_uint48  = ::color::category::hcg< uint48_t  >;
    using hcg_uint64  = ::color::category::hcg< std::uint64_t  >;
    using hcg_float   = ::color::category::hcg< float   >;
    using hcg_double  = ::color::category::hcg< double  >;
    using hcg_ldouble = ::color::category::hcg< long double >;

   }
 }

#endif
