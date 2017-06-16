#ifndef color_LuvCH_akin_hsi
#define color_LuvCH_akin_hsi

#include "../../generic/akin/LuvCH.hpp"
#include "../category.hpp"
#include "../../hsi/category.hpp"

namespace color
 {
  namespace akin
   {

    template< >struct LuvCH< ::color::category::hsi_uint8   >{ typedef ::color::category::LuvCH_uint8   akin_type; };
    template< >struct LuvCH< ::color::category::hsi_uint16  >{ typedef ::color::category::LuvCH_uint16  akin_type; };
    template< >struct LuvCH< ::color::category::hsi_uint32  >{ typedef ::color::category::LuvCH_uint32  akin_type; };
    template< >struct LuvCH< ::color::category::hsi_uint64  >{ typedef ::color::category::LuvCH_uint64  akin_type; };
    template< >struct LuvCH< ::color::category::hsi_float   >{ typedef ::color::category::LuvCH_float   akin_type; };
    template< >struct LuvCH< ::color::category::hsi_double  >{ typedef ::color::category::LuvCH_double  akin_type; };
    template< >struct LuvCH< ::color::category::hsi_ldouble >{ typedef ::color::category::LuvCH_ldouble akin_type; };

   }
 }

#endif
