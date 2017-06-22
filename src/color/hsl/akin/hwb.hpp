#ifndef color_hsl_akin_hwb
#define color_hsl_akin_hwb

#include "../../generic/akin/hsl.hpp"
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
     struct hsl< ::color::category::hwb< tag_name >  >
      {
       public:
         typedef ::color::category::hsl< tag_name > akin_type;
      };

   }
 }

#endif
