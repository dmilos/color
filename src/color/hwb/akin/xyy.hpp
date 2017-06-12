#ifndef color_hwb_akin_xyy
#define color_hwb_akin_xyy

#include "../../generic/akin/hwb.hpp"
#include "../category.hpp"
#include "../../xyy/category.hpp"

namespace color
 {
  namespace akin
   {

    template< typename tag_name >
     struct hwb< ::color::category::xyy< tag_name >  >
      {
       public:
         typedef ::color::category::hwb< tag_name > akin_type;
      };

   }
 }

#endif
