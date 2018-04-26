#ifndef color_hwb_akin_lab
#define color_hwb_akin_lab

#include "../../generic/akin/hwb.hpp"
#include "../category.hpp"
#include "../../lab/category.hpp"

namespace color
 {
  namespace akin
   {

    template
     <
      typename tag_name 

      , ::color::constant::lab::reference_enum     reference_number
     >
     struct hwb< ::color::category::lab< tag_name, reference_number > >
      {
       public:
         typedef ::color::category::hwb< tag_name > akin_type;
      };

   }
 }

#endif
