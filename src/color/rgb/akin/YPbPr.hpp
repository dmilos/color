#ifndef color_rgb_akin_YPbPr
#define color_rgb_akin_YPbPr

#include "../../generic/akin/rgb.hpp"
#include "../category.hpp"
#include "../../YPbPr/category.hpp"

namespace color
 {
  namespace akin
   {

    template
     <
       typename tag_name
                         , typename ::color::constant::YPbPr::reference_enum          YPbPr_reference_number
     >
     struct rgb< ::color::category::YPbPr< tag_name, YPbPr_reference_number > >
      {
       public:
         typedef ::color::category::rgb< tag_name > akin_type;
      };

   }
 }

#endif
