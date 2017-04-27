#ifndef color_hsi_akin_lab
#define color_hsi_akin_lab

#include "../../generic/akin/hsi.hpp"
#include "../category.hpp"
#include "../../lab/category.hpp"

namespace color
 {
  namespace akin
   {

    template< >struct hsi< ::color::category::lab_uint8   >{ typedef ::color::category::hsi_uint8   akin_type; };
    template< >struct hsi< ::color::category::lab_uint16  >{ typedef ::color::category::hsi_uint16  akin_type; };
    template< >struct hsi< ::color::category::lab_uint32  >{ typedef ::color::category::hsi_uint32  akin_type; };
    template< >struct hsi< ::color::category::lab_uint64  >{ typedef ::color::category::hsi_uint64  akin_type; };
    template< >struct hsi< ::color::category::lab_float   >{ typedef ::color::category::hsi_float   akin_type; };
    template< >struct hsi< ::color::category::lab_double  >{ typedef ::color::category::hsi_double  akin_type; };
    template< >struct hsi< ::color::category::lab_ldouble >{ typedef ::color::category::hsi_ldouble akin_type; };

   }
 }

#endif
