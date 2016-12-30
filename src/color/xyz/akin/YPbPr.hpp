#ifndef color_xyz_akin_YPbPr
#define color_xyz_akin_YPbPr

#include "../../generic/akin/xyz.hpp"
#include "../category.hpp"
#include "../../YPbPr/category.hpp"

namespace color
 {
  namespace akin
   {

    template< ::color::constant::YPbPr::reference_enum reference_number >struct xyz< ::color::category::YPbPr_uint8  <reference_number> >{ typedef ::color::category::xyz_uint8   akin_type; };
    template< ::color::constant::YPbPr::reference_enum reference_number >struct xyz< ::color::category::YPbPr_uint16 <reference_number> >{ typedef ::color::category::xyz_uint16  akin_type; };
    template< ::color::constant::YPbPr::reference_enum reference_number >struct xyz< ::color::category::YPbPr_uint32 <reference_number> >{ typedef ::color::category::xyz_uint32  akin_type; };
    template< ::color::constant::YPbPr::reference_enum reference_number >struct xyz< ::color::category::YPbPr_uint64 <reference_number> >{ typedef ::color::category::xyz_uint64  akin_type; };
    template< ::color::constant::YPbPr::reference_enum reference_number >struct xyz< ::color::category::YPbPr_float  <reference_number> >{ typedef ::color::category::xyz_float   akin_type; };
    template< ::color::constant::YPbPr::reference_enum reference_number >struct xyz< ::color::category::YPbPr_double <reference_number> >{ typedef ::color::category::xyz_double  akin_type; };
    template< ::color::constant::YPbPr::reference_enum reference_number >struct xyz< ::color::category::YPbPr_ldouble<reference_number> >{ typedef ::color::category::xyz_ldouble akin_type; };

   }
 }

#endif
