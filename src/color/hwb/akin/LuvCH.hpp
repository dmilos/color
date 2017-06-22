#ifndef color_hwb_akin_LuvCH
#define color_hwb_akin_LuvCH

#include "../../generic/akin/hwb.hpp"
#include "../category.hpp"
#include "../../LuvCH/category.hpp"

namespace color
 {
  namespace akin
   {

    template< typename tag_name >
     struct hwb< ::color::category::LuvCH< tag_name >  >
      {
       public:
         typedef ::color::category::hwb< tag_name > akin_type;
      };

   }
 }

#endif
