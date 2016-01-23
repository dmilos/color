#ifndef color_cmyk_category
#define color_cmyk_category

namespace color
 {
  namespace category
   {

    namespace _internal
     {
      struct cmyk_bool    {};
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

    using cmyk_bool    = cmyk< ::color::category::_internal::cmyk_bool    >;
    using cmyk_uint8   = cmyk< ::color::category::_internal::cmyk_uint8   >;
    using cmyk_uint16  = cmyk< ::color::category::_internal::cmyk_uint16  >;
    using cmyk_uint24  = cmyk< ::color::category::_internal::cmyk_uint24  >;
    using cmyk_uint32  = cmyk< ::color::category::_internal::cmyk_uint32  >;
    using cmyk_uint48  = cmyk< ::color::category::_internal::cmyk_uint48  >;
    using cmyk_uint64  = cmyk< ::color::category::_internal::cmyk_uint64  >;
    using cmyk_float   = cmyk< ::color::category::_internal::cmyk_float   >;
    using cmyk_double  = cmyk< ::color::category::_internal::cmyk_double  >;
    using cmyk_ldouble = cmyk< ::color::category::_internal::cmyk_ldouble >;

   }
 }

#endif
