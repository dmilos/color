#ifndef color_YCgCo_akin_hwb
#define color_YCgCo_akin_hwb

#include "../../generic/akin/YCgCo.hpp"
#include "../category.hpp"
#include "../../hwb/category.hpp"

namespace color
 {
  namespace akin
   {

    template
     <
       typename tag_name

     >
     struct YCgCo< ::color::category::hwb< tag_name > >
      {
       public:
         typedef ::color::category::YCgCo< tag_name > akin_type;
      };

   }
 }

#endif
