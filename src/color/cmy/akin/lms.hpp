#ifndef color_cmy_akin_lms
#define color_cmy_akin_lms

#include "../../generic/akin/cmy.hpp"
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
     struct cmy< ::color::category::lms< tag_name, reference_number >  >
      {
       public:
         typedef ::color::category::cmy< tag_name > akin_type;
      };

   }
 }

#endif
