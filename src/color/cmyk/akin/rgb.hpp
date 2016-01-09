#ifndef color_cmyk_akin_rgb
#define color_cmyk_akin_rgb

#include "../../generic/akin/cmyk.hpp"
#include "../category.hpp"
#include "../../rgb/category.hpp"

namespace color
 {
  namespace akin
   {

    template< >struct cmyk< ::color::category::rgb_uint8   >{ typedef ::color::category::cmyk_uint8   akin_type; };
    template< >struct cmyk< ::color::category::rgb_uint16  >{ typedef ::color::category::cmyk_uint16  akin_type; };
    template< >struct cmyk< ::color::category::rgb_uint32  >{ typedef ::color::category::cmyk_uint32  akin_type; };
    template< >struct cmyk< ::color::category::rgb_uint64  >{ typedef ::color::category::cmyk_uint64  akin_type; };
    template< >struct cmyk< ::color::category::rgb_float   >{ typedef ::color::category::cmyk_float   akin_type; };
    template< >struct cmyk< ::color::category::rgb_double  >{ typedef ::color::category::cmyk_double  akin_type; };
    template< >struct cmyk< ::color::category::rgb_ldouble >{ typedef ::color::category::cmyk_ldouble akin_type; };

   }
 }

#endif
