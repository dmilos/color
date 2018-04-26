#ifndef color_lab_akin_cmy
#define color_lab_akin_cmy

#include "../../generic/akin/lab.hpp"
#include "../category.hpp"
#include "../../cmy/category.hpp"

namespace color
 {
  namespace akin
   {

    template< typename tag_name, ::color::constant::lab::reference_enum        lab_reference_number >
     struct lab< ::color::category::cmy< tag_name >, lab_reference_number  >
      {
       public:
         typedef ::color::category::lab< tag_name, lab_reference_number > akin_type;
      };

   }
 }

#endif
