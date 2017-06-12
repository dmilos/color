#ifndef color_hwb_akin_gray
#define color_hwb_akin_gray

#include "../../generic/akin/hwb.hpp"
#include "../category.hpp"
#include "../../gray/category.hpp"

namespace color
 {
  namespace akin
   {

    template< >struct hwb< ::color::category::gray_uint8   >{ typedef ::color::category::hwb_uint8   akin_type; };
    template< >struct hwb< ::color::category::gray_uint16  >{ typedef ::color::category::hwb_uint16  akin_type; };
    template< >struct hwb< ::color::category::gray_uint32  >{ typedef ::color::category::hwb_uint32  akin_type; };
    template< >struct hwb< ::color::category::gray_uint64  >{ typedef ::color::category::hwb_uint64  akin_type; };
    template< >struct hwb< ::color::category::gray_float   >{ typedef ::color::category::hwb_float   akin_type; };
    template< >struct hwb< ::color::category::gray_double  >{ typedef ::color::category::hwb_double  akin_type; };
    template< >struct hwb< ::color::category::gray_ldouble >{ typedef ::color::category::hwb_ldouble akin_type; };

   }
 }

#endif
