#ifndef color_tsl_akin_LabCH
#define color_tsl_akin_LabCH

#include "../../generic/akin/tsl.hpp"
#include "../category.hpp"
#include "../../LabCH/category.hpp"

namespace color
 {
  namespace akin
   {

    template< >struct tsl< ::color::category::LabCH_uint8   >{ typedef ::color::category::tsl_uint8   akin_type; };
    template< >struct tsl< ::color::category::LabCH_uint16  >{ typedef ::color::category::tsl_uint16  akin_type; };
    template< >struct tsl< ::color::category::LabCH_uint32  >{ typedef ::color::category::tsl_uint32  akin_type; };
    template< >struct tsl< ::color::category::LabCH_uint64  >{ typedef ::color::category::tsl_uint64  akin_type; };
    template< >struct tsl< ::color::category::LabCH_float   >{ typedef ::color::category::tsl_float   akin_type; };
    template< >struct tsl< ::color::category::LabCH_double  >{ typedef ::color::category::tsl_double  akin_type; };
    template< >struct tsl< ::color::category::LabCH_ldouble >{ typedef ::color::category::tsl_ldouble akin_type; };

   }
 }

#endif
