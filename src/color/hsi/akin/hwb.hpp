#ifndef color_hsi_akin_hwb
#define color_hsi_akin_hwb

#include "../../generic/akin/hsi.hpp"
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
     struct hsi< ::color::category::hwb< tag_name >  >
      {
       public:
         typedef ::color::category::hsi< tag_name > akin_type;
      };

   }
 }

#endif
