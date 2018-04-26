#ifndef color_YPbPr_akin_lab
#define color_YPbPr_akin_lab

#include "../../generic/akin/YPbPr.hpp"
#include "../category.hpp"
#include "../../lab/category.hpp"

namespace color
 {
  namespace akin
   {

    template
     <
        typename tag_name
       ,::color::constant::YPbPr::reference_enum      YPbPr_reference_number
       ,::color::constant::lab::reference_enum        lab_reference_number
     >
     struct YPbPr< ::color::category::lab< tag_name, lab_reference_number >, YPbPr_reference_number >
      {
       public:
         typedef ::color::category::YPbPr< tag_name, YPbPr_reference_number > akin_type;
      };

   }
 }

#endif
