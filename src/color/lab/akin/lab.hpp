#ifndef color_lab_akin_lab
#define color_lab_akin_lab

#include "../../generic/akin/lab.hpp"
#include "../category.hpp"
#include "../../lab/category.hpp"

namespace color
 {
  namespace akin
   {

    template
     <
       typename tag_name 
      ,::color::constant::lab::reference_enum left_reference_number
      ,::color::constant::lab::reference_enum right_reference_number
     >
     struct lab< ::color::category::lab< tag_name, right_reference_number >,  left_reference_number >
      {
       public:
         typedef ::color::category::lab< tag_name, left_reference_number > akin_type;
      };

   }
 }

#endif
