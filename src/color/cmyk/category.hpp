#ifndef color_cmyk_category
#define color_cmyk_category

namespace color
 {
  namespace category
   {

    template< typename tag_name >
     struct cmyk
      {
       typedef void category_name;
      };

  //using cmyk_bool    = ::color::category::cmyk< bool    >;
    using cmyk_uint8   = ::color::category::cmyk< std::uint8_t   >;
    using cmyk_uint16  = ::color::category::cmyk< std::uint16_t  >;
  //using cmyk_uint24  = ::color::category::cmyk< uint24  >;
    using cmyk_uint32  = ::color::category::cmyk< std::uint32_t  >;
  //using cmyk_uint48  = ::color::category::cmyk< uint48  >;
    using cmyk_uint64  = ::color::category::cmyk< std::uint64_t  >;
    using cmyk_float   = ::color::category::cmyk< float   >;
    using cmyk_double  = ::color::category::cmyk< double  >;
    using cmyk_ldouble = ::color::category::cmyk< long double >;

   }
 }

#endif
