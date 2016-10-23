#ifndef color_xyz_akin_hsi
#define color_xyz_akin_hsi

#include "../../generic/akin/xyz.hpp"
#include "../category.hpp"
#include "../../hsi/category.hpp"

namespace color
 {
  namespace akin
   {

    template< >struct xyz< ::color::category::hsi_uint8   >{ typedef ::color::category::xyz_uint8   akin_type; };
    template< >struct xyz< ::color::category::hsi_uint16  >{ typedef ::color::category::xyz_uint16  akin_type; };
    template< >struct xyz< ::color::category::hsi_uint32  >{ typedef ::color::category::xyz_uint32  akin_type; };
    template< >struct xyz< ::color::category::hsi_uint64  >{ typedef ::color::category::xyz_uint64  akin_type; };
    template< >struct xyz< ::color::category::hsi_float   >{ typedef ::color::category::xyz_float   akin_type; };
    template< >struct xyz< ::color::category::hsi_double  >{ typedef ::color::category::xyz_double  akin_type; };
    template< >struct xyz< ::color::category::hsi_ldouble >{ typedef ::color::category::xyz_ldouble akin_type; };

   }
 }

#endif
