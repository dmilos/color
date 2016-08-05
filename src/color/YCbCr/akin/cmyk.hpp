#ifndef color_YCbCr_akin_cmyk
#define color_YCbCr_akin_cmyk

#include "../../generic/akin/YCbCr.hpp"
#include "../category.hpp"
#include "../../cmyk/category.hpp"

namespace color
 {
  namespace akin
   {

    template< >struct YCbCr< ::color::category::cmyk_uint8   >{ typedef ::color::category::YCbCr_uint8   akin_type; };
    template< >struct YCbCr< ::color::category::cmyk_uint16  >{ typedef ::color::category::YCbCr_uint16  akin_type; };
    template< >struct YCbCr< ::color::category::cmyk_uint32  >{ typedef ::color::category::YCbCr_uint32  akin_type; };
    template< >struct YCbCr< ::color::category::cmyk_uint64  >{ typedef ::color::category::YCbCr_uint64  akin_type; };
    template< >struct YCbCr< ::color::category::cmyk_float   >{ typedef ::color::category::YCbCr_float   akin_type; };
    template< >struct YCbCr< ::color::category::cmyk_double  >{ typedef ::color::category::YCbCr_double  akin_type; };
    template< >struct YCbCr< ::color::category::cmyk_ldouble >{ typedef ::color::category::YCbCr_ldouble akin_type; };

   }
 }

#endif
