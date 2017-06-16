#ifndef color_LuvCH_akin_hsl
#define color_LuvCH_akin_hsl

#include "../../generic/akin/LuvCH.hpp"
#include "../category.hpp"
#include "../../hsl/category.hpp"

namespace color
 {
  namespace akin
   {

    template< >struct LuvCH< ::color::category::hsl_uint8   >{ typedef ::color::category::LuvCH_uint8   akin_type; };
    template< >struct LuvCH< ::color::category::hsl_uint16  >{ typedef ::color::category::LuvCH_uint16  akin_type; };
    template< >struct LuvCH< ::color::category::hsl_uint32  >{ typedef ::color::category::LuvCH_uint32  akin_type; };
    template< >struct LuvCH< ::color::category::hsl_uint64  >{ typedef ::color::category::LuvCH_uint64  akin_type; };
    template< >struct LuvCH< ::color::category::hsl_float   >{ typedef ::color::category::LuvCH_float   akin_type; };
    template< >struct LuvCH< ::color::category::hsl_double  >{ typedef ::color::category::LuvCH_double  akin_type; };
    template< >struct LuvCH< ::color::category::hsl_ldouble >{ typedef ::color::category::LuvCH_ldouble akin_type; };

   }
 }

#endif
