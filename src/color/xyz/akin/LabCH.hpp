#ifndef color_xyz_akin_LabCH
#define color_xyz_akin_LabCH

#include "../../generic/akin/xyz.hpp"
#include "../category.hpp"
#include "../../LabCH/category.hpp"

namespace color
 {
  namespace akin
   {

    template
     <
       typename tag_name

     >
     struct xyz< ::color::category::LabCH< tag_name > >
      {
       public:
         typedef ::color::category::xyz< tag_name > akin_type;
      };

   }
 }

#endif
