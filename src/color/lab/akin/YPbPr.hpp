#ifndef color_lab_akin_YPbPr
#define color_lab_akin_YPbPr

#include "../../generic/akin/lab.hpp"
#include "../category.hpp"
#include "../../YPbPr/category.hpp"

namespace color
 {
  namespace akin
   {

    template
     <
       typename tag_name
      ,::color::constant::lab::reference_enum     lab_reference_number
      ,::color::constant::YPbPr::reference_enum YPbPr_reference_number
     >
     struct lab< ::color::category::YPbPr< tag_name, YPbPr_reference_number >, lab_reference_number >
      {
       public:
         typedef ::color::category::lab< tag_name, lab_reference_number > akin_type;
      };

   }
 }

#endif
