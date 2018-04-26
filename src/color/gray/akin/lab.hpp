#ifndef color_gray_akin_lab
#define color_gray_akin_lab

#include "../../generic/akin/gray.hpp"
#include "../category.hpp"
#include "../../lab/category.hpp"

namespace color
 {
  namespace akin
   {

    template
     <
       typename tag_name
      ,::color::constant::lab::reference_enum      lab_reference_number
     >
     struct gray< ::color::category::lab< tag_name, lab_reference_number > >
      {
       public:
         typedef ::color::category::gray< tag_name > akin_type;
      };

   }
 }

#endif
