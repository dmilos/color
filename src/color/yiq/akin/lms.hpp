#ifndef color_yiq_akin_lms
#define color_yiq_akin_lms

#include "../../generic/akin/yiq.hpp"
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
     struct yiq< ::color::category::lms< tag_name, reference_number >  >
      {
       public:
         typedef ::color::category::yiq< tag_name > akin_type;
      };

   }
 }

#endif
