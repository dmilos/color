#ifndef color_rgb_akin_lms
#define color_rgb_akin_lms

#include "../../generic/akin/rgb.hpp"
#include "../category.hpp"
#include "../../lms/category.hpp"

namespace color
 {
  namespace akin
   {

    template< ::color::constant::lms::reference_enum reference_number >struct rgb< ::color::category::lms_uint8  < reference_number > >{ typedef ::color::category::rgb_uint8   akin_type; };
    template< ::color::constant::lms::reference_enum reference_number >struct rgb< ::color::category::lms_uint16 < reference_number > >{ typedef ::color::category::rgb_uint16  akin_type; };
    template< ::color::constant::lms::reference_enum reference_number >struct rgb< ::color::category::lms_uint32 < reference_number > >{ typedef ::color::category::rgb_uint32  akin_type; };
    template< ::color::constant::lms::reference_enum reference_number >struct rgb< ::color::category::lms_uint64 < reference_number > >{ typedef ::color::category::rgb_uint64  akin_type; };
    template< ::color::constant::lms::reference_enum reference_number >struct rgb< ::color::category::lms_float  < reference_number > >{ typedef ::color::category::rgb_float   akin_type; };
    template< ::color::constant::lms::reference_enum reference_number >struct rgb< ::color::category::lms_double < reference_number > >{ typedef ::color::category::rgb_double  akin_type; };
    template< ::color::constant::lms::reference_enum reference_number >struct rgb< ::color::category::lms_ldouble< reference_number > >{ typedef ::color::category::rgb_ldouble akin_type; };

   }
 }

#endif



