#ifndef color_hcg_akin_cmyk
#define color_hcg_akin_cmyk

#include "../../generic/akin/hcg.hpp"
#include "../category.hpp"
#include "../../cmyk/category.hpp"

namespace color
 {
  namespace akin
   {

    template< >struct hcg< ::color::category::cmyk_uint8   >{ typedef ::color::category::hcg_uint8   akin_type; };
    template< >struct hcg< ::color::category::cmyk_uint16  >{ typedef ::color::category::hcg_uint16  akin_type; };
    template< >struct hcg< ::color::category::cmyk_uint32  >{ typedef ::color::category::hcg_uint32  akin_type; };
    template< >struct hcg< ::color::category::cmyk_uint64  >{ typedef ::color::category::hcg_uint64  akin_type; };
    template< >struct hcg< ::color::category::cmyk_float   >{ typedef ::color::category::hcg_float   akin_type; };
    template< >struct hcg< ::color::category::cmyk_double  >{ typedef ::color::category::hcg_double  akin_type; };
    template< >struct hcg< ::color::category::cmyk_ldouble >{ typedef ::color::category::hcg_ldouble akin_type; };

   }
 }

#endif
