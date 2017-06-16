#ifndef color_LabCH_akin_LabCH
#define color_LabCH_akin_LabCH

#include "../../generic/akin/LabCH.hpp"
#include "../category.hpp"
#include "../../LabCH/category.hpp"

namespace color
 {
  namespace akin
   {

    template< typename tag_name >
     struct LabCH< ::color::category::LabCH< tag_name >  >
      {
       public:
         typedef ::color::category::LabCH< tag_name > akin_type;
      };

   }
 }

#endif
