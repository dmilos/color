#ifndef color_LuvCH_akin_lms
#define color_LuvCH_akin_lms

#include "../../generic/akin/LuvCH.hpp"
#include "../category.hpp"
#include "../../lms/category.hpp"

namespace color
 {
  namespace akin
   {

    template
     <
       typename tag_name
      ,::color::constant::lms::reference_enum reference_number 

     >
     struct LuvCH< ::color::category::lms< tag_name, reference_number >  >
      {
       public:
         typedef ::color::category::LuvCH< tag_name > akin_type;
      };

   }
 }

#endif
