#ifndef color_hsl_akin_xyz
#define color_hsl_akin_xyz

#include "../../generic/akin/hsl.hpp"
#include "../category.hpp"
#include "../../xyz/category.hpp"

namespace color
 {
  namespace akin
   {

    template< >struct hsl< ::color::category::xyz_uint8   >{ typedef ::color::category::hsl_uint8   akin_type; };
    template< >struct hsl< ::color::category::xyz_uint16  >{ typedef ::color::category::hsl_uint16  akin_type; };
    template< >struct hsl< ::color::category::xyz_uint32  >{ typedef ::color::category::hsl_uint32  akin_type; };
    template< >struct hsl< ::color::category::xyz_uint64  >{ typedef ::color::category::hsl_uint64  akin_type; };
    template< >struct hsl< ::color::category::xyz_float   >{ typedef ::color::category::hsl_float   akin_type; };
    template< >struct hsl< ::color::category::xyz_double  >{ typedef ::color::category::hsl_double  akin_type; };
    template< >struct hsl< ::color::category::xyz_ldouble >{ typedef ::color::category::hsl_ldouble akin_type; };

   }
 }

#endif
