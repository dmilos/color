#ifndef color_tsl_akin_lms
#define color_tsl_akin_lms

#include "../../generic/akin/tsl.hpp"
#include "../category.hpp"
#include "../../lms/category.hpp"

namespace color
 {
  namespace akin
   {

    template< ::color::constant::lms::reference_enum reference_number >struct tsl< ::color::category::lms_uint8  < reference_number > >{ typedef ::color::category::tsl_uint8   akin_type; };
    template< ::color::constant::lms::reference_enum reference_number >struct tsl< ::color::category::lms_uint16 < reference_number > >{ typedef ::color::category::tsl_uint16  akin_type; };
    template< ::color::constant::lms::reference_enum reference_number >struct tsl< ::color::category::lms_uint32 < reference_number > >{ typedef ::color::category::tsl_uint32  akin_type; };
    template< ::color::constant::lms::reference_enum reference_number >struct tsl< ::color::category::lms_uint64 < reference_number > >{ typedef ::color::category::tsl_uint64  akin_type; };
    template< ::color::constant::lms::reference_enum reference_number >struct tsl< ::color::category::lms_float  < reference_number > >{ typedef ::color::category::tsl_float   akin_type; };
    template< ::color::constant::lms::reference_enum reference_number >struct tsl< ::color::category::lms_double < reference_number > >{ typedef ::color::category::tsl_double  akin_type; };
    template< ::color::constant::lms::reference_enum reference_number >struct tsl< ::color::category::lms_ldouble< reference_number > >{ typedef ::color::category::tsl_ldouble akin_type; };

   }
 }

#endif



