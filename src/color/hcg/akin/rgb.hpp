#ifndef color_hcg_akin_rgb
#define color_hcg_akin_rgb

#include "../../generic/akin/hcg.hpp"
#include "../category.hpp"
#include "../../rgb/category.hpp"

namespace color
 {
  namespace akin
   {

    template< >struct hcg< ::color::category::rgb_uint8   >{ typedef ::color::category::hcg_uint8   akin_type; };
    template< >struct hcg< ::color::category::rgb_uint16  >{ typedef ::color::category::hcg_uint16  akin_type; };
    template< >struct hcg< ::color::category::rgb_uint32  >{ typedef ::color::category::hcg_uint32  akin_type; };
    template< >struct hcg< ::color::category::rgb_uint64  >{ typedef ::color::category::hcg_uint64  akin_type; };
    template< >struct hcg< ::color::category::rgb_float   >{ typedef ::color::category::hcg_float   akin_type; };
    template< >struct hcg< ::color::category::rgb_double  >{ typedef ::color::category::hcg_double  akin_type; };
    template< >struct hcg< ::color::category::rgb_ldouble >{ typedef ::color::category::hcg_ldouble akin_type; };

   }
 }

#endif
