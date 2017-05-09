#ifndef color_xyy_akin_hsi
#define color_xyy_akin_hsi

#include "../../generic/akin/xyy.hpp"
#include "../category.hpp"
#include "../../hsi/category.hpp"

namespace color
 {
  namespace akin
   {

    template< >struct xyy< ::color::category::hsi_uint8   >{ typedef ::color::category::xyy_uint8   akin_type; };
    template< >struct xyy< ::color::category::hsi_uint16  >{ typedef ::color::category::xyy_uint16  akin_type; };
    template< >struct xyy< ::color::category::hsi_uint32  >{ typedef ::color::category::xyy_uint32  akin_type; };
    template< >struct xyy< ::color::category::hsi_uint64  >{ typedef ::color::category::xyy_uint64  akin_type; };
    template< >struct xyy< ::color::category::hsi_float   >{ typedef ::color::category::xyy_float   akin_type; };
    template< >struct xyy< ::color::category::hsi_double  >{ typedef ::color::category::xyy_double  akin_type; };
    template< >struct xyy< ::color::category::hsi_ldouble >{ typedef ::color::category::xyy_ldouble akin_type; };

   }
 }

#endif
