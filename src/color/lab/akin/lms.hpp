#ifndef color_lab_akin_lms
#define color_lab_akin_lms

#include "../../generic/akin/lab.hpp"
#include "../category.hpp"
#include "../../lms/category.hpp"

namespace color
 {
  namespace akin
   {

    template< typename tag_name >
     struct lab< ::color::category::lms< tag_name >  >
      {
       public:
         typedef ::color::category::lab< tag_name > akin_type;
      };

   }
 }

#endif
