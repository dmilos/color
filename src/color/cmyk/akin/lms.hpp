#ifndef color_cmyk_akin_lms
#define color_cmyk_akin_lms

#include "../../generic/akin/cmyk.hpp"
#include "../category.hpp"
#include "../../lms/category.hpp"

namespace color
 {
  namespace akin
   {

    template< /*::color::constant::lms::reference_enum reference_number*/ >struct cmyk< ::color::category::lms_uint8   >{ typedef ::color::category::cmyk_uint8   akin_type; };
    template< /*::color::constant::lms::reference_enum reference_number*/ >struct cmyk< ::color::category::lms_uint16  >{ typedef ::color::category::cmyk_uint16  akin_type; };
    template< /*::color::constant::lms::reference_enum reference_number*/ >struct cmyk< ::color::category::lms_uint32  >{ typedef ::color::category::cmyk_uint32  akin_type; };
    template< /*::color::constant::lms::reference_enum reference_number*/ >struct cmyk< ::color::category::lms_uint64  >{ typedef ::color::category::cmyk_uint64  akin_type; };
    template< /*::color::constant::lms::reference_enum reference_number*/ >struct cmyk< ::color::category::lms_float   >{ typedef ::color::category::cmyk_float   akin_type; };
    template< /*::color::constant::lms::reference_enum reference_number*/ >struct cmyk< ::color::category::lms_double  >{ typedef ::color::category::cmyk_double  akin_type; };
    template< /*::color::constant::lms::reference_enum reference_number*/ >struct cmyk< ::color::category::lms_ldouble >{ typedef ::color::category::cmyk_ldouble akin_type; };

   }
 }

#endif
