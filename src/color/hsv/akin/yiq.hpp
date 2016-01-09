#ifndef color_hsv_akin_yiq
#define color_hsv_akin_yiq

#include "../../generic/akin/hsv.hpp"
#include "../category.hpp"
#include "../../yiq/category.hpp"

namespace color
 {
  namespace akin
   {

    template< >struct hsv< ::color::category::yiq_uint8   >{ typedef ::color::category::hsv_uint8   akin_type; };
    template< >struct hsv< ::color::category::yiq_uint16  >{ typedef ::color::category::hsv_uint16  akin_type; };
    template< >struct hsv< ::color::category::yiq_uint32  >{ typedef ::color::category::hsv_uint32  akin_type; };
    template< >struct hsv< ::color::category::yiq_uint64  >{ typedef ::color::category::hsv_uint64  akin_type; };
    template< >struct hsv< ::color::category::yiq_float   >{ typedef ::color::category::hsv_float   akin_type; };
    template< >struct hsv< ::color::category::yiq_double  >{ typedef ::color::category::hsv_double  akin_type; };
    template< >struct hsv< ::color::category::yiq_ldouble >{ typedef ::color::category::hsv_ldouble akin_type; };

   }
 }

#endif
