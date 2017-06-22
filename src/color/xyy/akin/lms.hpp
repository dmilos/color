#ifndef color_xyy_akin_lms
#define color_xyy_akin_lms

#include "../../generic/akin/xyy.hpp"
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
     struct xyy< ::color::category::lms< tag_name, reference_number >  >
      {
       public:
         typedef ::color::category::xyy< tag_name > akin_type;
      };

   }
 }

#endif
