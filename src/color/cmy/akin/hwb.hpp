#ifndef color_cmy_akin_hwb
#define color_cmy_akin_hwb

#include "../../generic/akin/cmy.hpp"
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
     struct cmy< ::color::category::hwb< tag_name >  >
      {
       public:
         typedef ::color::category::cmy< tag_name > akin_type;
      };

   }
 }

#endif
