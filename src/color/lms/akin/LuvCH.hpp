#ifndef color_lms_akin_LuvCH
#define color_lms_akin_LuvCH

#include "../../generic/akin/lms.hpp"
#include "../category.hpp"
#include "../../LuvCH/category.hpp"

namespace color
 {
  namespace akin
   {

    template
     <
       typename tag_name
      ,::color::constant::lms::reference_enum        lms_reference_number

     >
     struct lms< ::color::category::LuvCH< tag_name >, lms_reference_number  >
      {
       public:
         typedef ::color::category::lms< tag_name, lms_reference_number > akin_type;
      };

   }
 }

#endif
