#ifndef color_lms_akin_rgb
#define color_lms_akin_rgb

#include "../../generic/akin/lms.hpp"
#include "../category.hpp"
#include "../../rgb/category.hpp"

namespace color
 {
  namespace akin
   {

    template< ::color::constant::lms::reference_enum reference_number >struct lms< ::color::category::rgb_uint8  , reference_number >{ typedef ::color::category::lms_uint8  <reference_number> akin_type; };
    template< ::color::constant::lms::reference_enum reference_number >struct lms< ::color::category::rgb_uint16 , reference_number >{ typedef ::color::category::lms_uint16 <reference_number> akin_type; };
    template< ::color::constant::lms::reference_enum reference_number >struct lms< ::color::category::rgb_uint32 , reference_number >{ typedef ::color::category::lms_uint32 <reference_number> akin_type; };
    template< ::color::constant::lms::reference_enum reference_number >struct lms< ::color::category::rgb_uint64 , reference_number >{ typedef ::color::category::lms_uint64 <reference_number> akin_type; };
    template< ::color::constant::lms::reference_enum reference_number >struct lms< ::color::category::rgb_float  , reference_number >{ typedef ::color::category::lms_float  <reference_number> akin_type; };
    template< ::color::constant::lms::reference_enum reference_number >struct lms< ::color::category::rgb_double , reference_number >{ typedef ::color::category::lms_double <reference_number> akin_type; };
    template< ::color::constant::lms::reference_enum reference_number >struct lms< ::color::category::rgb_ldouble, reference_number >{ typedef ::color::category::lms_ldouble<reference_number> akin_type; };

   }
 }

#endif
