#ifndef color_xyz_akin_yiq
#define color_xyz_akin_yiq

#include "../../generic/akin/xyz.hpp"
#include "../category.hpp"
#include "../../yiq/category.hpp"

namespace color
 {
  namespace akin
   {

    template< >struct xyz< ::color::category::yiq_uint8   >{ typedef ::color::category::xyz_uint8   akin_type; };
    template< >struct xyz< ::color::category::yiq_uint16  >{ typedef ::color::category::xyz_uint16  akin_type; };
    template< >struct xyz< ::color::category::yiq_uint32  >{ typedef ::color::category::xyz_uint32  akin_type; };
    template< >struct xyz< ::color::category::yiq_uint64  >{ typedef ::color::category::xyz_uint64  akin_type; };
    template< >struct xyz< ::color::category::yiq_float   >{ typedef ::color::category::xyz_float   akin_type; };
    template< >struct xyz< ::color::category::yiq_double  >{ typedef ::color::category::xyz_double  akin_type; };
    template< >struct xyz< ::color::category::yiq_ldouble >{ typedef ::color::category::xyz_ldouble akin_type; };

   }
 }

#endif
