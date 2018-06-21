#ifndef color_hwb_category
#define color_hwb_category
// ::color::category::hwb<tag>




namespace color
 {
  namespace category
   {

    template< typename tag_name >
     struct hwb
      {
       typedef void tag_type;
      };

  //using hwb_bool    = ::color::category::hwb< bool    >;
    using hwb_uint8   = ::color::category::hwb< std::uint8_t   >;
    using hwb_uint16  = ::color::category::hwb< std::uint16_t  >;
  //using hwb_uint24  = ::color::category::hwb< uint24  >;
    using hwb_uint32  = ::color::category::hwb< std::uint32_t  >;
  //using hwb_uint48  = ::color::category::hwb< hwb_uint48  >;
    using hwb_uint64  = ::color::category::hwb< std::uint64_t  >;
    using hwb_float   = ::color::category::hwb< float   >;
    using hwb_double  = ::color::category::hwb< double  >;
    using hwb_ldouble = ::color::category::hwb< long double >;

   }
 }

#endif
