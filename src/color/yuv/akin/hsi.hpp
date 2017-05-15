#ifndef color_yuv_akin_hsi
#define color_yuv_akin_hsi

#include "../../generic/akin/yuv.hpp"
#include "../category.hpp"
#include "../../hsi/category.hpp"

namespace color
 {
  namespace akin
   {

    template
     <
       typename tag_name , typename  ::color::constant::yuv::reference_enum      yuv_reference_number

     >
     struct yuv< ::color::category::hsi< tag_name >, yuv_reference_number  >
      {
       public:
         typedef ::color::category::yuv< tag_name, yuv_reference_number > akin_type;
      };

   }
 }

#endif
