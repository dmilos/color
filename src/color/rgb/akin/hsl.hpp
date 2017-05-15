#ifndef color_rgb_akin_hsl
#define color_rgb_akin_hsl

#include "../../generic/akin/rgb.hpp"
#include "../category.hpp"
#include "../../hsl/category.hpp"

namespace color
 {
  namespace akin
   {

    template
     <
       typename tag_name

     >
     struct rgb< ::color::category::hsl< tag_name > >
      {
       public:
         typedef ::color::category::rgb< tag_name > akin_type;
      };

   }
 }

#endif
