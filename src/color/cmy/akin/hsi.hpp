#ifndef color_cmy_akin_hsi
#define color_cmy_akin_hsi

#include "../../generic/akin/cmy.hpp"
#include "../category.hpp"
#include "../../hsi/category.hpp"

namespace color
 {
  namespace akin
   {

    template< >struct cmy< ::color::category::hsi_uint8   >{ typedef ::color::category::cmy_uint8   akin_type; };
    template< >struct cmy< ::color::category::hsi_uint16  >{ typedef ::color::category::cmy_uint16  akin_type; };
    template< >struct cmy< ::color::category::hsi_uint32  >{ typedef ::color::category::cmy_uint32  akin_type; };
    template< >struct cmy< ::color::category::hsi_uint64  >{ typedef ::color::category::cmy_uint64  akin_type; };
    template< >struct cmy< ::color::category::hsi_float   >{ typedef ::color::category::cmy_float   akin_type; };
    template< >struct cmy< ::color::category::hsi_double  >{ typedef ::color::category::cmy_double  akin_type; };
    template< >struct cmy< ::color::category::hsi_ldouble >{ typedef ::color::category::cmy_ldouble akin_type; };

   }
 }

#endif
