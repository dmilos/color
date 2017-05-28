#ifndef color_hsl_akin_luv
#define color_hsl_akin_luv

#include "../../generic/akin/hsl.hpp"
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
     struct hsl< ::color::category::luv< tag_name >  >
      {
       public:
         typedef ::color::category::hsl< tag_name > akin_type;
      };

   }
 }

#endif
