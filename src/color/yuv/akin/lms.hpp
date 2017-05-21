#ifndef color_yuv_akin_lms
#define color_yuv_akin_lms

#include "../../generic/akin/yuv.hpp"
#include "../category.hpp"
#include "../../lms/category.hpp"

namespace color
 {
  namespace akin
   {

    template
     <
       typename tag_name
      ,::color::constant::yuv::reference_enum    yuv_reference_number
      ,::color::constant::lms::reference_enum    lms_reference_number 
     >
     struct yuv< ::color::category::lms< tag_name, lms_reference_number >, yuv_reference_number  >
      {
       public:
         typedef ::color::category::yuv< tag_name, yuv_reference_number > akin_type;
      };

   }
 }

#endif
