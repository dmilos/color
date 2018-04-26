#ifndef color_akin_lab
#define color_akin_lab

// ::color::akin::lab< non_lab_category >::akin_type;
#include "../../lab/constant/reference.hpp"

namespace color
 {
  namespace akin
   {

    template
     <
       typename category_name
      ,::color::constant::lab::reference_enum        lab_reference_number
     >
     struct lab
      {
       typedef category_name category_type;
       typedef void akin_type;
      };

   }
 }

#endif
