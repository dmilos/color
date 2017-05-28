#ifndef color_hsv_akin_luv
#define color_hsv_akin_luv

#include "../../generic/akin/hsv.hpp"
#include "../category.hpp"
#include "../../luv/category.hpp"

namespace color
 {
  namespace akin
   {

    template
     <
       typename tag_name


     >
     struct hsv< ::color::category::luv< tag_name >  >
      {
       public:
         typedef ::color::category::hsv< tag_name > akin_type;
      };

   }
 }

#endif
