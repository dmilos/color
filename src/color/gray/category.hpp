#ifndef color_gray_category
#define color_gray_category

namespace color
 {
  namespace category
   {

    namespace _internal
     {
      struct gray_bool    {};
      struct gray_uint8   {};
      struct gray_uint16  {};
      struct gray_uint24  {};
      struct gray_uint32  {};
      struct gray_uint48  {};
      struct gray_uint64  {};
      struct gray_float   {};
      struct gray_double  {};
      struct gray_ldouble {};
     }

    template< typename tag_name >
     struct gray
      {
       typedef void category_name;
      };

    using gray_bool    = gray< ::color::category::_internal::gray_bool    >;
    using gray_uint8   = gray< ::color::category::_internal::gray_uint8   >;
    using gray_uint16  = gray< ::color::category::_internal::gray_uint16  >;
    using gray_uint24  = gray< ::color::category::_internal::gray_uint24  >;
    using gray_uint32  = gray< ::color::category::_internal::gray_uint32  >;
    using gray_uint48  = gray< ::color::category::_internal::gray_uint48  >;
    using gray_uint64  = gray< ::color::category::_internal::gray_uint64  >;
    using gray_float   = gray< ::color::category::_internal::gray_float   >;
    using gray_double  = gray< ::color::category::_internal::gray_double  >;
    using gray_ldouble = gray< ::color::category::_internal::gray_ldouble >;

   }
 }

#endif
