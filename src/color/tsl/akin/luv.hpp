#ifndef color_tsl_akin_luv
#define color_tsl_akin_luv

#include "../../generic/akin/tsl.hpp"
#include "../category.hpp"
#include "../../luv/category.hpp"

namespace color
 {
  namespace akin
   {

    template< >struct tsl< ::color::category::luv_uint8   >{ typedef ::color::category::tsl_uint8   akin_type; };
    template< >struct tsl< ::color::category::luv_uint16  >{ typedef ::color::category::tsl_uint16  akin_type; };
    template< >struct tsl< ::color::category::luv_uint32  >{ typedef ::color::category::tsl_uint32  akin_type; };
    template< >struct tsl< ::color::category::luv_uint64  >{ typedef ::color::category::tsl_uint64  akin_type; };
    template< >struct tsl< ::color::category::luv_float   >{ typedef ::color::category::tsl_float   akin_type; };
    template< >struct tsl< ::color::category::luv_double  >{ typedef ::color::category::tsl_double  akin_type; };
    template< >struct tsl< ::color::category::luv_ldouble >{ typedef ::color::category::tsl_ldouble akin_type; };

   }
 }

#endif
