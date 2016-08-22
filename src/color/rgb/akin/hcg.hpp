#ifndef color_rgb_akin_hcg
#define color_rgb_akin_hcg

#include "../../generic/akin/rgb.hpp"
#include "../category.hpp"
#include "../../hcg/category.hpp"

namespace color
 {
  namespace akin
   {

    template< >struct rgb< ::color::category::hcg_uint8   >{ typedef ::color::category::rgb_uint8   akin_type; };
    template< >struct rgb< ::color::category::hcg_uint16  >{ typedef ::color::category::rgb_uint16  akin_type; };
    template< >struct rgb< ::color::category::hcg_uint32  >{ typedef ::color::category::rgb_uint32  akin_type; };
    template< >struct rgb< ::color::category::hcg_uint64  >{ typedef ::color::category::rgb_uint64  akin_type; };
    template< >struct rgb< ::color::category::hcg_float   >{ typedef ::color::category::rgb_float   akin_type; };
    template< >struct rgb< ::color::category::hcg_double  >{ typedef ::color::category::rgb_double  akin_type; };
    template< >struct rgb< ::color::category::hcg_ldouble >{ typedef ::color::category::rgb_ldouble akin_type; };

   }
 }

#endif
