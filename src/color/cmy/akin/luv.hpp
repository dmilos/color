#ifndef color_cmy_akin_luv
#define color_cmy_akin_luv

#include "../../generic/akin/cmy.hpp"
#include "../category.hpp"
#include "../../luv/category.hpp"

namespace color
 {
  namespace akin
   {

    template< typename tag_name >
     struct cmy< ::color::category::luv< tag_name >  >
      {
       public:
         typedef ::color::category::cmy< tag_name > akin_type;
      };

   }
 }

#endif
