#ifndef color_hsv_akin_hwb
#define color_hsv_akin_hwb

#include "../../generic/akin/hsv.hpp"
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
     struct hsv< ::color::category::hwb< tag_name >  >
      {
       public:
         typedef ::color::category::hsv< tag_name > akin_type;
      };

   }
 }

#endif
