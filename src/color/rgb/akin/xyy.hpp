#ifndef color_rgb_akin_xyy
#define color_rgb_akin_xyy

#include "../../generic/akin/rgb.hpp"
#include "../category.hpp"
#include "../../xyy/category.hpp"

namespace color
 {
  namespace akin
   {

    template
     <
       typename tag_name

     >
     struct rgb< ::color::category::xyy< tag_name > >
      {
       public:
         typedef ::color::category::rgb< tag_name > akin_type;
      };

   }
 }

#endif
