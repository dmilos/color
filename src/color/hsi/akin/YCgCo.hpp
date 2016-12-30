#ifndef color_hsi_akin_YCgCo
#define color_hsi_akin_YCgCo

#include "../../generic/akin/hsi.hpp"
#include "../category.hpp"
#include "../../YCgCo/category.hpp"

namespace color
 {
  namespace akin
   {

    template< >struct hsi< ::color::category::YCgCo_uint8   >{ typedef ::color::category::hsi_uint8   akin_type; };
    template< >struct hsi< ::color::category::YCgCo_uint16  >{ typedef ::color::category::hsi_uint16  akin_type; };
    template< >struct hsi< ::color::category::YCgCo_uint32  >{ typedef ::color::category::hsi_uint32  akin_type; };
    template< >struct hsi< ::color::category::YCgCo_uint64  >{ typedef ::color::category::hsi_uint64  akin_type; };
    template< >struct hsi< ::color::category::YCgCo_float   >{ typedef ::color::category::hsi_float   akin_type; };
    template< >struct hsi< ::color::category::YCgCo_double  >{ typedef ::color::category::hsi_double  akin_type; };
    template< >struct hsi< ::color::category::YCgCo_ldouble >{ typedef ::color::category::hsi_ldouble akin_type; };

   }
 }

#endif
