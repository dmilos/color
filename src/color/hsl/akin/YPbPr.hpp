#ifndef color_hsl_akin_YPbPr
#define color_hsl_akin_YPbPr

#include "../../generic/akin/hsl.hpp"
#include "../category.hpp"
#include "../../YPbPr/category.hpp"

namespace color
 {
  namespace akin
   {

    template< ::color::constant::YPbPr::reference_enum reference_number >struct hsl< ::color::category::YPbPr_uint8  <reference_number> >{ typedef ::color::category::hsl_uint8   akin_type; };
    template< ::color::constant::YPbPr::reference_enum reference_number >struct hsl< ::color::category::YPbPr_uint16 <reference_number> >{ typedef ::color::category::hsl_uint16  akin_type; };
    template< ::color::constant::YPbPr::reference_enum reference_number >struct hsl< ::color::category::YPbPr_uint32 <reference_number> >{ typedef ::color::category::hsl_uint32  akin_type; };
    template< ::color::constant::YPbPr::reference_enum reference_number >struct hsl< ::color::category::YPbPr_uint64 <reference_number> >{ typedef ::color::category::hsl_uint64  akin_type; };
    template< ::color::constant::YPbPr::reference_enum reference_number >struct hsl< ::color::category::YPbPr_float  <reference_number> >{ typedef ::color::category::hsl_float   akin_type; };
    template< ::color::constant::YPbPr::reference_enum reference_number >struct hsl< ::color::category::YPbPr_double <reference_number> >{ typedef ::color::category::hsl_double  akin_type; };
    template< ::color::constant::YPbPr::reference_enum reference_number >struct hsl< ::color::category::YPbPr_ldouble<reference_number> >{ typedef ::color::category::hsl_ldouble akin_type; };

   }
 }

#endif
