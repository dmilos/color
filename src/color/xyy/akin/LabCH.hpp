#ifndef color_xyy_akin_LabCH
#define color_xyy_akin_LabCH

#include "../../generic/akin/xyy.hpp"
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
     struct xyy< ::color::category::LabCH< tag_name >  >
      {
       public:
         typedef ::color::category::xyy< tag_name > akin_type;
      };

   }
 }

#endif
