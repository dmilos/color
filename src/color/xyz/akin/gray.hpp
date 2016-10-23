#ifndef color_xyz_akin_gray
#define color_xyz_akin_gray

#include "../../generic/akin/xyz.hpp"
#include "../category.hpp"
#include "../../gray/category.hpp"

namespace color
 {
  namespace akin
   {

    template< >struct xyz< ::color::category::gray_uint8   >{ typedef ::color::category::xyz_uint8   akin_type; };
    template< >struct xyz< ::color::category::gray_uint16  >{ typedef ::color::category::xyz_uint16  akin_type; };
    template< >struct xyz< ::color::category::gray_uint32  >{ typedef ::color::category::xyz_uint32  akin_type; };
    template< >struct xyz< ::color::category::gray_uint64  >{ typedef ::color::category::xyz_uint64  akin_type; };
    template< >struct xyz< ::color::category::gray_float   >{ typedef ::color::category::xyz_float   akin_type; };
    template< >struct xyz< ::color::category::gray_double  >{ typedef ::color::category::xyz_double  akin_type; };
    template< >struct xyz< ::color::category::gray_ldouble >{ typedef ::color::category::xyz_ldouble akin_type; };

   }
 }

#endif
