#ifndef color_yuv_akin_yuv
#define color_yuv_akin_yuv

#include "../../generic/akin/yuv.hpp"
#include "../category.hpp"
#include "../../yuv/category.hpp"

namespace color
 {
  namespace akin
   {

    template
     <
       typename tag_name,          ::color::constant::yuv::reference_enum       yuv_reference_number
     >
     struct yuv< ::color::category::yuv< tag_name, yuv_reference_number >, yuv_reference_number >
      {
       public:
         typedef ::color::category::yuv< tag_name, yuv_reference_number > akin_type;
      };

   }
 }

#endif
