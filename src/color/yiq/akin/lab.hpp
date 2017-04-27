#ifndef color_yiq_akin_lab
#define color_yiq_akin_lab

#include "../../generic/akin/yiq.hpp"
#include "../category.hpp"
#include "../../lab/category.hpp"

namespace color
 {
  namespace akin
   {

    template< >struct yiq< ::color::category::lab_uint8   >{ typedef ::color::category::yiq_uint8   akin_type; };
    template< >struct yiq< ::color::category::lab_uint16  >{ typedef ::color::category::yiq_uint16  akin_type; };
    template< >struct yiq< ::color::category::lab_uint32  >{ typedef ::color::category::yiq_uint32  akin_type; };
    template< >struct yiq< ::color::category::lab_uint64  >{ typedef ::color::category::yiq_uint64  akin_type; };
    template< >struct yiq< ::color::category::lab_float   >{ typedef ::color::category::yiq_float   akin_type; };
    template< >struct yiq< ::color::category::lab_double  >{ typedef ::color::category::yiq_double  akin_type; };
    template< >struct yiq< ::color::category::lab_ldouble >{ typedef ::color::category::yiq_ldouble akin_type; };

   }
 }

#endif
