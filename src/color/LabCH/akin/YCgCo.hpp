#ifndef color_LabCH_akin_YCgCo
#define color_LabCH_akin_YCgCo

#include "../../generic/akin/LabCH.hpp"
#include "../category.hpp"
#include "../../YCgCo/category.hpp"

namespace color
 {
  namespace akin
   {

    template< >struct LabCH< ::color::category::YCgCo_uint8   >{ typedef ::color::category::LabCH_uint8   akin_type; };
    template< >struct LabCH< ::color::category::YCgCo_uint16  >{ typedef ::color::category::LabCH_uint16  akin_type; };
    template< >struct LabCH< ::color::category::YCgCo_uint32  >{ typedef ::color::category::LabCH_uint32  akin_type; };
    template< >struct LabCH< ::color::category::YCgCo_uint64  >{ typedef ::color::category::LabCH_uint64  akin_type; };
    template< >struct LabCH< ::color::category::YCgCo_float   >{ typedef ::color::category::LabCH_float   akin_type; };
    template< >struct LabCH< ::color::category::YCgCo_double  >{ typedef ::color::category::LabCH_double  akin_type; };
    template< >struct LabCH< ::color::category::YCgCo_ldouble >{ typedef ::color::category::LabCH_ldouble akin_type; };

   }
 }

#endif
