#ifndef color_rgb_akin_cmy
#define color_rgb_akin_cmy

#include "../../generic/akin/rgb.hpp"
#include "../category.hpp"
#include "../../cmy/category.hpp"

namespace color
 {
  namespace akin
   {

    template
     <
       typename tag_name

     >
     struct rgb< ::color::category::cmy< tag_name > >
      {
       public:
         typedef ::color::category::rgb< tag_name > akin_type;
      };

   }
 }

#endif
