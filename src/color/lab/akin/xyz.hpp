#ifndef color_xyz_akin_xyz
#define color_xyz_akin_xyz

#include "../../generic/akin/xyz.hpp"
#include "../category.hpp"
#include "../../xyz/category.hpp"

namespace color
 {
  namespace akin
   {

    template< >struct lab< ::color::category::xyz_uint8   >{ typedef ::color::category::lab_uint8   akin_type; };
    template< >struct lab< ::color::category::xyz_uint16  >{ typedef ::color::category::lab_uint16  akin_type; };
    template< >struct lab< ::color::category::xyz_uint32  >{ typedef ::color::category::lab_uint32  akin_type; };
    template< >struct lab< ::color::category::xyz_uint64  >{ typedef ::color::category::lab_uint64  akin_type; };
    template< >struct lab< ::color::category::xyz_float   >{ typedef ::color::category::lab_float   akin_type; };
    template< >struct lab< ::color::category::xyz_double  >{ typedef ::color::category::lab_double  akin_type; };
    template< >struct lab< ::color::category::xyz_ldouble >{ typedef ::color::category::lab_ldouble akin_type; };

   }
 }

#endif
