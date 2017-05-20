#ifndef color_cmyk_akin_luv
#define color_cmyk_akin_luv

#include "../../generic/akin/cmyk.hpp"
#include "../category.hpp"
#include "../../luv/category.hpp"

namespace color
 {
  namespace akin
   {

    template< /*::color::constant::luv::reference_enum reference_number*/ >struct cmyk< ::color::category::luv_uint8   >{ typedef ::color::category::cmyk_uint8   akin_type; };
    template< /*::color::constant::luv::reference_enum reference_number*/ >struct cmyk< ::color::category::luv_uint16  >{ typedef ::color::category::cmyk_uint16  akin_type; };
    template< /*::color::constant::luv::reference_enum reference_number*/ >struct cmyk< ::color::category::luv_uint32  >{ typedef ::color::category::cmyk_uint32  akin_type; };
    template< /*::color::constant::luv::reference_enum reference_number*/ >struct cmyk< ::color::category::luv_uint64  >{ typedef ::color::category::cmyk_uint64  akin_type; };
    template< /*::color::constant::luv::reference_enum reference_number*/ >struct cmyk< ::color::category::luv_float   >{ typedef ::color::category::cmyk_float   akin_type; };
    template< /*::color::constant::luv::reference_enum reference_number*/ >struct cmyk< ::color::category::luv_double  >{ typedef ::color::category::cmyk_double  akin_type; };
    template< /*::color::constant::luv::reference_enum reference_number*/ >struct cmyk< ::color::category::luv_ldouble >{ typedef ::color::category::cmyk_ldouble akin_type; };

   }
 }

#endif