#ifndef color_yuv_akin_YPbPr
#define color_yuv_akin_YPbPr

#include "../../generic/akin/yuv.hpp"
#include "../category.hpp"
#include "../../YPbPr/category.hpp"

namespace color
 {
  namespace akin
   {

    template
     <
       typename tag_name,          ::color::constant::yuv::reference_enum       yuv_reference_number
                        , typename ::color::constant::YPbPr::reference_enum   YPbPr_reference_number
     >
     struct yuv< ::color::category::YPbPr< tag_name, YPbPr_reference_number >, yuv_reference_number  >
      {
       public:
         typedef ::color::category::yuv< tag_name, yuv_reference_number > akin_type;
      };

   }
 }

#endif
