#ifndef color_xyz_category
#define color_xyz_category

namespace color
 {
  namespace category
   {

    namespace _internal
     {
      struct xyz_bool    {};
      struct xyz_uint8   {};
      struct xyz_uint16  {};
      struct xyz_uint24  {};
      struct xyz_uint32  {};
      struct xyz_uint48  {};
      struct xyz_uint64  {};
      struct xyz_float   {};
      struct xyz_double  {};
      struct xyz_ldouble {};
     }

    template< typename tag_name >
     struct xyz
      {
       typedef void category_name;
      };

    using xyz_bool    = ::color::category::xyz< ::color::category::_internal::xyz_bool    >;
    using xyz_uint8   = ::color::category::xyz< ::color::category::_internal::xyz_uint8   >;
    using xyz_uint16  = ::color::category::xyz< ::color::category::_internal::xyz_uint16  >;
    using xyz_uint24  = ::color::category::xyz< ::color::category::_internal::xyz_uint24  >;
    using xyz_uint32  = ::color::category::xyz< ::color::category::_internal::xyz_uint32  >;
    using xyz_uint48  = ::color::category::xyz< ::color::category::_internal::xyz_uint48  >;
    using xyz_uint64  = ::color::category::xyz< ::color::category::_internal::xyz_uint64  >;
    using xyz_float   = ::color::category::xyz< ::color::category::_internal::xyz_float   >;
    using xyz_double  = ::color::category::xyz< ::color::category::_internal::xyz_double  >;
    using xyz_ldouble = ::color::category::xyz< ::color::category::_internal::xyz_ldouble >;

   }
 }

#endif
