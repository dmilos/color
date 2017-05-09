#ifndef color_luv_akin_hsl
#define color_luv_akin_hsl

#include "../../generic/akin/luv.hpp"
#include "../category.hpp"
#include "../../hsl/category.hpp"

namespace color
 {
  namespace akin
   {

    template< >struct luv< ::color::category::hsl_uint8   >{ typedef ::color::category::luv_uint8   akin_type; };
    template< >struct luv< ::color::category::hsl_uint16  >{ typedef ::color::category::luv_uint16  akin_type; };
    template< >struct luv< ::color::category::hsl_uint32  >{ typedef ::color::category::luv_uint32  akin_type; };
    template< >struct luv< ::color::category::hsl_uint64  >{ typedef ::color::category::luv_uint64  akin_type; };
    template< >struct luv< ::color::category::hsl_float   >{ typedef ::color::category::luv_float   akin_type; };
    template< >struct luv< ::color::category::hsl_double  >{ typedef ::color::category::luv_double  akin_type; };
    template< >struct luv< ::color::category::hsl_ldouble >{ typedef ::color::category::luv_ldouble akin_type; };

   }
 }

#endif
