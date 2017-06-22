#ifndef color_hwb_akin_LabCH
#define color_hwb_akin_LabCH

#include "../../generic/akin/hwb.hpp"
#include "../category.hpp"
#include "../../LabCH/category.hpp"

namespace color
 {
  namespace akin
   {

    template< typename tag_name >
     struct hwb< ::color::category::LabCH< tag_name >  >
      {
       public:
         typedef ::color::category::hwb< tag_name > akin_type;
      };

   }
 }

#endif
