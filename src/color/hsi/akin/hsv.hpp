#ifndef color_hsi_akin_hsv
#define color_hsi_akin_hsv

#include "../../generic/akin/hsi.hpp"
#include "../category.hpp"
#include "../../hsv/category.hpp"

namespace color
 {
  namespace akin
   {

    template< >struct hsi< ::color::category::hsv_uint8   >{ typedef ::color::category::hsi_uint8   akin_type; };
    template< >struct hsi< ::color::category::hsv_uint16  >{ typedef ::color::category::hsi_uint16  akin_type; };
    template< >struct hsi< ::color::category::hsv_uint32  >{ typedef ::color::category::hsi_uint32  akin_type; };
    template< >struct hsi< ::color::category::hsv_uint64  >{ typedef ::color::category::hsi_uint64  akin_type; };
    template< >struct hsi< ::color::category::hsv_float   >{ typedef ::color::category::hsi_float   akin_type; };
    template< >struct hsi< ::color::category::hsv_double  >{ typedef ::color::category::hsi_double  akin_type; };
    template< >struct hsi< ::color::category::hsv_ldouble >{ typedef ::color::category::hsi_ldouble akin_type; };

   }
 }

#endif
