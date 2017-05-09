#ifndef color_luv_akin_luv
#define color_luv_akin_luv

#include "../../generic/akin/luv.hpp"
#include "../category.hpp"
#include "../../luv/category.hpp"

namespace color
 {
  namespace akin
   {

    template< typename tag_name >
     struct luv< ::color::category::luv< tag_name >  >
      {
       public:
         typedef ::color::category::luv< tag_name > akin_type;
      };

   }
 }

#endif
