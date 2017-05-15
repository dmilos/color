#ifndef color_yiq_akin_xyy
#define color_yiq_akin_xyy

#include "../../generic/akin/yiq.hpp"
#include "../category.hpp"
#include "../../xyy/category.hpp"

namespace color
 {
  namespace akin
   {

    template< >struct yiq< ::color::category::xyy_uint8   >{ typedef ::color::category::yiq_uint8   akin_type; };
    template< >struct yiq< ::color::category::xyy_uint16  >{ typedef ::color::category::yiq_uint16  akin_type; };
    template< >struct yiq< ::color::category::xyy_uint32  >{ typedef ::color::category::yiq_uint32  akin_type; };
    template< >struct yiq< ::color::category::xyy_uint64  >{ typedef ::color::category::yiq_uint64  akin_type; };
    template< >struct yiq< ::color::category::xyy_float   >{ typedef ::color::category::yiq_float   akin_type; };
    template< >struct yiq< ::color::category::xyy_double  >{ typedef ::color::category::yiq_double  akin_type; };
    template< >struct yiq< ::color::category::xyy_ldouble >{ typedef ::color::category::yiq_ldouble akin_type; };

   }
 }

#endif
