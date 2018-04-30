#ifndef color_lab_akin_xyz
#define color_lab_akin_xyz

#include "../../generic/akin/xyz.hpp"
#include "../category.hpp"
#include "../../xyz/category.hpp"

namespace color
 {
  namespace akin
   {

    template
     <
      typename tag_name
      ,::color::constant::lab::reference_enum reference_number

     >
     struct lab< ::color::category::xyz< tag_name >, reference_number >
      {
       public:
         typedef ::color::category::lab< tag_name, reference_number > akin_type;
      };

   }
 }

#endif
