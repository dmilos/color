#ifndef color_xyy_akin_lms
#define color_xyy_akin_lms

#include "../../generic/akin/xyy.hpp"
#include "../category.hpp"
#include "../../lms/category.hpp"

namespace color
 {
  namespace akin
   {

    template< >struct xyy< ::color::category::lms_uint8   >{ typedef ::color::category::xyy_uint8   akin_type; };
    template< >struct xyy< ::color::category::lms_uint16  >{ typedef ::color::category::xyy_uint16  akin_type; };
    template< >struct xyy< ::color::category::lms_uint32  >{ typedef ::color::category::xyy_uint32  akin_type; };
    template< >struct xyy< ::color::category::lms_uint64  >{ typedef ::color::category::xyy_uint64  akin_type; };
    template< >struct xyy< ::color::category::lms_float   >{ typedef ::color::category::xyy_float   akin_type; };
    template< >struct xyy< ::color::category::lms_double  >{ typedef ::color::category::xyy_double  akin_type; };
    template< >struct xyy< ::color::category::lms_ldouble >{ typedef ::color::category::xyy_ldouble akin_type; };

   }
 }

#endif
