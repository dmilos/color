#ifndef color_xyy_akin_lab
#define color_xyy_akin_lab

#include "../../generic/akin/lab.hpp"
#include "../category.hpp"
#include "../../lab/category.hpp"

namespace color
 {
  namespace akin
   {

    template< >struct xyy< ::color::category::lab_uint8   >{ typedef ::color::category::xyy_uint8   akin_type; };
    template< >struct xyy< ::color::category::lab_uint16  >{ typedef ::color::category::xyy_uint16  akin_type; };
    template< >struct xyy< ::color::category::lab_uint32  >{ typedef ::color::category::xyy_uint32  akin_type; };
    template< >struct xyy< ::color::category::lab_uint64  >{ typedef ::color::category::xyy_uint64  akin_type; };
    template< >struct xyy< ::color::category::lab_float   >{ typedef ::color::category::xyy_float   akin_type; };
    template< >struct xyy< ::color::category::lab_double  >{ typedef ::color::category::xyy_double  akin_type; };
    template< >struct xyy< ::color::category::lab_ldouble >{ typedef ::color::category::xyy_ldouble akin_type; };

   }
 }

#endif
