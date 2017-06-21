#ifndef color_LabCH_akin_LuvCH
#define color_LabCH_akin_LuvCH

#include "../../generic/akin/LabCH.hpp"
#include "../category.hpp"
#include "../../LuvCH/category.hpp"

namespace color
 {
  namespace akin
   {

    template< typename tag_name >
     struct LabCH< ::color::category::LuvCH< tag_name >  >
      {
       public:
         typedef ::color::category::LabCH< tag_name > akin_type;
      };

   }
 }

#endif
