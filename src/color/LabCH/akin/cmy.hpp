#ifndef color_LabCH_akin_cmy
#define color_LabCH_akin_cmy

#include "../../generic/akin/LabCH.hpp"
#include "../category.hpp"
#include "../../cmy/category.hpp"

namespace color
 {
  namespace akin
   {

    template< typename tag_name >
     struct LabCH< ::color::category::cmy< tag_name >  >
      {
       public:
         typedef ::color::category::LabCH< tag_name > akin_type;
      };

   }
 }

#endif
