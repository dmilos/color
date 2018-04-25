#ifndef color_LuvCH_akin_LabCH
#define color_LuvCH_akin_LabCH

#include "../../generic/akin/LuvCH.hpp"
#include "../category.hpp"
#include "../../LabCH/category.hpp"

namespace color
 {
  namespace akin
   {

    template< typename tag_name >
     struct LuvCH< ::color::category::LabCH< tag_name >  >
      {
       public:
         typedef ::color::category::LuvCH< tag_name > akin_type;
      };

   }
 }

#endif
