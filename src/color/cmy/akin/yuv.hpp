#ifndef color_cmy_akin_yuv
#define color_cmy_akin_yuv

#include "../../generic/akin/cmy.hpp"
#include "../category.hpp"
#include "../../yuv/category.hpp"

namespace color
 {
  namespace akin
   {

    template< >struct cmy< ::color::category::yuv_uint8   >{ typedef ::color::category::cmy_uint8   akin_type; };
    template< >struct cmy< ::color::category::yuv_uint16  >{ typedef ::color::category::cmy_uint16  akin_type; };
    template< >struct cmy< ::color::category::yuv_uint32  >{ typedef ::color::category::cmy_uint32  akin_type; };
    template< >struct cmy< ::color::category::yuv_uint64  >{ typedef ::color::category::cmy_uint64  akin_type; };
    template< >struct cmy< ::color::category::yuv_float   >{ typedef ::color::category::cmy_float   akin_type; };
    template< >struct cmy< ::color::category::yuv_double  >{ typedef ::color::category::cmy_double  akin_type; };
    template< >struct cmy< ::color::category::yuv_ldouble >{ typedef ::color::category::cmy_ldouble akin_type; };

   }
 }

#endif
