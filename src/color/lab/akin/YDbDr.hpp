#ifndef color_lab_akin_YDbDr
#define color_lab_akin_YDbDr

#include "../../generic/akin/lab.hpp"
#include "../category.hpp"
#include "../../YDbDr/category.hpp"

namespace color
 {
  namespace akin
   {

    template< >struct lab< ::color::category::YDbDr_uint8   >{ typedef ::color::category::lab_uint8   akin_type; };
    template< >struct lab< ::color::category::YDbDr_uint16  >{ typedef ::color::category::lab_uint16  akin_type; };
    template< >struct lab< ::color::category::YDbDr_uint32  >{ typedef ::color::category::lab_uint32  akin_type; };
    template< >struct lab< ::color::category::YDbDr_uint64  >{ typedef ::color::category::lab_uint64  akin_type; };
    template< >struct lab< ::color::category::YDbDr_float   >{ typedef ::color::category::lab_float   akin_type; };
    template< >struct lab< ::color::category::YDbDr_double  >{ typedef ::color::category::lab_double  akin_type; };
    template< >struct lab< ::color::category::YDbDr_ldouble >{ typedef ::color::category::lab_ldouble akin_type; };

   }
 }

#endif
