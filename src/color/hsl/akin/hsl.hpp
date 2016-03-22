#ifndef color_hsl_akin_hsl
#define color_hsl_akin_hsl

#include "../../generic/akin/hsl.hpp"
#include "../category.hpp"
#include "../../hsl/category.hpp"

namespace color
 {
  namespace akin
   {

    template< typename tag_name >
     struct hsl< ::color::category::hsl< tag_name >  >
      {
       public:
         typedef ::color::category::hsl< tag_name > akin_type;
      };

   }
 }

#endif
