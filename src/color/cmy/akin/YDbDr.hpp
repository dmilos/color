#ifndef color_cmy_akin_YDbDr
#define color_cmy_akin_YDbDr

#include "../../generic/akin/cmy.hpp"
#include "../category.hpp"
#include "../../YDbDr/category.hpp"

namespace color
 {
  namespace akin
   {

    template< typename tag_name >
     struct cmy< ::color::category::YDbDr< tag_name >  >
      {
       public:
         typedef ::color::category::cmy< tag_name > akin_type;
      };

   }
 }

#endif
