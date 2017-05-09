#ifndef color_lms_akin_hsv
#define color_lms_akin_hsv

#include "../../generic/akin/lms.hpp"
#include "../category.hpp"
#include "../../hsv/category.hpp"

namespace color
 {
  namespace akin
   {

    template< >struct lms< ::color::category::hsv_uint8   >{ typedef ::color::category::lms_uint8   akin_type; };
    template< >struct lms< ::color::category::hsv_uint16  >{ typedef ::color::category::lms_uint16  akin_type; };
    template< >struct lms< ::color::category::hsv_uint32  >{ typedef ::color::category::lms_uint32  akin_type; };
    template< >struct lms< ::color::category::hsv_uint64  >{ typedef ::color::category::lms_uint64  akin_type; };
    template< >struct lms< ::color::category::hsv_float   >{ typedef ::color::category::lms_float   akin_type; };
    template< >struct lms< ::color::category::hsv_double  >{ typedef ::color::category::lms_double  akin_type; };
    template< >struct lms< ::color::category::hsv_ldouble >{ typedef ::color::category::lms_ldouble akin_type; };

   }
 }

#endif
