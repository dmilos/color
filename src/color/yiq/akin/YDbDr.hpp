#ifndef color_yiq_akin_YDbDr
#define color_yiq_akin_YDbDr

#include "../../generic/akin/yiq.hpp"
#include "../category.hpp"
#include "../../YDbDr/category.hpp"

namespace color
 {
  namespace akin
   {

    template< >struct yiq< ::color::category::YDbDr_uint8   >{ typedef ::color::category::yiq_uint8   akin_type; };
    template< >struct yiq< ::color::category::YDbDr_uint16  >{ typedef ::color::category::yiq_uint16  akin_type; };
    template< >struct yiq< ::color::category::YDbDr_uint32  >{ typedef ::color::category::yiq_uint32  akin_type; };
    template< >struct yiq< ::color::category::YDbDr_uint64  >{ typedef ::color::category::yiq_uint64  akin_type; };
    template< >struct yiq< ::color::category::YDbDr_float   >{ typedef ::color::category::yiq_float   akin_type; };
    template< >struct yiq< ::color::category::YDbDr_double  >{ typedef ::color::category::yiq_double  akin_type; };
    template< >struct yiq< ::color::category::YDbDr_ldouble >{ typedef ::color::category::yiq_ldouble akin_type; };

   }
 }

#endif
