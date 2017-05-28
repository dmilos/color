#ifndef color_YDbDr_akin_xyy
#define color_YDbDr_akin_xyy

#include "../../generic/akin/YDbDr.hpp"
#include "../category.hpp"
#include "../../xyy/category.hpp"

namespace color
 {
  namespace akin
   {

    template
     <
       typename tag_name


     >
     struct YDbDr< ::color::category::xyy< tag_name >  >
      {
       public:
         typedef ::color::category::YDbDr< tag_name > akin_type;
      };

   }
 }

#endif
