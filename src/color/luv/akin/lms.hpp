#ifndef color_luv_akin_lms
#define color_luv_akin_lms

#include "../../generic/akin/luv.hpp"
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
     struct luv< ::color::category::lms< tag_name, reference_number >  >
      {
       public:
         typedef ::color::category::luv< tag_name > akin_type;
      };

   }
 }

#endif
