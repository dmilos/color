#ifndef color_xyz_akin_luv
#define color_xyz_akin_luv

#include "../../generic/akin/xyz.hpp"
#include "../category.hpp"
#include "../../luv/category.hpp"

namespace color
 {
  namespace akin
   {

    template< >struct xyz< ::color::category::luv_uint8   >{ typedef ::color::category::xyz_uint8   akin_type; };
    template< >struct xyz< ::color::category::luv_uint16  >{ typedef ::color::category::xyz_uint16  akin_type; };
    template< >struct xyz< ::color::category::luv_uint32  >{ typedef ::color::category::xyz_uint32  akin_type; };
    template< >struct xyz< ::color::category::luv_uint64  >{ typedef ::color::category::xyz_uint64  akin_type; };
    template< >struct xyz< ::color::category::luv_float   >{ typedef ::color::category::xyz_float   akin_type; };
    template< >struct xyz< ::color::category::luv_double  >{ typedef ::color::category::xyz_double  akin_type; };
    template< >struct xyz< ::color::category::luv_ldouble >{ typedef ::color::category::xyz_ldouble akin_type; };

   }
 }

#endif
