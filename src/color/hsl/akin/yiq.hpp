#ifndef color_hsl_akin_yiq
#define color_hsl_akin_yiq

#include "../../generic/akin/hsl.hpp"
#include "../category.hpp"
#include "../../yiq/category.hpp"

namespace color
 {
  namespace akin
   {

    template< >struct hsl< ::color::category::yiq_uint8   >{ typedef ::color::category::hsl_uint8   akin_type; };
    template< >struct hsl< ::color::category::yiq_uint16  >{ typedef ::color::category::hsl_uint16  akin_type; };
    template< >struct hsl< ::color::category::yiq_uint32  >{ typedef ::color::category::hsl_uint32  akin_type; };
    template< >struct hsl< ::color::category::yiq_uint64  >{ typedef ::color::category::hsl_uint64  akin_type; };
    template< >struct hsl< ::color::category::yiq_float   >{ typedef ::color::category::hsl_float   akin_type; };
    template< >struct hsl< ::color::category::yiq_double  >{ typedef ::color::category::hsl_double  akin_type; };
    template< >struct hsl< ::color::category::yiq_ldouble >{ typedef ::color::category::hsl_ldouble akin_type; };

   }
 }

#endif
