#ifndef color_YPbPr_akin_yiq
#define color_YPbPr_akin_yiq

#include "../../generic/akin/YPbPr.hpp"
#include "../category.hpp"
#include "../../yiq/category.hpp"

namespace color
 {
  namespace akin
   {

    template< >struct YPbPr< ::color::category::yiq_uint8   >{ typedef ::color::category::YPbPr_uint8   akin_type; };
    template< >struct YPbPr< ::color::category::yiq_uint16  >{ typedef ::color::category::YPbPr_uint16  akin_type; };
    template< >struct YPbPr< ::color::category::yiq_uint32  >{ typedef ::color::category::YPbPr_uint32  akin_type; };
    template< >struct YPbPr< ::color::category::yiq_uint64  >{ typedef ::color::category::YPbPr_uint64  akin_type; };
    template< >struct YPbPr< ::color::category::yiq_float   >{ typedef ::color::category::YPbPr_float   akin_type; };
    template< >struct YPbPr< ::color::category::yiq_double  >{ typedef ::color::category::YPbPr_double  akin_type; };
    template< >struct YPbPr< ::color::category::yiq_ldouble >{ typedef ::color::category::YPbPr_ldouble akin_type; };

   }
 }

#endif
