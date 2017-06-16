#ifndef color_LabCH_akin_hsi
#define color_LabCH_akin_hsi

#include "../../generic/akin/LabCH.hpp"
#include "../category.hpp"
#include "../../hsi/category.hpp"

namespace color
 {
  namespace akin
   {

    template< >struct LabCH< ::color::category::hsi_uint8   >{ typedef ::color::category::LabCH_uint8   akin_type; };
    template< >struct LabCH< ::color::category::hsi_uint16  >{ typedef ::color::category::LabCH_uint16  akin_type; };
    template< >struct LabCH< ::color::category::hsi_uint32  >{ typedef ::color::category::LabCH_uint32  akin_type; };
    template< >struct LabCH< ::color::category::hsi_uint64  >{ typedef ::color::category::LabCH_uint64  akin_type; };
    template< >struct LabCH< ::color::category::hsi_float   >{ typedef ::color::category::LabCH_float   akin_type; };
    template< >struct LabCH< ::color::category::hsi_double  >{ typedef ::color::category::LabCH_double  akin_type; };
    template< >struct LabCH< ::color::category::hsi_ldouble >{ typedef ::color::category::LabCH_ldouble akin_type; };

   }
 }

#endif
