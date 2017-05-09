#ifndef color_xyy_akin_hsl
#define color_xyy_akin_hsl

#include "../../generic/akin/xyy.hpp"
#include "../category.hpp"
#include "../../hsl/category.hpp"

namespace color
 {
  namespace akin
   {

    template< >struct xyy< ::color::category::hsl_uint8   >{ typedef ::color::category::xyy_uint8   akin_type; };
    template< >struct xyy< ::color::category::hsl_uint16  >{ typedef ::color::category::xyy_uint16  akin_type; };
    template< >struct xyy< ::color::category::hsl_uint32  >{ typedef ::color::category::xyy_uint32  akin_type; };
    template< >struct xyy< ::color::category::hsl_uint64  >{ typedef ::color::category::xyy_uint64  akin_type; };
    template< >struct xyy< ::color::category::hsl_float   >{ typedef ::color::category::xyy_float   akin_type; };
    template< >struct xyy< ::color::category::hsl_double  >{ typedef ::color::category::xyy_double  akin_type; };
    template< >struct xyy< ::color::category::hsl_ldouble >{ typedef ::color::category::xyy_ldouble akin_type; };

   }
 }

#endif
