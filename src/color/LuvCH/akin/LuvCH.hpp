#ifndef color_LuvCH_akin_LuvCH
#define color_LuvCH_akin_LuvCH

#include "../../generic/akin/LuvCH.hpp"
#include "../category.hpp"
#include "../../LuvCH/category.hpp"

namespace color
 {
  namespace akin
   {

    template< typename tag_name >
     struct LuvCH< ::color::category::LuvCH< tag_name >  >
      {
       public:
         typedef ::color::category::LuvCH< tag_name > akin_type;
      };

   }
 }

#endif
