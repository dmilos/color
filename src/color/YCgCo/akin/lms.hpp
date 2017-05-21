#ifndef color_YCgCo_akin_lms
#define color_YCgCo_akin_lms

#include "../../generic/akin/YCgCo.hpp"
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
     struct YCgCo< ::color::category::lms< tag_name, reference_number >  >
      {
       public:
         typedef ::color::category::YCgCo< tag_name > akin_type;
      };

   }
 }

#endif
