#ifndef color_hwb_akin_luv
#define color_hwb_akin_luv

#include "../../generic/akin/hwb.hpp"
#include "../category.hpp"
#include "../../luv/category.hpp"

namespace color
 {
  namespace akin
   {

    template< typename tag_name >
     struct hwb< ::color::category::luv< tag_name >  >
      {
       public:
         typedef ::color::category::hwb< tag_name > akin_type;
      };

   }
 }

#endif
