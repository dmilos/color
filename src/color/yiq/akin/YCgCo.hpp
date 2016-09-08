#ifndef color_yiq_akin_YCgCo
#define color_yiq_akin_YCgCo

#include "../../generic/akin/yiq.hpp"
#include "../category.hpp"
#include "../../YCgCo/category.hpp"

namespace color
 {
  namespace akin
   {

    template< >struct yiq< ::color::category::YCgCo_uint8   >{ typedef ::color::category::yiq_uint8   akin_type; };
    template< >struct yiq< ::color::category::YCgCo_uint16  >{ typedef ::color::category::yiq_uint16  akin_type; };
    template< >struct yiq< ::color::category::YCgCo_uint32  >{ typedef ::color::category::yiq_uint32  akin_type; };
    template< >struct yiq< ::color::category::YCgCo_uint64  >{ typedef ::color::category::yiq_uint64  akin_type; };
    template< >struct yiq< ::color::category::YCgCo_float   >{ typedef ::color::category::yiq_float   akin_type; };
    template< >struct yiq< ::color::category::YCgCo_double  >{ typedef ::color::category::yiq_double  akin_type; };
    template< >struct yiq< ::color::category::YCgCo_ldouble >{ typedef ::color::category::yiq_ldouble akin_type; };

   }
 }

#endif
