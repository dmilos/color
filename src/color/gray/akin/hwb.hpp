#ifndef color_gray_akin_hwb
#define color_gray_akin_hwb

#include "../../generic/akin/gray.hpp"
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
     struct gray< ::color::category::hwb< tag_name > >
      {
       public:
         typedef ::color::category::gray< tag_name > akin_type;
      };

   }
 }

#endif
