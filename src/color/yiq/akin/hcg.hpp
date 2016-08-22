#ifndef color_yiq_akin_hcg
#define color_yiq_akin_hcg

#include "../../generic/akin/yiq.hpp"
#include "../category.hpp"
#include "../../hcg/category.hpp"

namespace color
 {
  namespace akin
   {

    template< >struct yiq< ::color::category::hcg_uint8   >{ typedef ::color::category::yiq_uint8   akin_type; };
    template< >struct yiq< ::color::category::hcg_uint16  >{ typedef ::color::category::yiq_uint16  akin_type; };
    template< >struct yiq< ::color::category::hcg_uint32  >{ typedef ::color::category::yiq_uint32  akin_type; };
    template< >struct yiq< ::color::category::hcg_uint64  >{ typedef ::color::category::yiq_uint64  akin_type; };
    template< >struct yiq< ::color::category::hcg_float   >{ typedef ::color::category::yiq_float   akin_type; };
    template< >struct yiq< ::color::category::hcg_double  >{ typedef ::color::category::yiq_double  akin_type; };
    template< >struct yiq< ::color::category::hcg_ldouble >{ typedef ::color::category::yiq_ldouble akin_type; };

   }
 }

#endif
