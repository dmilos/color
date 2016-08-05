#ifndef color_gray_akin_YCbCr
#define color_gray_akin_YCbCr

#include "../../generic/akin/gray.hpp"
#include "../category.hpp"
#include "../../YCbCr/category.hpp"

namespace color
 {
  namespace akin
   {

    template< >struct gray< ::color::category::YCbCr_uint8   >{ typedef ::color::category::gray_uint8   akin_type; };
    template< >struct gray< ::color::category::YCbCr_uint16  >{ typedef ::color::category::gray_uint16  akin_type; };
    template< >struct gray< ::color::category::YCbCr_uint32  >{ typedef ::color::category::gray_uint32  akin_type; };
    template< >struct gray< ::color::category::YCbCr_uint64  >{ typedef ::color::category::gray_uint64  akin_type; };
    template< >struct gray< ::color::category::YCbCr_float   >{ typedef ::color::category::gray_float   akin_type; };
    template< >struct gray< ::color::category::YCbCr_double  >{ typedef ::color::category::gray_double  akin_type; };
    template< >struct gray< ::color::category::YCbCr_ldouble >{ typedef ::color::category::gray_ldouble akin_type; };

   }
 }

#endif
