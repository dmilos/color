#ifndef color_cmy_akin_YCgCo
#define color_cmy_akin_YCgCo

#include "../../generic/akin/cmy.hpp"
#include "../category.hpp"
#include "../../YCgCo/category.hpp"

namespace color
 {
  namespace akin
   {

    template< typename tag_name >
     struct cmy< ::color::category::YCgCo< tag_name >  >
      {
       public:
         typedef ::color::category::cmy< tag_name > akin_type;
      };

   }
 }

#endif
