#ifndef color_YCbCr_akin_rgb
#define color_YCbCr_akin_rgb

#include "../../generic/akin/YCbCr.hpp"
#include "../category.hpp"
#include "../../rgb/category.hpp"

namespace color
 {
  namespace akin
   {

    template< >struct YCbCr< ::color::category::rgb_uint8   >{ typedef ::color::category::YCbCr_uint8   akin_type; };
    template< >struct YCbCr< ::color::category::rgb_uint16  >{ typedef ::color::category::YCbCr_uint16  akin_type; };
    template< >struct YCbCr< ::color::category::rgb_uint32  >{ typedef ::color::category::YCbCr_uint32  akin_type; };
    template< >struct YCbCr< ::color::category::rgb_uint64  >{ typedef ::color::category::YCbCr_uint64  akin_type; };
    template< >struct YCbCr< ::color::category::rgb_float   >{ typedef ::color::category::YCbCr_float   akin_type; };
    template< >struct YCbCr< ::color::category::rgb_double  >{ typedef ::color::category::YCbCr_double  akin_type; };
    template< >struct YCbCr< ::color::category::rgb_ldouble >{ typedef ::color::category::YCbCr_ldouble akin_type; };

   }
 }

#endif
