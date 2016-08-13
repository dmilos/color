#ifndef color_YDbDr_akin_hsi
#define color_YDbDr_akin_hsi

#include "../../generic/akin/YDbDr.hpp"
#include "../category.hpp"
#include "../../hsi/category.hpp"

namespace color
 {
  namespace akin
   {

    template< >struct YDbDr< ::color::category::hsi_uint8   >{ typedef ::color::category::YDbDr_uint8   akin_type; };
    template< >struct YDbDr< ::color::category::hsi_uint16  >{ typedef ::color::category::YDbDr_uint16  akin_type; };
    template< >struct YDbDr< ::color::category::hsi_uint32  >{ typedef ::color::category::YDbDr_uint32  akin_type; };
    template< >struct YDbDr< ::color::category::hsi_uint64  >{ typedef ::color::category::YDbDr_uint64  akin_type; };
    template< >struct YDbDr< ::color::category::hsi_float   >{ typedef ::color::category::YDbDr_float   akin_type; };
    template< >struct YDbDr< ::color::category::hsi_double  >{ typedef ::color::category::YDbDr_double  akin_type; };
    template< >struct YDbDr< ::color::category::hsi_ldouble >{ typedef ::color::category::YDbDr_ldouble akin_type; };

   }
 }

#endif
