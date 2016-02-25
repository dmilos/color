#ifndef color_hsl_category
#define color_hsl_category

namespace color
 {
  namespace category
   {

    namespace _internal
     {
      struct hsl_bool    {};
      struct hsl_uint8   {};
      struct hsl_uint16  {};
      struct hsl_uint24  {};
      struct hsl_uint32  {};
      struct hsl_uint48  {};
      struct hsl_uint64  {};
      struct hsl_float   {};
      struct hsl_double  {};
      struct hsl_ldouble {};
     }

    template< typename tag_name >
     struct hsl
      {
       typedef void category_name;
      };

    using hsl_bool    = ::color::category::hsl< ::color::category::_internal::hsl_bool    >;
    using hsl_uint8   = ::color::category::hsl< ::color::category::_internal::hsl_uint8   >;
    using hsl_uint16  = ::color::category::hsl< ::color::category::_internal::hsl_uint16  >;
    using hsl_uint24  = ::color::category::hsl< ::color::category::_internal::hsl_uint24  >;
    using hsl_uint32  = ::color::category::hsl< ::color::category::_internal::hsl_uint32  >;
    using hsl_uint48  = ::color::category::hsl< ::color::category::_internal::hsl_uint48  >;
    using hsl_uint64  = ::color::category::hsl< ::color::category::_internal::hsl_uint64  >;
    using hsl_float   = ::color::category::hsl< ::color::category::_internal::hsl_float   >;
    using hsl_double  = ::color::category::hsl< ::color::category::_internal::hsl_double  >;
    using hsl_ldouble = ::color::category::hsl< ::color::category::_internal::hsl_ldouble >;

   }
 }

#endif
