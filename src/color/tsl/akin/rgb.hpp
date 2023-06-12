#ifndef color_tsl_akin_rgb
#define color_tsl_akin_rgb

#include "../../generic/akin/tsl.hpp"
#include "../category.hpp"
#include "../../rgb/category.hpp"

namespace color
 {
  namespace akin
   {

    template< >struct tsl< ::color::category::rgb_uint8   >{ typedef ::color::category::tsl_uint8   akin_type; };
    template< >struct tsl< ::color::category::rgb_uint16  >{ typedef ::color::category::tsl_uint16  akin_type; };
    template< >struct tsl< ::color::category::rgb_uint32  >{ typedef ::color::category::tsl_uint32  akin_type; };
    template< >struct tsl< ::color::category::rgb_uint64  >{ typedef ::color::category::tsl_uint64  akin_type; };
    template< >struct tsl< ::color::category::rgb_float   >{ typedef ::color::category::tsl_float   akin_type; };
    template< >struct tsl< ::color::category::rgb_double  >{ typedef ::color::category::tsl_double  akin_type; };
    template< >struct tsl< ::color::category::rgb_ldouble >{ typedef ::color::category::tsl_ldouble akin_type; };

   }
 }

#endif
