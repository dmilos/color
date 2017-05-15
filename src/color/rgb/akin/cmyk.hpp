#ifndef color_rgb_akin_cmyk
#define color_rgb_akin_cmyk

#include "../../generic/akin/rgb.hpp"
#include "../category.hpp"
#include "../../cmyk/category.hpp"

namespace color
 {
  namespace akin
   {

    template
     <
       typename tag_name

     >
     struct rgb< ::color::category::cmyk< tag_name > >
      {
       public:
         typedef ::color::category::rgb< tag_name > akin_type;
      };

   }
 }

#endif
