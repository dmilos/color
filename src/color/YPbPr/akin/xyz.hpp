#ifndef color_YPbPr_akin_xyz
#define color_YPbPr_akin_xyz

#include "../../generic/akin/YPbPr.hpp"
#include "../category.hpp"
#include "../../xyz/category.hpp"

namespace color
 {
  namespace akin
   {

    template< ::color::constant::YPbPr::reference_enum reference_number >struct YPbPr< ::color::category::xyz_uint8  , reference_number >{ typedef ::color::category::YPbPr_uint8  <reference_number> akin_type; };
    template< ::color::constant::YPbPr::reference_enum reference_number >struct YPbPr< ::color::category::xyz_uint16 , reference_number >{ typedef ::color::category::YPbPr_uint16 <reference_number> akin_type; };
    template< ::color::constant::YPbPr::reference_enum reference_number >struct YPbPr< ::color::category::xyz_uint32 , reference_number >{ typedef ::color::category::YPbPr_uint32 <reference_number> akin_type; };
    template< ::color::constant::YPbPr::reference_enum reference_number >struct YPbPr< ::color::category::xyz_uint64 , reference_number >{ typedef ::color::category::YPbPr_uint64 <reference_number> akin_type; };
    template< ::color::constant::YPbPr::reference_enum reference_number >struct YPbPr< ::color::category::xyz_float  , reference_number >{ typedef ::color::category::YPbPr_float  <reference_number> akin_type; };
    template< ::color::constant::YPbPr::reference_enum reference_number >struct YPbPr< ::color::category::xyz_double , reference_number >{ typedef ::color::category::YPbPr_double <reference_number> akin_type; };
    template< ::color::constant::YPbPr::reference_enum reference_number >struct YPbPr< ::color::category::xyz_ldouble, reference_number >{ typedef ::color::category::YPbPr_ldouble<reference_number> akin_type; };

   }
 }

#endif
