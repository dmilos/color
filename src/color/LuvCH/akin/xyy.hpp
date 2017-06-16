#ifndef color_LuvCH_akin_xyy
#define color_LuvCH_akin_xyy

#include "../../generic/akin/LuvCH.hpp"
#include "../category.hpp"
#include "../../xyy/category.hpp"

namespace color
 {
  namespace akin
   {

    template< typename tag_name >
     struct LuvCH< ::color::category::xyy< tag_name >  >
      {
       public:
         typedef ::color::category::LuvCH< tag_name > akin_type;
      };

   }
 }

#endif
