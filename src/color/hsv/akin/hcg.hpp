#ifndef color_hsv_akin_hcg
#define color_hsv_akin_hcg

#include "../../generic/akin/hsv.hpp"
#include "../category.hpp"
#include "../../hcg/category.hpp"

namespace color
 {
  namespace akin
   {

    template< >struct hsv< ::color::category::hcg_uint8   >{ typedef ::color::category::hsv_uint8   akin_type; };
    template< >struct hsv< ::color::category::hcg_uint16  >{ typedef ::color::category::hsv_uint16  akin_type; };
    template< >struct hsv< ::color::category::hcg_uint32  >{ typedef ::color::category::hsv_uint32  akin_type; };
    template< >struct hsv< ::color::category::hcg_uint64  >{ typedef ::color::category::hsv_uint64  akin_type; };
    template< >struct hsv< ::color::category::hcg_float   >{ typedef ::color::category::hsv_float   akin_type; };
    template< >struct hsv< ::color::category::hcg_double  >{ typedef ::color::category::hsv_double  akin_type; };
    template< >struct hsv< ::color::category::hcg_ldouble >{ typedef ::color::category::hsv_ldouble akin_type; };

   }
 }

#endif
