#ifndef color_luv_akin_cmyk
#define color_luv_akin_cmyk

#include "../../generic/akin/luv.hpp"
#include "../category.hpp"
#include "../../cmyk/category.hpp"

namespace color
 {
  namespace akin
   {

    template< >struct luv< ::color::category::cmyk_uint8   >{ typedef ::color::category::luv_uint8   akin_type; };
    template< >struct luv< ::color::category::cmyk_uint16  >{ typedef ::color::category::luv_uint16  akin_type; };
    template< >struct luv< ::color::category::cmyk_uint32  >{ typedef ::color::category::luv_uint32  akin_type; };
    template< >struct luv< ::color::category::cmyk_uint64  >{ typedef ::color::category::luv_uint64  akin_type; };
    template< >struct luv< ::color::category::cmyk_float   >{ typedef ::color::category::luv_float   akin_type; };
    template< >struct luv< ::color::category::cmyk_double  >{ typedef ::color::category::luv_double  akin_type; };
    template< >struct luv< ::color::category::cmyk_ldouble >{ typedef ::color::category::luv_ldouble akin_type; };

   }
 }

#endif
