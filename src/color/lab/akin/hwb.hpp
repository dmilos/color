#ifndef color_lab_akin_hwb
#define color_lab_akin_hwb

#include "../../generic/akin/lab.hpp"
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
     struct lab< ::color::category::hwb< tag_name >  >
      {
       public:
         typedef ::color::category::lab< tag_name > akin_type;
      };

   }
 }

#endif
