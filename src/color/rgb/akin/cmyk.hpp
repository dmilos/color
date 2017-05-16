#ifndef color_rgb_akin_cmyk
#define color_rgb_akin_cmyk

#include "../../generic/akin/rgb.hpp"
#include "../category.hpp"
#include "../../cmyk/category.hpp"

namespace color
 {
  namespace akin
   {

    template< >struct rgb< ::color::category::cmyk_uint8   >{ typedef ::color::category::rgb_uint8   akin_type; };
    template< >struct rgb< ::color::category::cmyk_uint16  >{ typedef ::color::category::rgb_uint16  akin_type; };
    template< >struct rgb< ::color::category::cmyk_uint32  >{ typedef ::color::category::rgb_uint32  akin_type; };
    template< >struct rgb< ::color::category::cmyk_uint64  >{ typedef ::color::category::rgb_uint64  akin_type; };
    template< >struct rgb< ::color::category::cmyk_float   >{ typedef ::color::category::rgb_float   akin_type; };
    template< >struct rgb< ::color::category::cmyk_double  >{ typedef ::color::category::rgb_double  akin_type; };
    template< >struct rgb< ::color::category::cmyk_ldouble >{ typedef ::color::category::rgb_ldouble akin_type; };

   }
 }

#endif
