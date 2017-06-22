#ifndef color_cmy_akin_LabCH
#define color_cmy_akin_LabCH

#include "../../generic/akin/cmy.hpp"
#include "../category.hpp"
#include "../../LabCH/category.hpp"

namespace color
 {
  namespace akin
   {

    template< typename tag_name >
     struct cmy< ::color::category::LabCH< tag_name >  >
      {
       public:
         typedef ::color::category::cmy< tag_name > akin_type;
      };

   }
 }

#endif
