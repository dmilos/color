#ifndef color_lab_akin_gray
#define color_lab_akin_gray

#include "../../generic/akin/lab.hpp"
#include "../category.hpp"
#include "../../gray/category.hpp"

#include "../../lab/constant/reference.hpp"

namespace color
 {
  namespace akin
   {

    template
     <
       typename tag_name
      ,::color::constant::lab::reference_enum reference_number

     >
     struct lab< ::color::category::gray< tag_name >, reference_number >
      {
       public:
         typedef ::color::category::lab< tag_name, reference_number > akin_type;
      };

   }
 }

#endif

