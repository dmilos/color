#ifndef color_LuvCH_akin_lab
#define color_LuvCH_akin_lab

#include "../../generic/akin/LuvCH.hpp"
#include "../category.hpp"
#include "../../lab/category.hpp"

namespace color
 {
  namespace akin
   {

    template< typename tag_name, ::color::constant::lab::reference_enum reference_number >
     struct LuvCH< ::color::category::lab< tag_name, reference_number >  >
      {
       public:
         typedef ::color::category::LuvCH< tag_name > akin_type;
      };

   }
 }

#endif
