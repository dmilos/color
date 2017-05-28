#ifndef color_yiq_akin_xyz
#define color_yiq_akin_xyz

#include "../../generic/akin/yiq.hpp"
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
     struct yiq< ::color::category::xyz< tag_name >  >
      {
       public:
         typedef ::color::category::yiq< tag_name > akin_type;
      };

   }
 }

#endif
