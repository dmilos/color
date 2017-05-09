#ifndef color_xyy_akin_hsv
#define color_xyy_akin_hsv

#include "../../generic/akin/xyy.hpp"
#include "../category.hpp"
#include "../../hsv/category.hpp"

namespace color
 {
  namespace akin
   {

    template< >struct xyy< ::color::category::hsv_uint8   >{ typedef ::color::category::xyy_uint8   akin_type; };
    template< >struct xyy< ::color::category::hsv_uint16  >{ typedef ::color::category::xyy_uint16  akin_type; };
    template< >struct xyy< ::color::category::hsv_uint32  >{ typedef ::color::category::xyy_uint32  akin_type; };
    template< >struct xyy< ::color::category::hsv_uint64  >{ typedef ::color::category::xyy_uint64  akin_type; };
    template< >struct xyy< ::color::category::hsv_float   >{ typedef ::color::category::xyy_float   akin_type; };
    template< >struct xyy< ::color::category::hsv_double  >{ typedef ::color::category::xyy_double  akin_type; };
    template< >struct xyy< ::color::category::hsv_ldouble >{ typedef ::color::category::xyy_ldouble akin_type; };

   }
 }

#endif
