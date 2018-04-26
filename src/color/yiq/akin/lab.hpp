#ifndef color_yiq_akin_lab
#define color_yiq_akin_lab

#include "../../generic/akin/yiq.hpp"
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
     struct yiq< ::color::category::lab< tag_name, lab_reference_number > >
      {
       public:
         typedef ::color::category::yiq< tag_name > akin_type;
      };

   }
 }

#endif
