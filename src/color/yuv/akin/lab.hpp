#ifndef color_yuv_akin_lab
#define color_yuv_akin_lab

#include "../../generic/akin/yuv.hpp"
#include "../category.hpp"
#include "../../lab/category.hpp"

namespace color
 {
  namespace akin
   {

    template
     <
       typename tag_name 
      ,::color::constant::yuv::reference_enum      yuv_reference_number
      ,::color::constant::lab::reference_enum      lab_reference_number
     >
     struct yuv< ::color::category::lab< tag_name, lab_reference_number >, yuv_reference_number  >
      {
       public:
         typedef ::color::category::yuv< tag_name, yuv_reference_number > akin_type;
      };

   }
 }

#endif
