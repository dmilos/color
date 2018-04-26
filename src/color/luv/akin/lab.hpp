#ifndef color_luv_akin_lab
#define color_luv_akin_lab

#include "../../generic/akin/luv.hpp"
#include "../category.hpp"
#include "../../lab/category.hpp"

namespace color
 {
  namespace akin
   {

    template
     <
       typename tag_name
      ,::color::constant::lab::reference_enum reference_number

     >
     struct luv< ::color::category::lab< tag_name, reference_number >  >
      {
       public:
         typedef ::color::category::luv< tag_name > akin_type;
      };

   }
 }

#endif
