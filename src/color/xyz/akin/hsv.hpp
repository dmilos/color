#ifndef color_xyz_akin_hsv
#define color_xyz_akin_hsv

#include "../../generic/akin/xyz.hpp"
#include "../category.hpp"
#include "../../hsv/category.hpp"

namespace color
 {
  namespace akin
   {

    template< >struct xyz< ::color::category::hsv_uint8   >{ typedef ::color::category::xyz_uint8   akin_type; };
    template< >struct xyz< ::color::category::hsv_uint16  >{ typedef ::color::category::xyz_uint16  akin_type; };
    template< >struct xyz< ::color::category::hsv_uint32  >{ typedef ::color::category::xyz_uint32  akin_type; };
    template< >struct xyz< ::color::category::hsv_uint64  >{ typedef ::color::category::xyz_uint64  akin_type; };
    template< >struct xyz< ::color::category::hsv_float   >{ typedef ::color::category::xyz_float   akin_type; };
    template< >struct xyz< ::color::category::hsv_double  >{ typedef ::color::category::xyz_double  akin_type; };
    template< >struct xyz< ::color::category::hsv_ldouble >{ typedef ::color::category::xyz_ldouble akin_type; };

   }
 }

#endif
