#ifndef color_lms_akin_lab
#define color_lms_akin_lab

#include "../../generic/akin/lms.hpp"
#include "../category.hpp"
#include "../../lab/category.hpp"

namespace color
 {
  namespace akin
   {

    template
     <
       typename tag_name
      ,::color::constant::lms::reference_enum        lms_reference_number
      ,::color::constant::lab::reference_enum        lab_reference_number
     >
     struct lms< ::color::category::lab< tag_name, lab_reference_number >, lms_reference_number  >
      {
       public:
         typedef ::color::category::lms< tag_name, lms_reference_number > akin_type;
      };

   }
 }

#endif
