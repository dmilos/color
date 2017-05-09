#ifndef color_xyy_akin_xyy
#define color_xyy_akin_xyy

#include "../../generic/akin/xyy.hpp"
#include "../category.hpp"
#include "../../xyy/category.hpp"

namespace color
 {
  namespace akin
   {

    template< typename tag_name >
     struct xyy< ::color::category::xyy< tag_name >  >
      {
       public:
         typedef ::color::category::xyy< tag_name > akin_type;
      };

   }
 }

#endif
