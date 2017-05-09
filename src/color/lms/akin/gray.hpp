#ifndef color_lms_akin_gray
#define color_lms_akin_gray

#include "../../generic/akin/lms.hpp"
#include "../category.hpp"
#include "../../gray/category.hpp"

namespace color
 {
  namespace akin
   {

    template< >struct lms< ::color::category::gray_uint8   >{ typedef ::color::category::lms_uint8   akin_type; };
    template< >struct lms< ::color::category::gray_uint16  >{ typedef ::color::category::lms_uint16  akin_type; };
    template< >struct lms< ::color::category::gray_uint32  >{ typedef ::color::category::lms_uint32  akin_type; };
    template< >struct lms< ::color::category::gray_uint64  >{ typedef ::color::category::lms_uint64  akin_type; };
    template< >struct lms< ::color::category::gray_float   >{ typedef ::color::category::lms_float   akin_type; };
    template< >struct lms< ::color::category::gray_double  >{ typedef ::color::category::lms_double  akin_type; };
    template< >struct lms< ::color::category::gray_ldouble >{ typedef ::color::category::lms_ldouble akin_type; };

   }
 }

#endif
