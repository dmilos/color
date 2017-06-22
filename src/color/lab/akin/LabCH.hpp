#ifndef color_lab_akin_LabCH
#define color_lab_akin_LabCH

#include "../../generic/akin/lab.hpp"
#include "../category.hpp"
#include "../../LabCH/category.hpp"

namespace color
 {
  namespace akin
   {

    template
     <
       typename tag_name
     >
     struct lab< ::color::category::LabCH< tag_name >  >
      {
       public:
         typedef ::color::category::lab< tag_name > akin_type;
      };

   }
 }

#endif
