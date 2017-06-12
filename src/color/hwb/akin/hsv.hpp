#ifndef color_hwb_akin_hsv
#define color_hwb_akin_hsv

#include "../../generic/akin/hwb.hpp"
#include "../category.hpp"
#include "../../hsv/category.hpp"

namespace color
 {
  namespace akin
   {

    template< >struct hwb< ::color::category::hsv_uint8   >{ typedef ::color::category::hwb_uint8   akin_type; };
    template< >struct hwb< ::color::category::hsv_uint16  >{ typedef ::color::category::hwb_uint16  akin_type; };
    template< >struct hwb< ::color::category::hsv_uint32  >{ typedef ::color::category::hwb_uint32  akin_type; };
    template< >struct hwb< ::color::category::hsv_uint64  >{ typedef ::color::category::hwb_uint64  akin_type; };
    template< >struct hwb< ::color::category::hsv_float   >{ typedef ::color::category::hwb_float   akin_type; };
    template< >struct hwb< ::color::category::hsv_double  >{ typedef ::color::category::hwb_double  akin_type; };
    template< >struct hwb< ::color::category::hsv_ldouble >{ typedef ::color::category::hwb_ldouble akin_type; };

   }
 }

#endif
