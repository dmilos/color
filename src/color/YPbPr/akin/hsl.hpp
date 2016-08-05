#ifndef color_YPbPr_akin_hsl
#define color_YPbPr_akin_hsl

#include "../../generic/akin/YPbPr.hpp"
#include "../category.hpp"
#include "../../hsl/category.hpp"

namespace color
 {
  namespace akin
   {

    template< >struct YPbPr< ::color::category::hsl_uint8   >{ typedef ::color::category::YPbPr_uint8   akin_type; };
    template< >struct YPbPr< ::color::category::hsl_uint16  >{ typedef ::color::category::YPbPr_uint16  akin_type; };
    template< >struct YPbPr< ::color::category::hsl_uint32  >{ typedef ::color::category::YPbPr_uint32  akin_type; };
    template< >struct YPbPr< ::color::category::hsl_uint64  >{ typedef ::color::category::YPbPr_uint64  akin_type; };
    template< >struct YPbPr< ::color::category::hsl_float   >{ typedef ::color::category::YPbPr_float   akin_type; };
    template< >struct YPbPr< ::color::category::hsl_double  >{ typedef ::color::category::YPbPr_double  akin_type; };
    template< >struct YPbPr< ::color::category::hsl_ldouble >{ typedef ::color::category::YPbPr_ldouble akin_type; };

   }
 }

#endif
