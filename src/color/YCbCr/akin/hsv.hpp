#ifndef color_YCbCr_akin_hsv
#define color_YCbCr_akin_hsv

#include "../../generic/akin/YCbCr.hpp"
#include "../category.hpp"
#include "../../hsv/category.hpp"

namespace color
 {
  namespace akin
   {

    template< >struct YCbCr< ::color::category::hsv_uint8   >{ typedef ::color::category::YCbCr_uint8   akin_type; };
    template< >struct YCbCr< ::color::category::hsv_uint16  >{ typedef ::color::category::YCbCr_uint16  akin_type; };
    template< >struct YCbCr< ::color::category::hsv_uint32  >{ typedef ::color::category::YCbCr_uint32  akin_type; };
    template< >struct YCbCr< ::color::category::hsv_uint64  >{ typedef ::color::category::YCbCr_uint64  akin_type; };
    template< >struct YCbCr< ::color::category::hsv_float   >{ typedef ::color::category::YCbCr_float   akin_type; };
    template< >struct YCbCr< ::color::category::hsv_double  >{ typedef ::color::category::YCbCr_double  akin_type; };
    template< >struct YCbCr< ::color::category::hsv_ldouble >{ typedef ::color::category::YCbCr_ldouble akin_type; };

   }
 }

#endif
