#ifndef color_lab_akin_hsl
#define color_lab_akin_hsl

#include "../../generic/akin/lab.hpp"
#include "../category.hpp"
#include "../../hsl/category.hpp"

namespace color
 {
  namespace akin
   {

    template
     <
       typename tag_name
      ,::color::constant::lab::reference_enum reference_number

     >
     struct lab< ::color::category::hsl< tag_name >, reference_number >
      {
       public:
         typedef ::color::category::lab< tag_name, reference_number > akin_type;
      };

   }
 }

#endif
