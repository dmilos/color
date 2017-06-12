#ifndef color_hwb_akin_rgb
#define color_hwb_akin_rgb

#include "../../generic/akin/hwb.hpp"
#include "../category.hpp"
#include "../../rgb/category.hpp"

namespace color
 {
  namespace akin
   {

    template< >struct hwb< ::color::category::rgb_uint8   >{ typedef ::color::category::hwb_uint8   akin_type; };
    template< >struct hwb< ::color::category::rgb_uint16  >{ typedef ::color::category::hwb_uint16  akin_type; };
    template< >struct hwb< ::color::category::rgb_uint32  >{ typedef ::color::category::hwb_uint32  akin_type; };
    template< >struct hwb< ::color::category::rgb_uint64  >{ typedef ::color::category::hwb_uint64  akin_type; };
    template< >struct hwb< ::color::category::rgb_float   >{ typedef ::color::category::hwb_float   akin_type; };
    template< >struct hwb< ::color::category::rgb_double  >{ typedef ::color::category::hwb_double  akin_type; };
    template< >struct hwb< ::color::category::rgb_ldouble >{ typedef ::color::category::hwb_ldouble akin_type; };

   }
 }

#endif
