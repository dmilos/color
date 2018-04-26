#ifndef color_lab_akin_yuv
#define color_lab_akin_yuv

#include "../../generic/akin/lab.hpp"
#include "../category.hpp"
#include "../../yuv/category.hpp"

namespace color
 {
  namespace akin
   {

    template
     <
       typename tag_name
      ,::color::constant::lab::reference_enum lab_reference_number
      ,::color::constant::yuv::reference_enum yuv_reference_number
     >
     struct lab< ::color::category::yuv< tag_name, yuv_reference_number >, lab_reference_number >
      {
       public:
         typedef ::color::category::lab< tag_name, lab_reference_number > akin_type;
      };

   }
 }

#endif
