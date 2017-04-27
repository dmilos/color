#ifndef color_cmy_akin_lab
#define color_cmy_akin_lab

#include "../../generic/akin/cmy.hpp"
#include "../category.hpp"
#include "../../lab/category.hpp"

namespace color
 {
  namespace akin
   {

    template< >struct cmy< ::color::category::lab_uint8   >{ typedef ::color::category::cmy_uint8   akin_type; };
    template< >struct cmy< ::color::category::lab_uint16  >{ typedef ::color::category::cmy_uint16  akin_type; };
    template< >struct cmy< ::color::category::lab_uint32  >{ typedef ::color::category::cmy_uint32  akin_type; };
    template< >struct cmy< ::color::category::lab_uint64  >{ typedef ::color::category::cmy_uint64  akin_type; };
    template< >struct cmy< ::color::category::lab_float   >{ typedef ::color::category::cmy_float   akin_type; };
    template< >struct cmy< ::color::category::lab_double  >{ typedef ::color::category::cmy_double  akin_type; };
    template< >struct cmy< ::color::category::lab_ldouble >{ typedef ::color::category::cmy_ldouble akin_type; };

   }
 }

#endif
