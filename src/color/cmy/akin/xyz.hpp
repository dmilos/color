#ifndef color_cmy_akin_xyz
#define color_cmy_akin_xyz

#include "../../generic/akin/cmy.hpp"
#include "../category.hpp"
#include "../../xyz/category.hpp"

namespace color
 {
  namespace akin
   {

    template< typename tag_name >
     struct cmy< ::color::category::xyz< tag_name >  >
      {
       public:
         typedef ::color::category::cmy< tag_name > akin_type;
      };

   }
 }

#endif
