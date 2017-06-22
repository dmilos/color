#ifndef color_hsv_akin_LuvCH
#define color_hsv_akin_LuvCH

#include "../../generic/akin/hsv.hpp"
#include "../category.hpp"
#include "../../LuvCH/category.hpp"

namespace color
 {
  namespace akin
   {

    template< >struct hsv< ::color::category::LuvCH_uint8   >{ typedef ::color::category::hsv_uint8   akin_type; };
    template< >struct hsv< ::color::category::LuvCH_uint16  >{ typedef ::color::category::hsv_uint16  akin_type; };
    template< >struct hsv< ::color::category::LuvCH_uint32  >{ typedef ::color::category::hsv_uint32  akin_type; };
    template< >struct hsv< ::color::category::LuvCH_uint64  >{ typedef ::color::category::hsv_uint64  akin_type; };
    template< >struct hsv< ::color::category::LuvCH_float   >{ typedef ::color::category::hsv_float   akin_type; };
    template< >struct hsv< ::color::category::LuvCH_double  >{ typedef ::color::category::hsv_double  akin_type; };
    template< >struct hsv< ::color::category::LuvCH_ldouble >{ typedef ::color::category::hsv_ldouble akin_type; };

   }
 }

#endif
