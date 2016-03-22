#ifndef color_rgb_akin_rgb
#define color_rgb_akin_rgb

#include "../../generic/akin/rgb.hpp"
#include "../category.hpp"
#include "../../rgb/category.hpp"

namespace color
 {
  namespace akin
   {

    template< typename tag_name >
     struct rgb< ::color::category::rgb< tag_name >  >
      {
       public:
         typedef ::color::category::rgb< tag_name > akin_type;
      };

   }
 }

#endif
