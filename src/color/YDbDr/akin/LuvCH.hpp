#ifndef color_YDbDr_akin_LuvCH
#define color_YDbDr_akin_LuvCH

#include "../../generic/akin/YDbDr.hpp"
#include "../category.hpp"
#include "../../LuvCH/category.hpp"

namespace color
 {
  namespace akin
   {

    template< >struct YDbDr< ::color::category::LuvCH_uint8   >{ typedef ::color::category::YDbDr_uint8   akin_type; };
    template< >struct YDbDr< ::color::category::LuvCH_uint16  >{ typedef ::color::category::YDbDr_uint16  akin_type; };
    template< >struct YDbDr< ::color::category::LuvCH_uint32  >{ typedef ::color::category::YDbDr_uint32  akin_type; };
    template< >struct YDbDr< ::color::category::LuvCH_uint64  >{ typedef ::color::category::YDbDr_uint64  akin_type; };
    template< >struct YDbDr< ::color::category::LuvCH_float   >{ typedef ::color::category::YDbDr_float   akin_type; };
    template< >struct YDbDr< ::color::category::LuvCH_double  >{ typedef ::color::category::YDbDr_double  akin_type; };
    template< >struct YDbDr< ::color::category::LuvCH_ldouble >{ typedef ::color::category::YDbDr_ldouble akin_type; };

   }
 }

#endif
