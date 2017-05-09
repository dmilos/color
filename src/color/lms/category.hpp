#ifndef color_lms_category
#define color_lms_category
// ::color::category::lms<tag>




namespace color
 {
  namespace category
   {

    template< typename tag_name >
     struct lms
      {
       typedef void category_name;
      };

    using lms_bool    = ::color::category::lms< bool    >;
    using lms_uint8   = ::color::category::lms< std::uint8_t   >;
    using lms_uint16  = ::color::category::lms< std::uint16_t  >;
  //using lms_uint24  = ::color::category::lms< uint24  >;
    using lms_uint32  = ::color::category::lms< std::uint32_t  >;
  //using lms_uint48  = ::color::category::lms< lms_uint48  >;
    using lms_uint64  = ::color::category::lms< std::uint64_t  >;
    using lms_float   = ::color::category::lms< float   >;
    using lms_double  = ::color::category::lms< double  >;
    using lms_ldouble = ::color::category::lms< long double >;

   }
 }

#endif
