#ifndef color_YCgCo_akin_YCgCo
#define color_YCgCo_akin_YCgCo

#include "../../generic/akin/YCgCo.hpp"
#include "../category.hpp"
#include "../../YCgCo/category.hpp"

namespace color
 {
  namespace akin
   {

    template< typename tag_name >
     struct YCgCo< ::color::category::YCgCo< tag_name >  >
      {
       public:
         typedef ::color::category::YCgCo< tag_name > akin_type;
      };

   }
 }

#endif
