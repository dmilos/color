#ifndef color_cmyk_akin_cmyk
#define color_cmyk_akin_cmyk

#include "../../generic/akin/cmyk.hpp"
#include "../category.hpp"
#include "../../cmyk/category.hpp"

namespace color
 {
  namespace akin
   {

    template< typename tag_name >
     struct cmyk< ::color::category::cmyk< tag_name >  >
      {
       public:
         typedef ::color::category::cmyk< tag_name > akin_type;
      };

   }
 }

#endif
