#ifndef color_luv_akin_cmy
#define color_luv_akin_cmy

#include "../../generic/akin/luv.hpp"
#include "../category.hpp"
#include "../../cmy/category.hpp"

namespace color
 {
  namespace akin
   {

    template< >struct luv< ::color::category::cmy_uint8   >{ typedef ::color::category::luv_uint8   akin_type; };
    template< >struct luv< ::color::category::cmy_uint16  >{ typedef ::color::category::luv_uint16  akin_type; };
    template< >struct luv< ::color::category::cmy_uint32  >{ typedef ::color::category::luv_uint32  akin_type; };
    template< >struct luv< ::color::category::cmy_uint64  >{ typedef ::color::category::luv_uint64  akin_type; };
    template< >struct luv< ::color::category::cmy_float   >{ typedef ::color::category::luv_float   akin_type; };
    template< >struct luv< ::color::category::cmy_double  >{ typedef ::color::category::luv_double  akin_type; };
    template< >struct luv< ::color::category::cmy_ldouble >{ typedef ::color::category::luv_ldouble akin_type; };

   }
 }

#endif
