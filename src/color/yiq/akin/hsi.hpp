#ifndef color_yiq_akin_hsi
#define color_yiq_akin_hsi

#include "../../generic/akin/yiq.hpp"
#include "../category.hpp"
#include "../../hsi/category.hpp"

namespace color
 {
  namespace akin
   {

    template< >struct yiq< ::color::category::hsi_uint8   >{ typedef ::color::category::yiq_uint8   akin_type; };
    template< >struct yiq< ::color::category::hsi_uint16  >{ typedef ::color::category::yiq_uint16  akin_type; };
    template< >struct yiq< ::color::category::hsi_uint32  >{ typedef ::color::category::yiq_uint32  akin_type; };
    template< >struct yiq< ::color::category::hsi_uint64  >{ typedef ::color::category::yiq_uint64  akin_type; };
    template< >struct yiq< ::color::category::hsi_float   >{ typedef ::color::category::yiq_float   akin_type; };
    template< >struct yiq< ::color::category::hsi_double  >{ typedef ::color::category::yiq_double  akin_type; };
    template< >struct yiq< ::color::category::hsi_ldouble >{ typedef ::color::category::yiq_ldouble akin_type; };

   }
 }

#endif
