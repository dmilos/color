#ifndef color_hsv_akin_gray
#define color_hsv_akin_gray

#include "../../generic/akin/hsv.hpp"
#include "../category.hpp"
#include "../../gray/category.hpp"

namespace color
 {
  namespace akin
   {

    template< >struct hsv< ::color::category::gray_uint8   >{ typedef ::color::category::hsv_uint8   akin_type; };
    template< >struct hsv< ::color::category::gray_uint16  >{ typedef ::color::category::hsv_uint16  akin_type; };
    template< >struct hsv< ::color::category::gray_uint32  >{ typedef ::color::category::hsv_uint32  akin_type; };
    template< >struct hsv< ::color::category::gray_uint64  >{ typedef ::color::category::hsv_uint64  akin_type; };
    template< >struct hsv< ::color::category::gray_float   >{ typedef ::color::category::hsv_float   akin_type; };
    template< >struct hsv< ::color::category::gray_double  >{ typedef ::color::category::hsv_double  akin_type; };
    template< >struct hsv< ::color::category::gray_ldouble >{ typedef ::color::category::hsv_ldouble akin_type; };

   }
 }

#endif
