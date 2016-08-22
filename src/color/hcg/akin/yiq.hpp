#ifndef color_hcg_akin_yiq
#define color_hcg_akin_yiq

#include "../../generic/akin/hcg.hpp"
#include "../category.hpp"
#include "../../yiq/category.hpp"

namespace color
 {
  namespace akin
   {

    template< >struct hcg< ::color::category::yiq_uint8   >{ typedef ::color::category::hcg_uint8   akin_type; };
    template< >struct hcg< ::color::category::yiq_uint16  >{ typedef ::color::category::hcg_uint16  akin_type; };
    template< >struct hcg< ::color::category::yiq_uint32  >{ typedef ::color::category::hcg_uint32  akin_type; };
    template< >struct hcg< ::color::category::yiq_uint64  >{ typedef ::color::category::hcg_uint64  akin_type; };
    template< >struct hcg< ::color::category::yiq_float   >{ typedef ::color::category::hcg_float   akin_type; };
    template< >struct hcg< ::color::category::yiq_double  >{ typedef ::color::category::hcg_double  akin_type; };
    template< >struct hcg< ::color::category::yiq_ldouble >{ typedef ::color::category::hcg_ldouble akin_type; };

   }
 }

#endif
