#ifndef color_tsl_akin_hsv
#define color_tsl_akin_hsv

#include "../../generic/akin/tsl.hpp"
#include "../category.hpp"
#include "../../hsv/category.hpp"

namespace color
 {
  namespace akin
   {

    template< >struct tsl< ::color::category::hsv_uint8   >{ typedef ::color::category::tsl_uint8   akin_type; };
    template< >struct tsl< ::color::category::hsv_uint16  >{ typedef ::color::category::tsl_uint16  akin_type; };
    template< >struct tsl< ::color::category::hsv_uint32  >{ typedef ::color::category::tsl_uint32  akin_type; };
    template< >struct tsl< ::color::category::hsv_uint64  >{ typedef ::color::category::tsl_uint64  akin_type; };
    template< >struct tsl< ::color::category::hsv_float   >{ typedef ::color::category::tsl_float   akin_type; };
    template< >struct tsl< ::color::category::hsv_double  >{ typedef ::color::category::tsl_double  akin_type; };
    template< >struct tsl< ::color::category::hsv_ldouble >{ typedef ::color::category::tsl_ldouble akin_type; };

   }
 }

#endif
