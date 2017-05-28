#ifndef color_hsv_akin_xyy
#define color_hsv_akin_xyy

#include "../../generic/akin/hsv.hpp"
#include "../category.hpp"
#include "../../xyy/category.hpp"

namespace color
 {
  namespace akin
   {

    template
     <
       typename tag_name


     >
     struct hsv< ::color::category::xyy< tag_name >  >
      {
       public:
         typedef ::color::category::hsv< tag_name > akin_type;
      };

   }
 }

#endif
