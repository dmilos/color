#ifndef color_xyy_akin_hwb
#define color_xyy_akin_hwb

#include "../../generic/akin/xyy.hpp"
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
     struct xyy< ::color::category::hwb< tag_name >  >
      {
       public:
         typedef ::color::category::xyy< tag_name > akin_type;
      };

   }
 }

#endif
