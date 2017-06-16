#ifndef color_LabCH_akin_YPbPr
#define color_LabCH_akin_YPbPr

#include "../../generic/akin/LabCH.hpp"
#include "../category.hpp"
#include "../../YPbPr/category.hpp"

namespace color
 {
  namespace akin
   {

    template< ::color::constant::YPbPr::reference_enum reference_number >struct LabCH< ::color::category::YPbPr_uint8  <reference_number> >{ typedef ::color::category::LabCH_uint8   akin_type; };
    template< ::color::constant::YPbPr::reference_enum reference_number >struct LabCH< ::color::category::YPbPr_uint16 <reference_number> >{ typedef ::color::category::LabCH_uint16  akin_type; };
    template< ::color::constant::YPbPr::reference_enum reference_number >struct LabCH< ::color::category::YPbPr_uint32 <reference_number> >{ typedef ::color::category::LabCH_uint32  akin_type; };
    template< ::color::constant::YPbPr::reference_enum reference_number >struct LabCH< ::color::category::YPbPr_uint64 <reference_number> >{ typedef ::color::category::LabCH_uint64  akin_type; };
    template< ::color::constant::YPbPr::reference_enum reference_number >struct LabCH< ::color::category::YPbPr_float  <reference_number> >{ typedef ::color::category::LabCH_float   akin_type; };
    template< ::color::constant::YPbPr::reference_enum reference_number >struct LabCH< ::color::category::YPbPr_double <reference_number> >{ typedef ::color::category::LabCH_double  akin_type; };
    template< ::color::constant::YPbPr::reference_enum reference_number >struct LabCH< ::color::category::YPbPr_ldouble<reference_number> >{ typedef ::color::category::LabCH_ldouble akin_type; };

   }
 }

#endif
