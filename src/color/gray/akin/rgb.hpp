#ifndef color_gray_akin_rgb
#define color_gray_akin_rgb

#include "../../generic/akin/gray.hpp"
#include "../category.hpp"
#include "../../rgb/category.hpp"

namespace color
 {
  namespace akin
   {

    template< >struct gray< ::color::category::rgb_uint8   >{ typedef ::color::category::gray_uint8   akin_type; };
    template< >struct gray< ::color::category::rgb_uint16  >{ typedef ::color::category::gray_uint8   akin_type; };
    template< >struct gray< ::color::category::rgb_uint32  >{ typedef ::color::category::gray_uint8   akin_type; };
    template< >struct gray< ::color::category::rgb_uint64  >{ typedef ::color::category::gray_uint16  akin_type; };
    template< >struct gray< ::color::category::rgb_float   >{ typedef ::color::category::gray_float   akin_type; };
    template< >struct gray< ::color::category::rgb_double  >{ typedef ::color::category::gray_double  akin_type; };
    template< >struct gray< ::color::category::rgb_ldouble >{ typedef ::color::category::gray_ldouble akin_type; };

   }
 }

#endif
