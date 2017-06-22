#ifndef color_LuvCH_akin_hwb
#define color_LuvCH_akin_hwb

#include "../../generic/akin/LuvCH.hpp"
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
     struct LuvCH< ::color::category::hwb< tag_name >  >
      {
       public:
         typedef ::color::category::LuvCH< tag_name > akin_type;
      };

   }
 }

#endif
