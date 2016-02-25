#ifndef color_yiq_category
#define color_yiq_category

namespace color
 {
  namespace category
   {

    namespace _internal
     {
      struct yiq_bool    {};
      struct yiq_uint8   {};
      struct yiq_uint16  {};
      struct yiq_uint24  {};
      struct yiq_uint32  {};
      struct yiq_uint48  {};
      struct yiq_uint64  {};
      struct yiq_float   {};
      struct yiq_double  {};
      struct yiq_ldouble {};
     }

    template< typename tag_name >
     struct yiq
      {
       typedef void category_name;
      };

    using yiq_bool    = ::color::category::yiq< ::color::category::_internal::yiq_bool    >;
    using yiq_uint8   = ::color::category::yiq< ::color::category::_internal::yiq_uint8   >;
    using yiq_uint16  = ::color::category::yiq< ::color::category::_internal::yiq_uint16  >;
    using yiq_uint24  = ::color::category::yiq< ::color::category::_internal::yiq_uint24  >;
    using yiq_uint32  = ::color::category::yiq< ::color::category::_internal::yiq_uint32  >;
    using yiq_uint48  = ::color::category::yiq< ::color::category::_internal::yiq_uint48  >;
    using yiq_uint64  = ::color::category::yiq< ::color::category::_internal::yiq_uint64  >;
    using yiq_float   = ::color::category::yiq< ::color::category::_internal::yiq_float   >;
    using yiq_double  = ::color::category::yiq< ::color::category::_internal::yiq_double  >;
    using yiq_ldouble = ::color::category::yiq< ::color::category::_internal::yiq_ldouble >;

   }
 }

#endif
