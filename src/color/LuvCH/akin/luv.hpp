#ifndef color_LuvCH_akin_luv
#define color_LuvCH_akin_luv

#include "../../generic/akin/LuvCH.hpp"
#include "../category.hpp"
#include "../../luv/category.hpp"

namespace color
 {
  namespace akin
   {

    template< typename tag_name >
     struct LuvCH< ::color::category::luv< tag_name >  >
      {
       public:
         typedef ::color::category::LuvCH< tag_name > akin_type;
      };

   }
 }

#endif
