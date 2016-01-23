#ifndef color_yuv_category
#define color_yuv_category

namespace color
 {
  namespace category
   {

    namespace _internal
     {
      struct yuv_bool    {};
      struct yuv_uint8   {};
      struct yuv_uint16  {};
      struct yuv_uint24  {};
      struct yuv_uint32  {};
      struct yuv_uint48  {};
      struct yuv_uint64  {};
      struct yuv_float   {};
      struct yuv_double  {};
      struct yuv_ldouble {};
     }

    template< typename tag_name >
     struct yuv
      {
       typedef void category_name;
      };

    using yuv_bool    = yuv< ::color::category::_internal::yuv_bool    >;
    using yuv_uint8   = yuv< ::color::category::_internal::yuv_uint8   >;
    using yuv_uint16  = yuv< ::color::category::_internal::yuv_uint16  >;
    using yuv_uint24  = yuv< ::color::category::_internal::yuv_uint24  >;
    using yuv_uint32  = yuv< ::color::category::_internal::yuv_uint32  >;
    using yuv_uint48  = yuv< ::color::category::_internal::yuv_uint48  >;
    using yuv_uint64  = yuv< ::color::category::_internal::yuv_uint64  >;
    using yuv_float   = yuv< ::color::category::_internal::yuv_float   >;
    using yuv_double  = yuv< ::color::category::_internal::yuv_double  >;
    using yuv_ldouble = yuv< ::color::category::_internal::yuv_ldouble >;

   }
 }

#endif
