#ifndef color_hsv_category
#define color_hsv_category

namespace color
 {
  namespace category
   {

    namespace _internal
     {
    //struct hsv_bool    {};
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

  //using hsv_bool    = ::color::category::hsv< ::color::category::_internal::hsv_bool    >;
    using hsv_uint8   = ::color::category::hsv< ::color::category::_internal::hsv_uint8   >;
    using hsv_uint16  = ::color::category::hsv< ::color::category::_internal::hsv_uint16  >;
    using hsv_uint24  = ::color::category::hsv< ::color::category::_internal::hsv_uint24  >;
    using hsv_uint32  = ::color::category::hsv< ::color::category::_internal::hsv_uint32  >;
    using hsv_uint48  = ::color::category::hsv< ::color::category::_internal::hsv_uint48  >;
    using hsv_uint64  = ::color::category::hsv< ::color::category::_internal::hsv_uint64  >;
    using hsv_float   = ::color::category::hsv< ::color::category::_internal::hsv_float   >;
    using hsv_double  = ::color::category::hsv< ::color::category::_internal::hsv_double  >;
    using hsv_ldouble = ::color::category::hsv< ::color::category::_internal::hsv_ldouble >;

   }
 }

#endif
