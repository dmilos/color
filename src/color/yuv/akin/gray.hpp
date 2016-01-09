#ifndef color_yuv_akin_gray
#define color_yuv_akin_gray

#include "../../generic/akin/yuv.hpp"
#include "../category.hpp"
#include "../../gray/category.hpp"

namespace color
 {
  namespace akin
   {

    template< >struct yuv< ::color::category::gray_uint8   >{ typedef ::color::category::yuv_uint8   akin_type; };
    template< >struct yuv< ::color::category::gray_uint16  >{ typedef ::color::category::yuv_uint16  akin_type; };
    template< >struct yuv< ::color::category::gray_uint32  >{ typedef ::color::category::yuv_uint32  akin_type; };
    template< >struct yuv< ::color::category::gray_uint64  >{ typedef ::color::category::yuv_uint64  akin_type; };
    template< >struct yuv< ::color::category::gray_float   >{ typedef ::color::category::yuv_float   akin_type; };
    template< >struct yuv< ::color::category::gray_double  >{ typedef ::color::category::yuv_double  akin_type; };
    template< >struct yuv< ::color::category::gray_ldouble >{ typedef ::color::category::yuv_ldouble akin_type; };

   }
 }

#endif
