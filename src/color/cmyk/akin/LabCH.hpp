#ifndef color_cmyk_akin_LabCH
#define color_cmyk_akin_LabCH

#include "../../generic/akin/cmyk.hpp"
#include "../category.hpp"
#include "../../LabCH/category.hpp"

namespace color
 {
  namespace akin
   {

    template< >struct cmyk< ::color::category::LabCH_uint8   >{ typedef ::color::category::cmyk_uint8   akin_type; };
    template< >struct cmyk< ::color::category::LabCH_uint16  >{ typedef ::color::category::cmyk_uint16  akin_type; };
    template< >struct cmyk< ::color::category::LabCH_uint32  >{ typedef ::color::category::cmyk_uint32  akin_type; };
    template< >struct cmyk< ::color::category::LabCH_uint64  >{ typedef ::color::category::cmyk_uint64  akin_type; };
    template< >struct cmyk< ::color::category::LabCH_float   >{ typedef ::color::category::cmyk_float   akin_type; };
    template< >struct cmyk< ::color::category::LabCH_double  >{ typedef ::color::category::cmyk_double  akin_type; };
    template< >struct cmyk< ::color::category::LabCH_ldouble >{ typedef ::color::category::cmyk_ldouble akin_type; };

   }
 }

#endif
