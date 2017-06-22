#ifndef color_yiq_akin_hwb
#define color_yiq_akin_hwb

#include "../../generic/akin/yiq.hpp"
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
     struct yiq< ::color::category::hwb< tag_name > >
      {
       public:
         typedef ::color::category::yiq< tag_name > akin_type;
      };

   }
 }

#endif
