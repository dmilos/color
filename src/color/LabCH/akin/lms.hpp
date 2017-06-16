#ifndef color_LabCH_akin_lms
#define color_LabCH_akin_lms

#include "../../generic/akin/LabCH.hpp"
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
     struct LabCH< ::color::category::lms< tag_name, reference_number >  >
      {
       public:
         typedef ::color::category::LabCH< tag_name > akin_type;
      };

   }
 }

#endif
