#ifndef color_generic_category_generic
#define color_generic_category_generic

// ::color::category::generic<>

namespace color
 {
  namespace category
   {

    namespace _internal
     {
      struct generic_bool    {};
      struct generic_uint8   {};
      struct generic_uint16  {};
      struct generic_uint24  {};
      struct generic_uint32  {};
      struct generic_uint48  {};
      struct generic_uint64  {};
      struct generic_float   {};
      struct generic_double  {};
      struct generic_ldouble {};
     }

    template< typename tag_name>
     struct generic
     {
     };

    using generic_bool    = ::color::category::generic< ::color::category::_internal::generic_bool    >;
    using generic_uint8   = ::color::category::generic< ::color::category::_internal::generic_uint8   >;
    using generic_uint16  = ::color::category::generic< ::color::category::_internal::generic_uint16  >;
    using generic_uint24  = ::color::category::generic< ::color::category::_internal::generic_uint24  >;
    using generic_uint32  = ::color::category::generic< ::color::category::_internal::generic_uint32  >;
    using generic_uint48  = ::color::category::generic< ::color::category::_internal::generic_uint48  >;
    using generic_uint64  = ::color::category::generic< ::color::category::_internal::generic_uint64  >;
    using generic_float   = ::color::category::generic< ::color::category::_internal::generic_float   >;
    using generic_double  = ::color::category::generic< ::color::category::_internal::generic_double  >;
    using generic_ldouble = ::color::category::generic< ::color::category::_internal::generic_ldouble >;

   }

 }

#endif
