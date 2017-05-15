#ifndef color_cmy_akin_xyy
#define color_cmy_akin_xyy

#include "../../generic/akin/cmy.hpp"
#include "../category.hpp"
#include "../../xyy/category.hpp"

namespace color
 {
  namespace akin
   {

    template< typename tag_name >
     struct cmy< ::color::category::xyy< tag_name >  >
      {
       public:
         typedef ::color::category::cmy< tag_name > akin_type;
      };

   }
 }

#endif
