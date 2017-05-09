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
       typedef void category_name;
      };

    using luv_bool    = ::color::category::luv< bool    >;
    using luv_uint8   = ::color::category::luv< std::uint8_t   >;
    using luv_uint16  = ::color::category::luv< std::uint16_t  >;
  //using luv_uint24  = ::color::category::luv< uint24  >;
    using luv_uint32  = ::color::category::luv< std::uint32_t  >;
  //using luv_uint48  = ::color::category::luv< luv_uint48  >;
    using luv_uint64  = ::color::category::luv< std::uint64_t  >;
    using luv_float   = ::color::category::luv< float   >;
    using luv_double  = ::color::category::luv< double  >;
    using luv_ldouble = ::color::category::luv< long double >;

   }
 }

#endif
