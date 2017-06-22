#ifndef color_hsl_akin_LabCH
#define color_hsl_akin_LabCH

#include "../../generic/akin/hsl.hpp"
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
     struct hsl< ::color::category::LabCH< tag_name >  >
      {
       public:
         typedef ::color::category::hsl< tag_name > akin_type;
      };

   }
 }

#endif
