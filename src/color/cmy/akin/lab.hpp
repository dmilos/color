#ifndef color_cmy_akin_lab
#define color_cmy_akin_lab

#include "../../generic/akin/cmy.hpp"
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
     struct cmy< ::color::category::lab< tag_name, reference_number > >
      {
       public:
         typedef ::color::category::cmy< tag_name > akin_type;
      };

   }
 }

#endif
