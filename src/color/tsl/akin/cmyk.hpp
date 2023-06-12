#ifndef color_tsl_akin_cmyk
#define color_tsl_akin_cmyk

#include "../../generic/akin/tsl.hpp"
#include "../category.hpp"
#include "../../cmyk/category.hpp"

namespace color
 {
  namespace akin
   {

    template< >struct tsl< ::color::category::cmyk_uint8   >{ typedef ::color::category::tsl_uint8   akin_type; };
    template< >struct tsl< ::color::category::cmyk_uint16  >{ typedef ::color::category::tsl_uint16  akin_type; };
    template< >struct tsl< ::color::category::cmyk_uint32  >{ typedef ::color::category::tsl_uint32  akin_type; };
    template< >struct tsl< ::color::category::cmyk_uint64  >{ typedef ::color::category::tsl_uint64  akin_type; };
    template< >struct tsl< ::color::category::cmyk_float   >{ typedef ::color::category::tsl_float   akin_type; };
    template< >struct tsl< ::color::category::cmyk_double  >{ typedef ::color::category::tsl_double  akin_type; };
    template< >struct tsl< ::color::category::cmyk_ldouble >{ typedef ::color::category::tsl_ldouble akin_type; };

   }
 }

#endif
