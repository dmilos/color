#ifndef color_hsv_akin_LabCH
#define color_hsv_akin_LabCH

#include "../../generic/akin/hsv.hpp"
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
     struct hsv< ::color::category::LabCH< tag_name >  >
      {
       public:
         typedef ::color::category::hsv< tag_name > akin_type;
      };

   }
 }

#endif
