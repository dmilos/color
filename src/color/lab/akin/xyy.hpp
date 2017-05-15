#ifndef color_lab_akin_xyy
#define color_lab_akin_xyy

#include "../../generic/akin/lab.hpp"
#include "../category.hpp"
#include "../../xyy/category.hpp"

namespace color
 {
  namespace akin
   {

    template< typename tag_name >
     struct lab< ::color::category::xyy< tag_name >  >
      {
       public:
         typedef ::color::category::lab< tag_name > akin_type;
      };

   }
 }

#endif
