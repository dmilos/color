#ifndef color_hsv_category
#define color_hsv_category

namespace color
 {
  namespace category
   {

    namespace _internal
     {
      struct hsv_bool    {};
      struct hsv_uint8   {};
      struct hsv_uint16  {};
      struct hsv_uint24  {};
      struct hsv_uint32  {};
      struct hsv_uint48  {};
      struct hsv_uint64  {};
      struct hsv_float   {};
      struct hsv_double  {};
      struct hsv_ldouble {};
     }

    template< typename tag_name >
     struct hsv
      {
       typedef void category_name;
      };

    using hsv_bool    = hsv< ::color::category::_internal::hsv_bool    >;
    using hsv_uint8   = hsv< ::color::category::_internal::hsv_uint8   >;
    using hsv_uint16  = hsv< ::color::category::_internal::hsv_uint16  >;
    using hsv_uint24  = hsv< ::color::category::_internal::hsv_uint24  >;
    using hsv_uint32  = hsv< ::color::category::_internal::hsv_uint32  >;
    using hsv_uint48  = hsv< ::color::category::_internal::hsv_uint48  >;
    using hsv_uint64  = hsv< ::color::category::_internal::hsv_uint64  >;
    using hsv_float   = hsv< ::color::category::_internal::hsv_float   >;
    using hsv_double  = hsv< ::color::category::_internal::hsv_double  >;
    using hsv_ldouble = hsv< ::color::category::_internal::hsv_ldouble >;

   }
 }

#endif
