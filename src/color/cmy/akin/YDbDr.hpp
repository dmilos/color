#ifndef color_cmy_akin_YDbDr
#define color_cmy_akin_YDbDr

#include "../../generic/akin/cmy.hpp"
#include "../category.hpp"
#include "../../YDbDr/category.hpp"

namespace color
 {
  namespace akin
   {

    template< >struct cmy< ::color::category::YDbDr_uint8   >{ typedef ::color::category::cmy_uint8   akin_type; };
    template< >struct cmy< ::color::category::YDbDr_uint16  >{ typedef ::color::category::cmy_uint16  akin_type; };
    template< >struct cmy< ::color::category::YDbDr_uint32  >{ typedef ::color::category::cmy_uint32  akin_type; };
    template< >struct cmy< ::color::category::YDbDr_uint64  >{ typedef ::color::category::cmy_uint64  akin_type; };
    template< >struct cmy< ::color::category::YDbDr_float   >{ typedef ::color::category::cmy_float   akin_type; };
    template< >struct cmy< ::color::category::YDbDr_double  >{ typedef ::color::category::cmy_double  akin_type; };
    template< >struct cmy< ::color::category::YDbDr_ldouble >{ typedef ::color::category::cmy_ldouble akin_type; };

   }
 }

#endif
