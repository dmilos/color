#ifndef color_gray_category
#define color_gray_category
// ::color::category::gray< tag_name >


namespace color
 {
  namespace category
   {

    template< typename tag_name >
     struct gray
      {
       typedef void tag_type;
      };

    using gray_bool    = ::color::category::gray< bool    >;
    using gray_uint8   = ::color::category::gray< std::uint8_t   >;
    using gray_uint16  = ::color::category::gray< std::uint16_t  >;
  //using gray_uint24  = ::color::category::gray< uint24  >;
    using gray_uint32  = ::color::category::gray< std::uint32_t  >;
  //using gray_uint48  = ::color::category::gray< uint48  >;
    using gray_uint64  = ::color::category::gray< std::uint64_t  >;
    using gray_float   = ::color::category::gray< float   >;
    using gray_double  = ::color::category::gray< double  >;
    using gray_ldouble = ::color::category::gray< long double >;

   }
 }

#endif
