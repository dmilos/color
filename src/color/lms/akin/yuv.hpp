#ifndef color_lms_akin_yuv
#define color_lms_akin_yuv

#include "../../generic/akin/lms.hpp"
#include "../category.hpp"
#include "../../yuv/category.hpp"

namespace color
 {
  namespace akin
   {

    template
     <
       typename tag_name
      ,::color::constant::lms::reference_enum        lms_reference_number
      ,::color::constant::yuv::reference_enum        yuv_reference_number 
     >
     struct lms< ::color::category::yuv< tag_name, yuv_reference_number >, lms_reference_number  >
      {
       public:
         typedef ::color::category::lms< tag_name, lms_reference_number > akin_type;
      };

   }
 }

#endif
