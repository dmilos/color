#ifndef color_gray_akin_lms
#define color_gray_akin_lms

#include "../../generic/akin/gray.hpp"
#include "../category.hpp"
#include "../../lms/category.hpp"

namespace color
 {
  namespace akin
   {

    template< >struct gray< ::color::category::lms_uint8   >{ typedef ::color::category::gray_uint8   akin_type; };
    template< >struct gray< ::color::category::lms_uint16  >{ typedef ::color::category::gray_uint16  akin_type; };
    template< >struct gray< ::color::category::lms_uint32  >{ typedef ::color::category::gray_uint32  akin_type; };
    template< >struct gray< ::color::category::lms_uint64  >{ typedef ::color::category::gray_uint64  akin_type; };
    template< >struct gray< ::color::category::lms_float   >{ typedef ::color::category::gray_float   akin_type; };
    template< >struct gray< ::color::category::lms_double  >{ typedef ::color::category::gray_double  akin_type; };
    template< >struct gray< ::color::category::lms_ldouble >{ typedef ::color::category::gray_ldouble akin_type; };

   }
 }

#endif
