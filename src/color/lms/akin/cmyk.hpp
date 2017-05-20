#ifndef color_lms_akin_cmyk
#define color_lms_akin_cmyk

#include "../../generic/akin/lms.hpp"
#include "../category.hpp"
#include "../../cmyk/category.hpp"

namespace color
 {
  namespace akin
   {

    template< /* ::color::constant::lms::reference_enum reference_number */ >struct lms< ::color::category::cmyk_uint8   >{ typedef ::color::category::lms_uint8   akin_type; };
    template< /* ::color::constant::lms::reference_enum reference_number */ >struct lms< ::color::category::cmyk_uint16  >{ typedef ::color::category::lms_uint16  akin_type; };
    template< /* ::color::constant::lms::reference_enum reference_number */ >struct lms< ::color::category::cmyk_uint32  >{ typedef ::color::category::lms_uint32  akin_type; };
    template< /* ::color::constant::lms::reference_enum reference_number */ >struct lms< ::color::category::cmyk_uint64  >{ typedef ::color::category::lms_uint64  akin_type; };
    template< /* ::color::constant::lms::reference_enum reference_number */ >struct lms< ::color::category::cmyk_float   >{ typedef ::color::category::lms_float   akin_type; };
    template< /* ::color::constant::lms::reference_enum reference_number */ >struct lms< ::color::category::cmyk_double  >{ typedef ::color::category::lms_double  akin_type; };
    template< /* ::color::constant::lms::reference_enum reference_number */ >struct lms< ::color::category::cmyk_ldouble >{ typedef ::color::category::lms_ldouble akin_type; };

   }
 }

#endif
