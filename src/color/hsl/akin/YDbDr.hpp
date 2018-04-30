#ifndef color_hsl_akin_YDbDr
#define color_hsl_akin_YDbDr

#include "../../generic/akin/hsl.hpp"
#include "../category.hpp"
#include "../../YDbDr/category.hpp"

namespace color
 {
  namespace akin
   {

    template< >struct hsl< ::color::category::YDbDr_uint8   >{ typedef ::color::category::hsl_uint8   akin_type; };
    template< >struct hsl< ::color::category::YDbDr_uint16  >{ typedef ::color::category::hsl_uint16  akin_type; };
    template< >struct hsl< ::color::category::YDbDr_uint32  >{ typedef ::color::category::hsl_uint32  akin_type; };
    template< >struct hsl< ::color::category::YDbDr_uint64  >{ typedef ::color::category::hsl_uint64  akin_type; };
    template< >struct hsl< ::color::category::YDbDr_float   >{ typedef ::color::category::hsl_float   akin_type; };
    template< >struct hsl< ::color::category::YDbDr_double  >{ typedef ::color::category::hsl_double  akin_type; };
    template< >struct hsl< ::color::category::YDbDr_ldouble >{ typedef ::color::category::hsl_ldouble akin_type; };

   }
 }

#endif
