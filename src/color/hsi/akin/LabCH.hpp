#ifndef color_hsi_akin_LabCH
#define color_hsi_akin_LabCH

#include "../../generic/akin/hsi.hpp"
#include "../category.hpp"
#include "../../LabCH/category.hpp"

namespace color
 {
  namespace akin
   {

    template
     <
       typename tag_name
     >
     struct hsi< ::color::category::LabCH< tag_name >  >
      {
       public:
         typedef ::color::category::hsi< tag_name > akin_type;
      };

   }
 }

#endif
