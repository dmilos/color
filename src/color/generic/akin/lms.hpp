#ifndef color_akin_lms
#define color_akin_lms

// ::color::akin::lms< non_lms_category >::akin_cetegory_type;
#include "../../lms/constant/reference.hpp"

namespace color
 {
  namespace akin
   {

    template
     <
       typename category_name
      ,::color::constant::lms::reference_enum        lms_reference_number
     >
     struct lms
      {
       typedef category_name category_type;
       typedef void akin_type;
      };

   }
 }

#endif
