#ifndef color_hsi_akin_YDbDr
#define color_hsi_akin_YDbDr

#include "../../generic/akin/hsi.hpp"
#include "../category.hpp"
#include "../../YDbDr/category.hpp"

namespace color
 {
  namespace akin
   {

    template< >struct hsi< ::color::category::YDbDr_uint8   >{ typedef ::color::category::hsi_uint8   akin_type; };
    template< >struct hsi< ::color::category::YDbDr_uint16  >{ typedef ::color::category::hsi_uint16  akin_type; };
    template< >struct hsi< ::color::category::YDbDr_uint32  >{ typedef ::color::category::hsi_uint32  akin_type; };
    template< >struct hsi< ::color::category::YDbDr_uint64  >{ typedef ::color::category::hsi_uint64  akin_type; };
    template< >struct hsi< ::color::category::YDbDr_float   >{ typedef ::color::category::hsi_float   akin_type; };
    template< >struct hsi< ::color::category::YDbDr_double  >{ typedef ::color::category::hsi_double  akin_type; };
    template< >struct hsi< ::color::category::YDbDr_ldouble >{ typedef ::color::category::hsi_ldouble akin_type; };

   }
 }

#endif
