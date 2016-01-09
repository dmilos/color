#ifndef color_yuv_akin_hsv
#define color_yuv_akin_hsv

#include "../../generic/akin/yuv.hpp"
#include "../category.hpp"
#include "../../hsv/category.hpp"

namespace color
 {
  namespace akin
   {

    template< >struct yuv< ::color::category::hsv_uint8   >{ typedef ::color::category::yuv_uint8   akin_type; };
    template< >struct yuv< ::color::category::hsv_uint16  >{ typedef ::color::category::yuv_uint16  akin_type; };
    template< >struct yuv< ::color::category::hsv_uint32  >{ typedef ::color::category::yuv_uint32  akin_type; };
    template< >struct yuv< ::color::category::hsv_uint64  >{ typedef ::color::category::yuv_uint64  akin_type; };
    template< >struct yuv< ::color::category::hsv_float   >{ typedef ::color::category::yuv_float   akin_type; };
    template< >struct yuv< ::color::category::hsv_double  >{ typedef ::color::category::yuv_double  akin_type; };
    template< >struct yuv< ::color::category::hsv_ldouble >{ typedef ::color::category::yuv_ldouble akin_type; };

   }
 }

#endif
