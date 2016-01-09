#ifndef color_cmyk_akin_cmy
#define color_cmyk_akin_cmy

#include "../../generic/akin/cmyk.hpp"
#include "../category.hpp"
#include "../../cmy/category.hpp"

namespace color
 {
  namespace akin
   {

    template< >struct cmyk< ::color::category::cmy_uint8   >{ typedef ::color::category::cmyk_uint8   akin_type; };
    template< >struct cmyk< ::color::category::cmy_uint16  >{ typedef ::color::category::cmyk_uint16  akin_type; };
    template< >struct cmyk< ::color::category::cmy_uint32  >{ typedef ::color::category::cmyk_uint32  akin_type; };
    template< >struct cmyk< ::color::category::cmy_uint64  >{ typedef ::color::category::cmyk_uint64  akin_type; };
    template< >struct cmyk< ::color::category::cmy_float   >{ typedef ::color::category::cmyk_float   akin_type; };
    template< >struct cmyk< ::color::category::cmy_double  >{ typedef ::color::category::cmyk_double  akin_type; };
    template< >struct cmyk< ::color::category::cmy_ldouble >{ typedef ::color::category::cmyk_ldouble akin_type; };

   }
 }

#endif
