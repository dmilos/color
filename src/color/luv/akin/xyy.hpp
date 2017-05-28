#ifndef color_luv_akin_xyy
#define color_luv_akin_xyy

#include "../../generic/akin/luv.hpp"
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
     struct luv< ::color::category::xyy< tag_name >  >
      {
       public:
         typedef ::color::category::luv< tag_name > akin_type;
      };

   }
 }

#endif
