#ifndef color_hsi_akin_hcg
#define color_hsi_akin_hcg

#include "../../generic/akin/hsi.hpp"
#include "../category.hpp"
#include "../../hcg/category.hpp"

namespace color
 {
  namespace akin
   {

    template< >struct hsi< ::color::category::hcg_uint8   >{ typedef ::color::category::hsi_uint8   akin_type; };
    template< >struct hsi< ::color::category::hcg_uint16  >{ typedef ::color::category::hsi_uint16  akin_type; };
    template< >struct hsi< ::color::category::hcg_uint32  >{ typedef ::color::category::hsi_uint32  akin_type; };
    template< >struct hsi< ::color::category::hcg_uint64  >{ typedef ::color::category::hsi_uint64  akin_type; };
    template< >struct hsi< ::color::category::hcg_float   >{ typedef ::color::category::hsi_float   akin_type; };
    template< >struct hsi< ::color::category::hcg_double  >{ typedef ::color::category::hsi_double  akin_type; };
    template< >struct hsi< ::color::category::hcg_ldouble >{ typedef ::color::category::hsi_ldouble akin_type; };

   }
 }

#endif
