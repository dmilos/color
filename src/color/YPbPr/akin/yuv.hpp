#ifndef color_YPbPr_akin_yuv
#define color_YPbPr_akin_yuv

#include "../../generic/akin/YPbPr.hpp"
#include "../category.hpp"
#include "../../yuv/category.hpp"

namespace color
 {
  namespace akin
   {

    template
     <
       typename tag_name 
      ,typename ::color::constant::YPbPr::reference_enum      YPbPr_reference_number
      ,typename ::color::constant::yuv::reference_enum          yuv_reference_number
     >
     struct YPbPr< ::color::category::yuv< tag_name, yuv_reference_number >, YPbPr_reference_number  >
      {
       public:
         typedef ::color::category::YPbPr< tag_name, YPbPr_reference_number > akin_type;
      };

   }
 }

#endif
