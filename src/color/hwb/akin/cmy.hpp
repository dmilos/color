#ifndef color_hwb_akin_cmy
#define color_hwb_akin_cmy

#include "../../generic/akin/hwb.hpp"
#include "../category.hpp"
#include "../../cmy/category.hpp"

namespace color
 {
  namespace akin
   {

    template< typename tag_name >
     struct hwb< ::color::category::cmy< tag_name >  >
      {
       public:
         typedef ::color::category::hwb< tag_name > akin_type;
      };

   }
 }

#endif
