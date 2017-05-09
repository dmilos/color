#ifndef color_luv_akin_gray
#define color_luv_akin_gray

#include "../../generic/akin/luv.hpp"
#include "../category.hpp"
#include "../../gray/category.hpp"

namespace color
 {
  namespace akin
   {

    template< >struct luv< ::color::category::gray_uint8   >{ typedef ::color::category::luv_uint8   akin_type; };
    template< >struct luv< ::color::category::gray_uint16  >{ typedef ::color::category::luv_uint16  akin_type; };
    template< >struct luv< ::color::category::gray_uint32  >{ typedef ::color::category::luv_uint32  akin_type; };
    template< >struct luv< ::color::category::gray_uint64  >{ typedef ::color::category::luv_uint64  akin_type; };
    template< >struct luv< ::color::category::gray_float   >{ typedef ::color::category::luv_float   akin_type; };
    template< >struct luv< ::color::category::gray_double  >{ typedef ::color::category::luv_double  akin_type; };
    template< >struct luv< ::color::category::gray_ldouble >{ typedef ::color::category::luv_ldouble akin_type; };

   }
 }

#endif
