#ifndef color_akin_YPbPr
#define color_akin_YPbPr

// ::color::akin::YPbPr< non_YPbPr_category >::akin_type;
#include "../../YPbPr/constant/reference.hpp"

namespace color
 {
  namespace akin
   {

    template< typename category_name, ::color::constant::YPbPr::reference_enum reference_number >
     struct YPbPr
      {
       typedef category_name category_type;
       typedef void              akin_type;
      };

   }
 }

#endif
