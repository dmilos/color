#ifndef color_rgb_akin_yuv
#define color_rgb_akin_yuv

#include "../../generic/akin/rgb.hpp"
#include "../category.hpp"
#include "../../yuv/category.hpp"

namespace color
 {
  namespace akin
   {

    template
     <
       typename tag_name
                         , typename ::color::constant::yuv::reference_enum          yuv_reference_number
     >
     struct rgb< ::color::category::yuv< tag_name, yuv_reference_number > >
      {
       public:
         typedef ::color::category::rgb< tag_name > akin_type;
      };

   }
 }

#endif
