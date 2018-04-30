#ifndef color_hwb_akin_xyz
#define color_hwb_akin_xyz

#include "../../generic/akin/xyz.hpp"
#include "../category.hpp"
#include "../../xyz/category.hpp"

namespace color
 {
  namespace akin
   {

    template< >struct hwb< ::color::category::xyz_uint8   >{ typedef ::color::category::hwb_uint8   akin_type; };
    template< >struct hwb< ::color::category::xyz_uint16  >{ typedef ::color::category::hwb_uint16  akin_type; };
    template< >struct hwb< ::color::category::xyz_uint32  >{ typedef ::color::category::hwb_uint32  akin_type; };
    template< >struct hwb< ::color::category::xyz_uint64  >{ typedef ::color::category::hwb_uint64  akin_type; };
    template< >struct hwb< ::color::category::xyz_float   >{ typedef ::color::category::hwb_float   akin_type; };
    template< >struct hwb< ::color::category::xyz_double  >{ typedef ::color::category::hwb_double  akin_type; };
    template< >struct hwb< ::color::category::xyz_ldouble >{ typedef ::color::category::hwb_ldouble akin_type; };

   }
 }

#endif
