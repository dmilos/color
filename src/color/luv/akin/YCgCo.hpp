#ifndef color_luv_akin_YCgCo
#define color_luv_akin_YCgCo

#include "../../generic/akin/luv.hpp"
#include "../category.hpp"
#include "../../YCgCo/category.hpp"

namespace color
 {
  namespace akin
   {

    template< >struct luv< ::color::category::YCgCo_uint8   >{ typedef ::color::category::luv_uint8   akin_type; };
    template< >struct luv< ::color::category::YCgCo_uint16  >{ typedef ::color::category::luv_uint16  akin_type; };
    template< >struct luv< ::color::category::YCgCo_uint32  >{ typedef ::color::category::luv_uint32  akin_type; };
    template< >struct luv< ::color::category::YCgCo_uint64  >{ typedef ::color::category::luv_uint64  akin_type; };
    template< >struct luv< ::color::category::YCgCo_float   >{ typedef ::color::category::luv_float   akin_type; };
    template< >struct luv< ::color::category::YCgCo_double  >{ typedef ::color::category::luv_double  akin_type; };
    template< >struct luv< ::color::category::YCgCo_ldouble >{ typedef ::color::category::luv_ldouble akin_type; };

   }
 }

#endif
