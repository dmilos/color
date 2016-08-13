#ifndef color_hsi_akin_yiq
#define color_hsi_akin_yiq

#include "../../generic/akin/hsi.hpp"
#include "../category.hpp"
#include "../../yiq/category.hpp"

namespace color
 {
  namespace akin
   {

    template< >struct hsi< ::color::category::yiq_uint8   >{ typedef ::color::category::hsi_uint8   akin_type; };
    template< >struct hsi< ::color::category::yiq_uint16  >{ typedef ::color::category::hsi_uint16  akin_type; };
    template< >struct hsi< ::color::category::yiq_uint32  >{ typedef ::color::category::hsi_uint32  akin_type; };
    template< >struct hsi< ::color::category::yiq_uint64  >{ typedef ::color::category::hsi_uint64  akin_type; };
    template< >struct hsi< ::color::category::yiq_float   >{ typedef ::color::category::hsi_float   akin_type; };
    template< >struct hsi< ::color::category::yiq_double  >{ typedef ::color::category::hsi_double  akin_type; };
    template< >struct hsi< ::color::category::yiq_ldouble >{ typedef ::color::category::hsi_ldouble akin_type; };

   }
 }

#endif
