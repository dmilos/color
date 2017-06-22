#ifndef color_YPbPr_akin_hwb
#define color_YPbPr_akin_hwb

#include "../../generic/akin/YPbPr.hpp"
#include "../category.hpp"
#include "../../hwb/category.hpp"

namespace color
 {
  namespace akin
   {

    template< ::color::constant::YPbPr::reference_enum reference_number >struct YPbPr< ::color::category::hwb_uint8  , reference_number >{ typedef ::color::category::YPbPr_uint8  < reference_number> akin_type; };
    template< ::color::constant::YPbPr::reference_enum reference_number >struct YPbPr< ::color::category::hwb_uint16 , reference_number >{ typedef ::color::category::YPbPr_uint16 < reference_number> akin_type; };
    template< ::color::constant::YPbPr::reference_enum reference_number >struct YPbPr< ::color::category::hwb_uint32 , reference_number >{ typedef ::color::category::YPbPr_uint32 < reference_number> akin_type; };
    template< ::color::constant::YPbPr::reference_enum reference_number >struct YPbPr< ::color::category::hwb_uint64 , reference_number >{ typedef ::color::category::YPbPr_uint64 < reference_number> akin_type; };
    template< ::color::constant::YPbPr::reference_enum reference_number >struct YPbPr< ::color::category::hwb_float  , reference_number >{ typedef ::color::category::YPbPr_float  < reference_number> akin_type; };
    template< ::color::constant::YPbPr::reference_enum reference_number >struct YPbPr< ::color::category::hwb_double , reference_number >{ typedef ::color::category::YPbPr_double < reference_number> akin_type; };
    template< ::color::constant::YPbPr::reference_enum reference_number >struct YPbPr< ::color::category::hwb_ldouble, reference_number >{ typedef ::color::category::YPbPr_ldouble< reference_number> akin_type; };

   }
 }

#endif
