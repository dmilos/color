#ifndef color_hsi_akin_xyy
#define color_hsi_akin_xyy

#include "../../generic/akin/hsi.hpp"
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
     struct hsi< ::color::category::xyy< tag_name >  >
      {
       public:
         typedef ::color::category::hsi< tag_name > akin_type;
      };

   }
 }

#endif
