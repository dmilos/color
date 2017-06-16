#ifndef color_LuvCH_akin_cmy
#define color_LuvCH_akin_cmy

#include "../../generic/akin/LuvCH.hpp"
#include "../category.hpp"
#include "../../cmy/category.hpp"

namespace color
 {
  namespace akin
   {

    template< typename tag_name >
     struct LuvCH< ::color::category::cmy< tag_name >  >
      {
       public:
         typedef ::color::category::LuvCH< tag_name > akin_type;
      };

   }
 }

#endif
