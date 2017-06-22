#ifndef color_hwb_akin_hwb
#define color_hwb_akin_hwb

#include "../../generic/akin/hwb.hpp"
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
     struct hwb< ::color::category::hwb< tag_name >  >
      {
       public:
         typedef ::color::category::hwb< tag_name > akin_type;
      };

   }
 }

#endif
