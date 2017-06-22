#ifndef color_YDbDr_akin_hwb
#define color_YDbDr_akin_hwb

#include "../../generic/akin/YDbDr.hpp"
#include "../category.hpp"
#include "../../hwb/category.hpp"

namespace color
 {
  namespace akin
   {

    template
     <
       typename tag_name

     >
     struct YDbDr< ::color::category::hwb< tag_name > >
      {
       public:
         typedef ::color::category::YDbDr< tag_name > akin_type;
      };

   }
 }

#endif
