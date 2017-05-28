#ifndef color_YCgCo_akin_luv
#define color_YCgCo_akin_luv

#include "../../generic/akin/YCgCo.hpp"
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
     struct YCgCo< ::color::category::luv< tag_name >  >
      {
       public:
         typedef ::color::category::YCgCo< tag_name > akin_type;
      };

   }
 }

#endif
