#ifndef color_hwb_akin_lms
#define color_hwb_akin_lms

#include "../../generic/akin/hwb.hpp"
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
     struct hwb< ::color::category::lms< tag_name, reference_number >  >
      {
       public:
         typedef ::color::category::hwb< tag_name > akin_type;
      };

   }
 }

#endif
