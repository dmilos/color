#ifndef color_yuv_akin_YDbDr
#define color_yuv_akin_YDbDr

#include "../../generic/akin/yuv.hpp"
#include "../category.hpp"
#include "../../YDbDr/category.hpp"

namespace color
 {
  namespace akin
   {

    template
     <
       typename tag_name , typename  ::color::constant::yuv::reference_enum      yuv_reference_number

     >
     struct yuv< ::color::category::YDbDr< tag_name >, yuv_reference_number  >
      {
       public:
         typedef ::color::category::yuv< tag_name, yuv_reference_number > akin_type;
      };

   }
 }

#endif
