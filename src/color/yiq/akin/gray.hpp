#ifndef color_yiq_akin_gray
#define color_yiq_akin_gray

#include "../../generic/akin/yiq.hpp"
#include "../category.hpp"
#include "../../gray/category.hpp"

namespace color
 {
  namespace akin
   {

    template< >struct yiq< ::color::category::gray_uint8   >{ typedef ::color::category::yiq_uint8   akin_type; };
    template< >struct yiq< ::color::category::gray_uint16  >{ typedef ::color::category::yiq_uint16  akin_type; };
    template< >struct yiq< ::color::category::gray_uint32  >{ typedef ::color::category::yiq_uint32  akin_type; };
    template< >struct yiq< ::color::category::gray_uint64  >{ typedef ::color::category::yiq_uint64  akin_type; };
    template< >struct yiq< ::color::category::gray_float   >{ typedef ::color::category::yiq_float   akin_type; };
    template< >struct yiq< ::color::category::gray_double  >{ typedef ::color::category::yiq_double  akin_type; };
    template< >struct yiq< ::color::category::gray_ldouble >{ typedef ::color::category::yiq_ldouble akin_type; };

   }
 }

#endif
