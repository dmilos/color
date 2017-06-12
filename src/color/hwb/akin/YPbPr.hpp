#ifndef color_hwb_akin_YPbPr
#define color_hwb_akin_YPbPr

#include "../../generic/akin/hwb.hpp"
#include "../category.hpp"
#include "../../YPbPr/category.hpp"

namespace color
 {
  namespace akin
   {

    template< ::color::constant::YPbPr::reference_enum reference_number >struct hwb< ::color::category::YPbPr_uint8  <reference_number> >{ typedef ::color::category::hwb_uint8   akin_type; };
    template< ::color::constant::YPbPr::reference_enum reference_number >struct hwb< ::color::category::YPbPr_uint16 <reference_number> >{ typedef ::color::category::hwb_uint16  akin_type; };
    template< ::color::constant::YPbPr::reference_enum reference_number >struct hwb< ::color::category::YPbPr_uint32 <reference_number> >{ typedef ::color::category::hwb_uint32  akin_type; };
    template< ::color::constant::YPbPr::reference_enum reference_number >struct hwb< ::color::category::YPbPr_uint64 <reference_number> >{ typedef ::color::category::hwb_uint64  akin_type; };
    template< ::color::constant::YPbPr::reference_enum reference_number >struct hwb< ::color::category::YPbPr_float  <reference_number> >{ typedef ::color::category::hwb_float   akin_type; };
    template< ::color::constant::YPbPr::reference_enum reference_number >struct hwb< ::color::category::YPbPr_double <reference_number> >{ typedef ::color::category::hwb_double  akin_type; };
    template< ::color::constant::YPbPr::reference_enum reference_number >struct hwb< ::color::category::YPbPr_ldouble<reference_number> >{ typedef ::color::category::hwb_ldouble akin_type; };

   }
 }

#endif
