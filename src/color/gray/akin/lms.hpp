#ifndef color_gray_akin_lms
#define color_gray_akin_lms

#include "../../generic/akin/gray.hpp"
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
     struct gray< ::color::category::lms< tag_name, reference_number > >
      {
       public:
         typedef ::color::category::gray< tag_name > akin_type;
      };

   }
 }

#endif
