#ifndef color_rgb_akin_lab
#define color_rgb_akin_lab

#include "../../generic/akin/rgb.hpp"
#include "../category.hpp"
#include "../../lab/category.hpp"

namespace color
 {
  namespace akin
   {

    template
     <
       typename tag_name

     >
     struct rgb< ::color::category::lab< tag_name > >
      {
       public:
         typedef ::color::category::rgb< tag_name > akin_type;
      };

   }
 }

#endif
