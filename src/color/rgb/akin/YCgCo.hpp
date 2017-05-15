#ifndef color_rgb_akin_YCgCo
#define color_rgb_akin_YCgCo

#include "../../generic/akin/rgb.hpp"
#include "../category.hpp"
#include "../../YCgCo/category.hpp"

namespace color
 {
  namespace akin
   {

    template
     <
       typename tag_name

     >
     struct rgb< ::color::category::YCgCo< tag_name > >
      {
       public:
         typedef ::color::category::rgb< tag_name > akin_type;
      };

   }
 }

#endif
