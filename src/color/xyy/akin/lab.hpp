#ifndef color_xyy_akin_lab
#define color_xyy_akin_lab

#include "../../generic/akin/lab.hpp"
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
     struct xyy< ::color::category::lab< tag_name, reference_number > >
      {
       public:
         typedef ::color::category::xyy< tag_name > akin_type;
      };

   }
 }

#endif
