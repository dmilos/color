#ifndef color_hwb_akin_hsi
#define color_hwb_akin_hsi

#include "../../generic/akin/hwb.hpp"
#include "../category.hpp"
#include "../../hsi/category.hpp"

namespace color
 {
  namespace akin
   {

    template< >struct hwb< ::color::category::hsi_uint8   >{ typedef ::color::category::hwb_uint8   akin_type; };
    template< >struct hwb< ::color::category::hsi_uint16  >{ typedef ::color::category::hwb_uint16  akin_type; };
    template< >struct hwb< ::color::category::hsi_uint32  >{ typedef ::color::category::hwb_uint32  akin_type; };
    template< >struct hwb< ::color::category::hsi_uint64  >{ typedef ::color::category::hwb_uint64  akin_type; };
    template< >struct hwb< ::color::category::hsi_float   >{ typedef ::color::category::hwb_float   akin_type; };
    template< >struct hwb< ::color::category::hsi_double  >{ typedef ::color::category::hwb_double  akin_type; };
    template< >struct hwb< ::color::category::hsi_ldouble >{ typedef ::color::category::hwb_ldouble akin_type; };

   }
 }

#endif
