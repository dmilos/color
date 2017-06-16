#ifndef color_LabCH_akin_yiq
#define color_LabCH_akin_yiq

#include "../../generic/akin/LabCH.hpp"
#include "../category.hpp"
#include "../../yiq/category.hpp"

namespace color
 {
  namespace akin
   {

    template< >struct LabCH< ::color::category::yiq_uint8   >{ typedef ::color::category::LabCH_uint8   akin_type; };
    template< >struct LabCH< ::color::category::yiq_uint16  >{ typedef ::color::category::LabCH_uint16  akin_type; };
    template< >struct LabCH< ::color::category::yiq_uint32  >{ typedef ::color::category::LabCH_uint32  akin_type; };
    template< >struct LabCH< ::color::category::yiq_uint64  >{ typedef ::color::category::LabCH_uint64  akin_type; };
    template< >struct LabCH< ::color::category::yiq_float   >{ typedef ::color::category::LabCH_float   akin_type; };
    template< >struct LabCH< ::color::category::yiq_double  >{ typedef ::color::category::LabCH_double  akin_type; };
    template< >struct LabCH< ::color::category::yiq_ldouble >{ typedef ::color::category::LabCH_ldouble akin_type; };

   }
 }

#endif
