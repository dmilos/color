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

    using xyz_bool    = xyz< ::color::category::_internal::xyz_bool    >;
    using xyz_uint8   = xyz< ::color::category::_internal::xyz_uint8   >;
    using xyz_uint16  = xyz< ::color::category::_internal::xyz_uint16  >;
    using xyz_uint24  = xyz< ::color::category::_internal::xyz_uint24  >;
    using xyz_uint32  = xyz< ::color::category::_internal::xyz_uint32  >;
    using xyz_uint48  = xyz< ::color::category::_internal::xyz_uint48  >;
    using xyz_uint64  = xyz< ::color::category::_internal::xyz_uint64  >;
    using xyz_float   = xyz< ::color::category::_internal::xyz_float   >;
    using xyz_double  = xyz< ::color::category::_internal::xyz_double  >;
    using xyz_ldouble = xyz< ::color::category::_internal::xyz_ldouble >;

   }
 }

#endif
