#ifndef color_cmyk_akin_LuvCH
#define color_cmyk_akin_LuvCH

#include "../../generic/akin/cmyk.hpp"
#include "../category.hpp"
#include "../../LuvCH/category.hpp"

namespace color
 {
  namespace akin
   {

    template< typename tag_name >
     struct cmyk< ::color::category::LuvCH< tag_name >  >
      {
       public:
         typedef ::color::category::cmyk< tag_name > akin_type;
      };

   }
 }

#endif
