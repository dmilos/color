#ifndef color_hcg_akin_gray
#define color_hcg_akin_gray

#include "../../generic/akin/hcg.hpp"
#include "../category.hpp"
#include "../../gray/category.hpp"

namespace color
 {
  namespace akin
   {

    template< >struct hcg< ::color::category::gray_uint8   >{ typedef ::color::category::hcg_uint8   akin_type; };
    template< >struct hcg< ::color::category::gray_uint16  >{ typedef ::color::category::hcg_uint16  akin_type; };
    template< >struct hcg< ::color::category::gray_uint32  >{ typedef ::color::category::hcg_uint32  akin_type; };
    template< >struct hcg< ::color::category::gray_uint64  >{ typedef ::color::category::hcg_uint64  akin_type; };
    template< >struct hcg< ::color::category::gray_float   >{ typedef ::color::category::hcg_float   akin_type; };
    template< >struct hcg< ::color::category::gray_double  >{ typedef ::color::category::hcg_double  akin_type; };
    template< >struct hcg< ::color::category::gray_ldouble >{ typedef ::color::category::hcg_ldouble akin_type; };

   }
 }

#endif
