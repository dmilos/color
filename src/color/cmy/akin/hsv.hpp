#ifndef color_cmy_akin_hsv
#define color_cmy_akin_hsv

#include "../../generic/akin/cmy.hpp"
#include "../category.hpp"
#include "../../hsv/category.hpp"

namespace color
 {
  namespace akin
   {

    template< >struct cmy< ::color::category::hsv_uint8   >{ typedef ::color::category::cmy_uint8   akin_type; };
    template< >struct cmy< ::color::category::hsv_uint16  >{ typedef ::color::category::cmy_uint16  akin_type; };
    template< >struct cmy< ::color::category::hsv_uint32  >{ typedef ::color::category::cmy_uint32  akin_type; };
    template< >struct cmy< ::color::category::hsv_uint64  >{ typedef ::color::category::cmy_uint64  akin_type; };
    template< >struct cmy< ::color::category::hsv_float   >{ typedef ::color::category::cmy_float   akin_type; };
    template< >struct cmy< ::color::category::hsv_double  >{ typedef ::color::category::cmy_double  akin_type; };
    template< >struct cmy< ::color::category::hsv_ldouble >{ typedef ::color::category::cmy_ldouble akin_type; };

   }
 }

#endif
