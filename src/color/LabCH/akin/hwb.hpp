#ifndef color_LabCH_akin_hwb
#define color_LabCH_akin_hwb

#include "../../generic/akin/LabCH.hpp"
#include "../category.hpp"
#include "../../hwb/category.hpp"

namespace color
 {
  namespace akin
   {

    template
     < 
      typename tag_name 

     >
     struct LabCH< ::color::category::hwb< tag_name >  >
      {
       public:
         typedef ::color::category::LabCH< tag_name > akin_type;
      };

   }
 }

#endif
