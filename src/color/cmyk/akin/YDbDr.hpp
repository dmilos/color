#ifndef color_cmyk_akin_YDbDr
#define color_cmyk_akin_YDbDr

#include "../../generic/akin/cmyk.hpp"
#include "../category.hpp"
#include "../../YDbDr/category.hpp"

namespace color
 {
  namespace akin
   {

    template< >struct cmyk< ::color::category::YDbDr_uint8   >{ typedef ::color::category::cmyk_uint8   akin_type; };
    template< >struct cmyk< ::color::category::YDbDr_uint16  >{ typedef ::color::category::cmyk_uint16  akin_type; };
    template< >struct cmyk< ::color::category::YDbDr_uint32  >{ typedef ::color::category::cmyk_uint32  akin_type; };
    template< >struct cmyk< ::color::category::YDbDr_uint64  >{ typedef ::color::category::cmyk_uint64  akin_type; };
    template< >struct cmyk< ::color::category::YDbDr_float   >{ typedef ::color::category::cmyk_float   akin_type; };
    template< >struct cmyk< ::color::category::YDbDr_double  >{ typedef ::color::category::cmyk_double  akin_type; };
    template< >struct cmyk< ::color::category::YDbDr_ldouble >{ typedef ::color::category::cmyk_ldouble akin_type; };

   }
 }

#endif
