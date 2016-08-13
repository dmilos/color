#ifndef color_hsi_akin_gray
#define color_hsi_akin_gray

#include "../../generic/akin/hsi.hpp"
#include "../category.hpp"
#include "../../gray/category.hpp"

namespace color
 {
  namespace akin
   {

    template< >struct hsi< ::color::category::gray_uint8   >{ typedef ::color::category::hsi_uint8   akin_type; };
    template< >struct hsi< ::color::category::gray_uint16  >{ typedef ::color::category::hsi_uint16  akin_type; };
    template< >struct hsi< ::color::category::gray_uint32  >{ typedef ::color::category::hsi_uint32  akin_type; };
    template< >struct hsi< ::color::category::gray_uint64  >{ typedef ::color::category::hsi_uint64  akin_type; };
    template< >struct hsi< ::color::category::gray_float   >{ typedef ::color::category::hsi_float   akin_type; };
    template< >struct hsi< ::color::category::gray_double  >{ typedef ::color::category::hsi_double  akin_type; };
    template< >struct hsi< ::color::category::gray_ldouble >{ typedef ::color::category::hsi_ldouble akin_type; };

   }
 }

#endif
