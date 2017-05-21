#ifndef color_lms_akin_YPbPr
#define color_lms_akin_YPbPr

#include "../../generic/akin/lms.hpp"
#include "../category.hpp"
#include "../../YPbPr/category.hpp"

namespace color
 {
  namespace akin
   {

    template
     <
       typename tag_name
      ,::color::constant::lms::reference_enum        lms_reference_number
      ,::color::constant::YPbPr::reference_enum    YPbPr_reference_number 
     >
     struct lms< ::color::category::YPbPr< tag_name, YPbPr_reference_number >, lms_reference_number  >
      {
       public:
         typedef ::color::category::lms< tag_name, lms_reference_number > akin_type;
      };

   }
 }

#endif
