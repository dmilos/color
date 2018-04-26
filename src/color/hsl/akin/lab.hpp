#ifndef color_hsl_akin_lab
#define color_hsl_akin_lab

#include "../../generic/akin/hsl.hpp"
#include "../category.hpp"
#include "../../lab/category.hpp"

namespace color
 {
  namespace akin
   {

    template
     <
       typename tag_name, ::color::constant::lab::reference_enum      lab_reference_number
     >
     struct hsl< ::color::category::lab< tag_name, lab_reference_number > >
      {
       public:
         typedef ::color::category::hsl< tag_name > akin_type;
      };

   }
 }

#endif
