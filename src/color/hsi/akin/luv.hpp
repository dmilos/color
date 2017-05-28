#ifndef color_hsi_akin_luv
#define color_hsi_akin_luv

#include "../../generic/akin/hsi.hpp"
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
     struct hsi< ::color::category::luv< tag_name >  >
      {
       public:
         typedef ::color::category::hsi< tag_name > akin_type;
      };

   }
 }

#endif
