#ifndef color_lab_akin_lms
#define color_lab_akin_lms

#include "../../generic/akin/lab.hpp"
#include "../category.hpp"
#include "../../lms/category.hpp"

namespace color
 {
  namespace akin
   {

    template
     <
       typename tag_name
      ,::color::constant::lab::reference_enum lab_reference_number
      ,::color::constant::lms::reference_enum lms_reference_number
     >
     struct lab< ::color::category::lms< tag_name, lms_reference_number >, lab_reference_number >
      {
       public:
         typedef ::color::category::lab< tag_name, lab_reference_number > akin_type;
      };

   }
 }

#endif
