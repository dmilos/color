#ifndef color_YPbPr_akin_lms
#define color_YPbPr_akin_lms

#include "../../generic/akin/YPbPr.hpp"
#include "../category.hpp"
#include "../../lms/category.hpp"

namespace color
 {
  namespace akin
   {

    template
     <
       typename tag_name
      ,::color::constant::YPbPr::reference_enum    YPbPr_reference_number
      ,::color::constant::lms::reference_enum    lms_reference_number 
     >
     struct YPbPr< ::color::category::lms< tag_name, lms_reference_number >, YPbPr_reference_number  >
      {
       public:
         typedef ::color::category::YPbPr< tag_name, YPbPr_reference_number > akin_type;
      };

   }
 }

#endif
