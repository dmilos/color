#ifndef color_luv_akin_LabCH
#define color_luv_akin_LabCH

#include "../../generic/akin/luv.hpp"
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
     struct luv< ::color::category::LabCH< tag_name > >
      {
       public:
         typedef ::color::category::luv< tag_name > akin_type;
      };

   }
 }

#endif
