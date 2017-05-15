#ifndef color_cmy_akin_lab
#define color_cmy_akin_lab

#include "../../generic/akin/cmy.hpp"
#include "../category.hpp"
#include "../../lab/category.hpp"

namespace color
 {
  namespace akin
   {

    template< typename tag_name >
     struct cmy< ::color::category::lab< tag_name >  >
      {
       public:
         typedef ::color::category::cmy< tag_name > akin_type;
      };

   }
 }

#endif
