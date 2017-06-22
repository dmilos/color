#ifndef color_cmyk_akin_LuvCH
#define color_LuvCH_akin_LuvCH

#include "../../generic/akin/LuvCH.hpp"
#include "../category.hpp"
#include "../../LuvCH/category.hpp"

namespace color
 {
  namespace akin
   {

    template< >struct LuvCH< ::color::category::LuvCH_uint8   >{ typedef ::color::category::LuvCH_uint8   akin_type; };
    template< >struct LuvCH< ::color::category::LuvCH_uint16  >{ typedef ::color::category::LuvCH_uint16  akin_type; };
    template< >struct LuvCH< ::color::category::LuvCH_uint32  >{ typedef ::color::category::LuvCH_uint32  akin_type; };
    template< >struct LuvCH< ::color::category::LuvCH_uint64  >{ typedef ::color::category::LuvCH_uint64  akin_type; };
    template< >struct LuvCH< ::color::category::LuvCH_float   >{ typedef ::color::category::LuvCH_float   akin_type; };
    template< >struct LuvCH< ::color::category::LuvCH_double  >{ typedef ::color::category::LuvCH_double  akin_type; };
    template< >struct LuvCH< ::color::category::LuvCH_ldouble >{ typedef ::color::category::LuvCH_ldouble akin_type; };

   }
 }

#endif
