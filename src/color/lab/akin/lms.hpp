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
      ,::color::constant::lms::reference_enum reference_number 

     >
     struct lab< ::color::category::lms< tag_name, reference_number >  >
      {
       public:
         typedef ::color::category::lab< tag_name > akin_type;
      };

   }
 }

#endif
