#ifndef color_YCgCo_akin_LuvCH
#define color_YCgCo_akin_LuvCH

#include "../../generic/akin/YCgCo.hpp"
#include "../category.hpp"
#include "../../LuvCH/category.hpp"

namespace color
 {
  namespace akin
   {

    template< >struct YCgCo< ::color::category::LuvCH_uint8   >{ typedef ::color::category::YCgCo_uint8   akin_type; };
    template< >struct YCgCo< ::color::category::LuvCH_uint16  >{ typedef ::color::category::YCgCo_uint16  akin_type; };
    template< >struct YCgCo< ::color::category::LuvCH_uint32  >{ typedef ::color::category::YCgCo_uint32  akin_type; };
    template< >struct YCgCo< ::color::category::LuvCH_uint64  >{ typedef ::color::category::YCgCo_uint64  akin_type; };
    template< >struct YCgCo< ::color::category::LuvCH_float   >{ typedef ::color::category::YCgCo_float   akin_type; };
    template< >struct YCgCo< ::color::category::LuvCH_double  >{ typedef ::color::category::YCgCo_double  akin_type; };
    template< >struct YCgCo< ::color::category::LuvCH_ldouble >{ typedef ::color::category::YCgCo_ldouble akin_type; };

   }
 }

#endif
