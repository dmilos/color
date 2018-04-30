#ifndef color_lab_akin_rgb
#define color_lab_akin_rgb

#include "../../generic/akin/lab.hpp"
#include "../category.hpp"
#include "../../rgb/category.hpp"

namespace color
 {
  namespace akin
   {

    template
     <
       typename tag_name , typename  ::color::constant::lab::reference_enum      lab_reference_number

     >
     struct lab< ::color::category::rgb< tag_name >, lab_reference_number  >
      {
       public:
         typedef ::color::category::lab< tag_name, lab_reference_number > akin_type;
      };
   }
 }

#endif
