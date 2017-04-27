#ifndef color_hsl_akin_lab
#define color_hsl_akin_lab

#include "../../generic/akin/hsl.hpp"
#include "../category.hpp"
#include "../../lab/category.hpp"

namespace color
 {
  namespace akin
   {

    template< >struct hsl< ::color::category::lab_uint8   >{ typedef ::color::category::hsl_uint8   akin_type; };
    template< >struct hsl< ::color::category::lab_uint16  >{ typedef ::color::category::hsl_uint16  akin_type; };
    template< >struct hsl< ::color::category::lab_uint32  >{ typedef ::color::category::hsl_uint32  akin_type; };
    template< >struct hsl< ::color::category::lab_uint64  >{ typedef ::color::category::hsl_uint64  akin_type; };
    template< >struct hsl< ::color::category::lab_float   >{ typedef ::color::category::hsl_float   akin_type; };
    template< >struct hsl< ::color::category::lab_double  >{ typedef ::color::category::hsl_double  akin_type; };
    template< >struct hsl< ::color::category::lab_ldouble >{ typedef ::color::category::hsl_ldouble akin_type; };

   }
 }

#endif
