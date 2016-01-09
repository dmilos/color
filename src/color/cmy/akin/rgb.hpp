#ifndef color_cmy_akin_rgb
#define color_cmy_akin_rgb

#include "../../generic/akin/cmy.hpp"
#include "../category.hpp"
#include "../../rgb/category.hpp"

namespace color
 {
  namespace akin
   {

    template< >struct cmy< ::color::category::rgb_uint8   >{ typedef ::color::category::cmy_uint8   akin_type; };
    template< >struct cmy< ::color::category::rgb_uint16  >{ typedef ::color::category::cmy_uint16  akin_type; };
    template< >struct cmy< ::color::category::rgb_uint32  >{ typedef ::color::category::cmy_uint32  akin_type; };
    template< >struct cmy< ::color::category::rgb_uint64  >{ typedef ::color::category::cmy_uint64  akin_type; };
    template< >struct cmy< ::color::category::rgb_float   >{ typedef ::color::category::cmy_float   akin_type; };
    template< >struct cmy< ::color::category::rgb_double  >{ typedef ::color::category::cmy_double  akin_type; };
    template< >struct cmy< ::color::category::rgb_ldouble >{ typedef ::color::category::cmy_ldouble akin_type; };

   }
 }

#endif
