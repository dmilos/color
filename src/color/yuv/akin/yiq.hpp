#ifndef color_yuv_akin_yiq
#define color_yuv_akin_yiq

#include "../../generic/akin/yuv.hpp"
#include "../category.hpp"
#include "../../yiq/category.hpp"

namespace color
 {
  namespace akin
   {

    template< >struct yuv< ::color::category::yiq_uint8   >{ typedef ::color::category::yuv_uint8   akin_type; };
    template< >struct yuv< ::color::category::yiq_uint16  >{ typedef ::color::category::yuv_uint16  akin_type; };
    template< >struct yuv< ::color::category::yiq_uint32  >{ typedef ::color::category::yuv_uint32  akin_type; };
    template< >struct yuv< ::color::category::yiq_uint64  >{ typedef ::color::category::yuv_uint64  akin_type; };
    template< >struct yuv< ::color::category::yiq_float   >{ typedef ::color::category::yuv_float   akin_type; };
    template< >struct yuv< ::color::category::yiq_double  >{ typedef ::color::category::yuv_double  akin_type; };
    template< >struct yuv< ::color::category::yiq_ldouble >{ typedef ::color::category::yuv_ldouble akin_type; };

   }
 }

#endif
