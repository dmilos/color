#ifndef color_cmy_akin_yiq
#define color_cmy_akin_yiq

#include "../../generic/akin/cmy.hpp"
#include "../category.hpp"
#include "../../yiq/category.hpp"

namespace color
 {
  namespace akin
   {

    template< >struct cmy< ::color::category::yiq_uint8   >{ typedef ::color::category::cmy_uint8   akin_type; };
    template< >struct cmy< ::color::category::yiq_uint16  >{ typedef ::color::category::cmy_uint16  akin_type; };
    template< >struct cmy< ::color::category::yiq_uint32  >{ typedef ::color::category::cmy_uint32  akin_type; };
    template< >struct cmy< ::color::category::yiq_uint64  >{ typedef ::color::category::cmy_uint64  akin_type; };
    template< >struct cmy< ::color::category::yiq_float   >{ typedef ::color::category::cmy_float   akin_type; };
    template< >struct cmy< ::color::category::yiq_double  >{ typedef ::color::category::cmy_double  akin_type; };
    template< >struct cmy< ::color::category::yiq_ldouble >{ typedef ::color::category::cmy_ldouble akin_type; };

   }
 }

#endif
