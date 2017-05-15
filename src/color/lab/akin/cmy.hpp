#ifndef color_lab_akin_cmy
#define color_lab_akin_cmy

#include "../../generic/akin/lab.hpp"
#include "../category.hpp"
#include "../../cmy/category.hpp"

namespace color
 {
  namespace akin
   {

    template< typename tag_name >
     struct lab< ::color::category::cmy< tag_name >  >
      {
       public:
         typedef ::color::category::lab< tag_name > akin_type;
      };

   }
 }

#endif
