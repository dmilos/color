#ifndef color_xyy_akin_rgb
#define color_xyy_akin_rgb

#include "../../generic/akin/xyy.hpp"
#include "../category.hpp"
#include "../../rgb/category.hpp"

namespace color
 {
  namespace akin
   {

    template< >struct xyy< ::color::category::rgb_uint8   >{ typedef ::color::category::xyy_uint8   akin_type; };
    template< >struct xyy< ::color::category::rgb_uint16  >{ typedef ::color::category::xyy_uint16  akin_type; };
    template< >struct xyy< ::color::category::rgb_uint32  >{ typedef ::color::category::xyy_uint32  akin_type; };
    template< >struct xyy< ::color::category::rgb_uint64  >{ typedef ::color::category::xyy_uint64  akin_type; };
    template< >struct xyy< ::color::category::rgb_float   >{ typedef ::color::category::xyy_float   akin_type; };
    template< >struct xyy< ::color::category::rgb_double  >{ typedef ::color::category::xyy_double  akin_type; };
    template< >struct xyy< ::color::category::rgb_ldouble >{ typedef ::color::category::xyy_ldouble akin_type; };

   }
 }

#endif
