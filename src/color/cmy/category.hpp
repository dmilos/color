#ifndef color_cmy_category
#define color_cmy_category

namespace color
 {
  namespace category
   {

    template< typename tag_name >
     struct cmy
      {
       typedef void category_name;
      };

  //using cmy_bool    = ::color::category::cmy< bool    >;
    using cmy_uint8   = ::color::category::cmy< std::uint8_t   >;
    using cmy_uint16  = ::color::category::cmy< std::uint16_t  >;
  //using cmy_uint24  = ::color::category::cmy< uint24  >;
    using cmy_uint32  = ::color::category::cmy< std::uint32_t  >;
  //using cmy_uint48  = ::color::category::cmy< uint48  >;
    using cmy_uint64  = ::color::category::cmy< std::uint64_t  >;
    using cmy_float   = ::color::category::cmy< float   >;
    using cmy_double  = ::color::category::cmy< double  >;
    using cmy_ldouble = ::color::category::cmy< long double >;

   }
 }

#endif
