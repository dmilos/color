#ifndef color_gray_akin_LabCH
#define color_gray_akin_LabCH

#include "../../generic/akin/gray.hpp"
#include "../category.hpp"
#include "../../LabCH/category.hpp"

namespace color
 {
  namespace akin
   {

    template
     <
       typename tag_name
     >
     struct gray< ::color::category::LabCH< tag_name > >
      {
       public:
         typedef ::color::category::gray< tag_name > akin_type;
      };

   }
 }

#endif
