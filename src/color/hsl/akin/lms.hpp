#ifndef color_hsl_akin_lms
#define color_hsl_akin_lms

#include "../../generic/akin/hsl.hpp"
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
     struct hsl< ::color::category::lms< tag_name, reference_number >  >
      {
       public:
         typedef ::color::category::hsl< tag_name > akin_type;
      };

   }
 }

#endif
