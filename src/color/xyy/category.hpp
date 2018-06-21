#ifndef color_xyy_category
#define color_xyy_category
// ::color::category::xyy<tag>




namespace color
 {
  namespace category
   {

    template< typename tag_name >
     struct xyy
      {
       typedef void tag_type;
      };

    using xyy_bool    = ::color::category::xyy< bool    >;
    using xyy_uint8   = ::color::category::xyy< std::uint8_t   >;
    using xyy_uint16  = ::color::category::xyy< std::uint16_t  >;
  //using xyy_uint24  = ::color::category::xyy< uint24  >;
    using xyy_uint32  = ::color::category::xyy< std::uint32_t  >;
  //using xyy_uint48  = ::color::category::xyy< xyy_uint48  >;
    using xyy_uint64  = ::color::category::xyy< std::uint64_t  >;
    using xyy_float   = ::color::category::xyy< float   >;
    using xyy_double  = ::color::category::xyy< double  >;
    using xyy_ldouble = ::color::category::xyy< long double >;

   }
 }

#endif
