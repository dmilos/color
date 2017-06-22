#ifndef color_luv_akin_hwb
#define color_luv_akin_hwb

#include "../../generic/akin/luv.hpp"
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
     struct luv< ::color::category::hwb< tag_name > >
      {
       public:
         typedef ::color::category::luv< tag_name > akin_type;
      };

   }
 }

#endif
