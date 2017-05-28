#ifndef color_hsl_akin_xyy
#define color_hsl_akin_xyy

#include "../../generic/akin/hsl.hpp"
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
     struct hsl< ::color::category::xyy< tag_name >  >
      {
       public:
         typedef ::color::category::hsl< tag_name > akin_type;
      };

   }
 }

#endif
