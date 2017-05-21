#ifndef color_hsi_akin_lms
#define color_hsi_akin_lms

#include "../../generic/akin/hsi.hpp"
#include "../category.hpp"
#include "../../lms/category.hpp"

namespace color
 {
  namespace akin
   {

    template
     <
       typename tag_name
      ,::color::constant::lms::reference_enum reference_number 

     >
     struct hsi< ::color::category::lms< tag_name, reference_number >  >
      {
       public:
         typedef ::color::category::hsi< tag_name > akin_type;
      };

   }
 }

#endif
