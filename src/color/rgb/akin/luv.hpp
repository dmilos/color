#ifndef color_rgb_akin_luv
#define color_rgb_akin_luv

#include "../../generic/akin/rgb.hpp"
#include "../category.hpp"
#include "../../luv/category.hpp"

namespace color
 {
  namespace akin
   {

    template
     <
       typename tag_name

     >
     struct rgb< ::color::category::luv< tag_name > >
      {
       public:
         typedef ::color::category::rgb< tag_name > akin_type;
      };

   }
 }

#endif
