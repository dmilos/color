#ifndef color_hwb_akin_YCgCo
#define color_hwb_akin_YCgCo

#include "../../generic/akin/hwb.hpp"
#include "../category.hpp"
#include "../../YCgCo/category.hpp"

namespace color
 {
  namespace akin
   {

    template< >struct hwb< ::color::category::YCgCo_uint8   >{ typedef ::color::category::hwb_uint8   akin_type; };
    template< >struct hwb< ::color::category::YCgCo_uint16  >{ typedef ::color::category::hwb_uint16  akin_type; };
    template< >struct hwb< ::color::category::YCgCo_uint32  >{ typedef ::color::category::hwb_uint32  akin_type; };
    template< >struct hwb< ::color::category::YCgCo_uint64  >{ typedef ::color::category::hwb_uint64  akin_type; };
    template< >struct hwb< ::color::category::YCgCo_float   >{ typedef ::color::category::hwb_float   akin_type; };
    template< >struct hwb< ::color::category::YCgCo_double  >{ typedef ::color::category::hwb_double  akin_type; };
    template< >struct hwb< ::color::category::YCgCo_ldouble >{ typedef ::color::category::hwb_ldouble akin_type; };

   }
 }

#endif
