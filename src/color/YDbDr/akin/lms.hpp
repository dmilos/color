#ifndef color_YDbDr_akin_lms
#define color_YDbDr_akin_lms

#include "../../generic/akin/YDbDr.hpp"
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
     struct YDbDr< ::color::category::lms< tag_name, reference_number >  >
      {
       public:
         typedef ::color::category::YDbDr< tag_name > akin_type;
      };

   }
 }

#endif
