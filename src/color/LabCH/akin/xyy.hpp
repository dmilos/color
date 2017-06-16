#ifndef color_LabCH_akin_xyy
#define color_LabCH_akin_xyy

#include "../../generic/akin/LabCH.hpp"
#include "../category.hpp"
#include "../../xyy/category.hpp"

namespace color
 {
  namespace akin
   {

    template< typename tag_name >
     struct LabCH< ::color::category::xyy< tag_name >  >
      {
       public:
         typedef ::color::category::LabCH< tag_name > akin_type;
      };

   }
 }

#endif
