#ifndef color_YDbDr_akin_luv
#define color_YDbDr_akin_luv

#include "../../generic/akin/YDbDr.hpp"
#include "../category.hpp"
#include "../../luv/category.hpp"

namespace color
 {
  namespace akin
   {

    template
     <
       typename tag_name


     >
     struct YDbDr< ::color::category::luv< tag_name >  >
      {
       public:
         typedef ::color::category::YDbDr< tag_name > akin_type;
      };

   }
 }

#endif
