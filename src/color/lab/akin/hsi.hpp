#ifndef color_lab_akin_hsi
#define color_lab_akin_hsi

#include "../../generic/akin/lab.hpp"
#include "../category.hpp"
#include "../../hsi/category.hpp"

namespace color
 {
  namespace akin
   {

    template< >struct lab< ::color::category::hsi_uint8   >{ typedef ::color::category::lab_uint8   akin_type; };
    template< >struct lab< ::color::category::hsi_uint16  >{ typedef ::color::category::lab_uint16  akin_type; };
    template< >struct lab< ::color::category::hsi_uint32  >{ typedef ::color::category::lab_uint32  akin_type; };
    template< >struct lab< ::color::category::hsi_uint64  >{ typedef ::color::category::lab_uint64  akin_type; };
    template< >struct lab< ::color::category::hsi_float   >{ typedef ::color::category::lab_float   akin_type; };
    template< >struct lab< ::color::category::hsi_double  >{ typedef ::color::category::lab_double  akin_type; };
    template< >struct lab< ::color::category::hsi_ldouble >{ typedef ::color::category::lab_ldouble akin_type; };

   }
 }

#endif
