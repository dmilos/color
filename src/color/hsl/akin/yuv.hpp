#ifndef color_hsl_akin_yuv
#define color_hsl_akin_yuv

#include "../../generic/akin/hsl.hpp"
#include "../category.hpp"
#include "../../hsl/category.hpp"

namespace color
 {
  namespace akin
   {

    template
     <
       typename tag_name
      ,::color::constant::yuv::reference_enum reference_number 

     >
     struct hsl< ::color::category::yuv< tag_name, reference_number >  >
      {
       public:
         typedef ::color::category::hsl< tag_name > akin_type;
      };

   }
 }

#endif
