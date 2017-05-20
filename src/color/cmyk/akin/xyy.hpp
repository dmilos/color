#ifndef color_cmyk_akin_xyy
#define color_cmyk_akin_xyy

#include "../../generic/akin/cmyk.hpp"
#include "../category.hpp"
#include "../../xyy/category.hpp"

namespace color
 {
  namespace akin
   {

    template< /*::color::constant::xyy::reference_enum reference_number*/ >struct cmyk< ::color::category::xyy_uint8   >{ typedef ::color::category::cmyk_uint8   akin_type; };
    template< /*::color::constant::xyy::reference_enum reference_number*/ >struct cmyk< ::color::category::xyy_uint16  >{ typedef ::color::category::cmyk_uint16  akin_type; };
    template< /*::color::constant::xyy::reference_enum reference_number*/ >struct cmyk< ::color::category::xyy_uint32  >{ typedef ::color::category::cmyk_uint32  akin_type; };
    template< /*::color::constant::xyy::reference_enum reference_number*/ >struct cmyk< ::color::category::xyy_uint64  >{ typedef ::color::category::cmyk_uint64  akin_type; };
    template< /*::color::constant::xyy::reference_enum reference_number*/ >struct cmyk< ::color::category::xyy_float   >{ typedef ::color::category::cmyk_float   akin_type; };
    template< /*::color::constant::xyy::reference_enum reference_number*/ >struct cmyk< ::color::category::xyy_double  >{ typedef ::color::category::cmyk_double  akin_type; };
    template< /*::color::constant::xyy::reference_enum reference_number*/ >struct cmyk< ::color::category::xyy_ldouble >{ typedef ::color::category::cmyk_ldouble akin_type; };

   }
 }

#endif