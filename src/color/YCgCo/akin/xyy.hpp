#ifndef color_YCgCo_akin_xyy
#define color_YCgCo_akin_xyy

#include "../../generic/akin/YCgCo.hpp"
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
     struct YCgCo< ::color::category::xyy< tag_name >  >
      {
       public:
         typedef ::color::category::YCgCo< tag_name > akin_type;
      };

   }
 }

#endif
