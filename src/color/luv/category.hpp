#ifndef color_luv_category
#define color_luv_category
// ::color::category::luv<tag>




namespace color
 {
  namespace category
   {

    template< typename tag_name >
     struct luv
      {
       typedef void tag_type;
      };

    using luv_uint8   = ::color::category::luv< std::uint8_t   >;
    using luv_uint16  = ::color::category::luv< std::uint16_t  >;
  //using luv_uint24  = ::color::category::luv<      uint24    >;
    using luv_uint32  = ::color::category::luv< std::uint32_t  >;
  //using luv_uint48  = ::color::category::luv<      uint48    >;
    using luv_uint64  = ::color::category::luv< std::uint64_t  >;

    using luv_int8    = ::color::category::luv< std::int8_t   >;
    using luv_int16   = ::color::category::luv< std::int16_t  >;
  //using luv_int24   = ::color::category::luv<      int24    >;
    using luv_int32   = ::color::category::luv< std::int32_t  >;
  //using luv_int48   = ::color::category::luv<      int48    >;
    using luv_int64   = ::color::category::luv< std::int64_t  >;

    using luv_float   = ::color::category::luv< float   >;
    using luv_double  = ::color::category::luv< double  >;
    using luv_ldouble = ::color::category::luv< long double >;

   }
 }

#endif
