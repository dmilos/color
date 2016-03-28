#ifndef color_cmyk_category
#define color_cmyk_category

namespace color
 {
  namespace category
   {

    namespace _internal
     {
    //struct cmyk_bool    {};
      struct cmyk_uint8   {};
      struct cmyk_uint16  {};
      struct cmyk_uint24  {};
      struct cmyk_uint32  {};
      struct cmyk_uint48  {};
      struct cmyk_uint64  {};
      struct cmyk_float   {};
      struct cmyk_double  {};
      struct cmyk_ldouble {};
     }

    template< typename tag_name >
     struct cmyk
      {
       typedef void category_name;
      };

  //using cmyk_bool    = ::color::category::cmyk< ::color::category::_internal::cmyk_bool    >;
    using cmyk_uint8   = ::color::category::cmyk< ::color::category::_internal::cmyk_uint8   >;
    using cmyk_uint16  = ::color::category::cmyk< ::color::category::_internal::cmyk_uint16  >;
    using cmyk_uint24  = ::color::category::cmyk< ::color::category::_internal::cmyk_uint24  >;
    using cmyk_uint32  = ::color::category::cmyk< ::color::category::_internal::cmyk_uint32  >;
    using cmyk_uint48  = ::color::category::cmyk< ::color::category::_internal::cmyk_uint48  >;
    using cmyk_uint64  = ::color::category::cmyk< ::color::category::_internal::cmyk_uint64  >;
    using cmyk_float   = ::color::category::cmyk< ::color::category::_internal::cmyk_float   >;
    using cmyk_double  = ::color::category::cmyk< ::color::category::_internal::cmyk_double  >;
    using cmyk_ldouble = ::color::category::cmyk< ::color::category::_internal::cmyk_ldouble >;

   }
 }

#endif
