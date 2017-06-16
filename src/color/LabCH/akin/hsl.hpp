#ifndef color_LabCH_akin_hsl
#define color_LabCH_akin_hsl

#include "../../generic/akin/LabCH.hpp"
#include "../category.hpp"
#include "../../hsl/category.hpp"

namespace color
 {
  namespace akin
   {

    template< >struct LabCH< ::color::category::hsl_uint8   >{ typedef ::color::category::LabCH_uint8   akin_type; };
    template< >struct LabCH< ::color::category::hsl_uint16  >{ typedef ::color::category::LabCH_uint16  akin_type; };
    template< >struct LabCH< ::color::category::hsl_uint32  >{ typedef ::color::category::LabCH_uint32  akin_type; };
    template< >struct LabCH< ::color::category::hsl_uint64  >{ typedef ::color::category::LabCH_uint64  akin_type; };
    template< >struct LabCH< ::color::category::hsl_float   >{ typedef ::color::category::LabCH_float   akin_type; };
    template< >struct LabCH< ::color::category::hsl_double  >{ typedef ::color::category::LabCH_double  akin_type; };
    template< >struct LabCH< ::color::category::hsl_ldouble >{ typedef ::color::category::LabCH_ldouble akin_type; };

   }
 }

#endif
