#ifndef color_xyz_akin_lms
#define color_xyz_akin_lms

#include "../../generic/akin/xyz.hpp"
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
     struct xyz< ::color::category::lms< tag_name, reference_number >  >
      {
       public:
         typedef ::color::category::xyz< tag_name > akin_type;
      };

   }
 }

#endif
