#ifndef color_rgb_akin_xyz
#define color_rgb_akin_xyz

#include "../../generic/akin/rgb.hpp"
#include "../category.hpp"
#include "../../xyz/category.hpp"

namespace color
 {
  namespace akin
   {

    template
     <
       typename tag_name

     >
     struct rgb< ::color::category::xyz< tag_name > >
      {
       public:
         typedef ::color::category::rgb< tag_name > akin_type;
      };

   }
 }

#endif
