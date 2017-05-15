#ifndef color_rgb_akin_hsi
#define color_rgb_akin_hsi

#include "../../generic/akin/rgb.hpp"
#include "../category.hpp"
#include "../../hsi/category.hpp"

namespace color
 {
  namespace akin
   {

    template
     <
       typename tag_name

     >
     struct rgb< ::color::category::hsi< tag_name > >
      {
       public:
         typedef ::color::category::rgb< tag_name > akin_type;
      };

   }
 }

#endif
