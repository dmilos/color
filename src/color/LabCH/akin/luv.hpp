#ifndef color_LabCH_akin_luv
#define color_LabCH_akin_luv

#include "../../generic/akin/LabCH.hpp"
#include "../category.hpp"
#include "../../luv/category.hpp"

namespace color
 {
  namespace akin
   {

    template< typename tag_name >
     struct LabCH< ::color::category::luv< tag_name >  >
      {
       public:
         typedef ::color::category::LabCH< tag_name > akin_type;
      };

   }
 }

#endif
