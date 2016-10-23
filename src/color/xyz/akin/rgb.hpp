#ifndef color_xyz_akin_rgb
#define color_xyz_akin_rgb

#include "../../generic/akin/xyz.hpp"
#include "../category.hpp"
#include "../../rgb/category.hpp"

namespace color
 {
  namespace akin
   {

    template< >struct xyz< ::color::category::rgb_uint8   >{ typedef ::color::category::xyz_uint8   akin_type; };
    template< >struct xyz< ::color::category::rgb_uint16  >{ typedef ::color::category::xyz_uint16  akin_type; };
    template< >struct xyz< ::color::category::rgb_uint32  >{ typedef ::color::category::xyz_uint32  akin_type; };
    template< >struct xyz< ::color::category::rgb_uint64  >{ typedef ::color::category::xyz_uint64  akin_type; };
    template< >struct xyz< ::color::category::rgb_float   >{ typedef ::color::category::xyz_float   akin_type; };
    template< >struct xyz< ::color::category::rgb_double  >{ typedef ::color::category::xyz_double  akin_type; };
    template< >struct xyz< ::color::category::rgb_ldouble >{ typedef ::color::category::xyz_ldouble akin_type; };

   }
 }

#endif
