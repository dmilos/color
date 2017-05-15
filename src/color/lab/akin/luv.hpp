#ifndef color_lab_akin_luv
#define color_lab_akin_luv

#include "../../generic/akin/lab.hpp"
#include "../category.hpp"
#include "../../luv/category.hpp"

namespace color
 {
  namespace akin
   {

    template< typename tag_name >
     struct lab< ::color::category::luv< tag_name >  >
      {
       public:
         typedef ::color::category::lab< tag_name > akin_type;
      };

   }
 }

#endif
