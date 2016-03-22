#ifndef color_hsv_akin_hsv
#define color_hsv_akin_hsv

#include "../../generic/akin/hsv.hpp"
#include "../category.hpp"
#include "../../hsv/category.hpp"

namespace color
 {
  namespace akin
   {

    template< typename tag_name >
     struct hsv< ::color::category::hsv< tag_name >  >
      {
       public:
         typedef ::color::category::hsv< tag_name > akin_type;
      };

   }
 }

#endif
