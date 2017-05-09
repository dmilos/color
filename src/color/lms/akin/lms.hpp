#ifndef color_lms_akin_lms
#define color_lms_akin_lms

#include "../../generic/akin/lms.hpp"
#include "../category.hpp"
#include "../../lms/category.hpp"

namespace color
 {
  namespace akin
   {

    template< typename tag_name >
     struct lms< ::color::category::lms< tag_name >  >
      {
       public:
         typedef ::color::category::lms< tag_name > akin_type;
      };

   }
 }

#endif
