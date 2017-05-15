#ifndef color_yiq_akin_luv
#define color_yiq_akin_luv

#include "../../generic/akin/yiq.hpp"
#include "../category.hpp"
#include "../../luv/category.hpp"

namespace color
 {
  namespace akin
   {

    template< >struct yiq< ::color::category::luv_uint8   >{ typedef ::color::category::yiq_uint8   akin_type; };
    template< >struct yiq< ::color::category::luv_uint16  >{ typedef ::color::category::yiq_uint16  akin_type; };
    template< >struct yiq< ::color::category::luv_uint32  >{ typedef ::color::category::yiq_uint32  akin_type; };
    template< >struct yiq< ::color::category::luv_uint64  >{ typedef ::color::category::yiq_uint64  akin_type; };
    template< >struct yiq< ::color::category::luv_float   >{ typedef ::color::category::yiq_float   akin_type; };
    template< >struct yiq< ::color::category::luv_double  >{ typedef ::color::category::yiq_double  akin_type; };
    template< >struct yiq< ::color::category::luv_ldouble >{ typedef ::color::category::yiq_ldouble akin_type; };

   }
 }

#endif
