#ifndef color_tsl_akin_cmy
#define color_tsl_akin_cmy

#include "../../generic/akin/tsl.hpp"
#include "../category.hpp"
#include "../../cmy/category.hpp"

namespace color
 {
  namespace akin
   {

    template< >struct tsl< ::color::category::cmy_uint8   >{ typedef ::color::category::tsl_uint8   akin_type; };
    template< >struct tsl< ::color::category::cmy_uint16  >{ typedef ::color::category::tsl_uint16  akin_type; };
    template< >struct tsl< ::color::category::cmy_uint32  >{ typedef ::color::category::tsl_uint32  akin_type; };
    template< >struct tsl< ::color::category::cmy_uint64  >{ typedef ::color::category::tsl_uint64  akin_type; };
    template< >struct tsl< ::color::category::cmy_float   >{ typedef ::color::category::tsl_float   akin_type; };
    template< >struct tsl< ::color::category::cmy_double  >{ typedef ::color::category::tsl_double  akin_type; };
    template< >struct tsl< ::color::category::cmy_ldouble >{ typedef ::color::category::tsl_ldouble akin_type; };

   }
 }

#endif
