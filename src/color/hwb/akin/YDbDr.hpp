#ifndef color_hwb_akin_YDbDr
#define color_hwb_akin_YDbDr

#include "../../generic/akin/hwb.hpp"
#include "../category.hpp"
#include "../../YDbDr/category.hpp"

namespace color
 {
  namespace akin
   {

    template< >struct hwb< ::color::category::YDbDr_uint8   >{ typedef ::color::category::hwb_uint8   akin_type; };
    template< >struct hwb< ::color::category::YDbDr_uint16  >{ typedef ::color::category::hwb_uint16  akin_type; };
    template< >struct hwb< ::color::category::YDbDr_uint32  >{ typedef ::color::category::hwb_uint32  akin_type; };
    template< >struct hwb< ::color::category::YDbDr_uint64  >{ typedef ::color::category::hwb_uint64  akin_type; };
    template< >struct hwb< ::color::category::YDbDr_float   >{ typedef ::color::category::hwb_float   akin_type; };
    template< >struct hwb< ::color::category::YDbDr_double  >{ typedef ::color::category::hwb_double  akin_type; };
    template< >struct hwb< ::color::category::YDbDr_ldouble >{ typedef ::color::category::hwb_ldouble akin_type; };

   }
 }

#endif
