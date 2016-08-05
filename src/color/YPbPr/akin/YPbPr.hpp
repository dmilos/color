#ifndef color_YPbPr_akin_YPbPr
#define color_YPbPr_akin_YPbPr

#include "../../generic/akin/YPbPr.hpp"
#include "../category.hpp"
#include "../../YPbPr/category.hpp"

namespace color
 {
  namespace akin
   {

    template< typename tag_name >
     struct YPbPr< ::color::category::YPbPr< tag_name >  >
      {
       public:
         typedef ::color::category::YPbPr< tag_name > akin_type;
      };

   }
 }

#endif
