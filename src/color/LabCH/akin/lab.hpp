#ifndef color_LabCH_akin_lab
#define color_LabCH_akin_lab

#include "../../generic/akin/LabCH.hpp"
#include "../category.hpp"
#include "../../lab/category.hpp"

namespace color
 {
  namespace akin
   {

    template< typename tag_name >
     struct LabCH< ::color::category::lab< tag_name >  >
      {
       public:
         typedef ::color::category::LabCH< tag_name > akin_type;
      };

   }
 }

#endif
