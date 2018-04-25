#ifndef color_cmy_akin_LuvCH
#define color_cmy_akin_LuvCH

#include "../../generic/akin/cmy.hpp"
#include "../category.hpp"
#include "../../LuvCH/category.hpp"

namespace color
 {
  namespace akin
   {

    template< typename tag_name >
     struct cmy< ::color::category::LuvCH< tag_name >  >
      {
       public:
         typedef ::color::category::cmy< tag_name > akin_type;
      };

   }
 }

#endif
