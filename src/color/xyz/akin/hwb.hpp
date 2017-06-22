#ifndef color_xyz_akin_hwb
#define color_xyz_akin_hwb

#include "../../generic/akin/xyz.hpp"
#include "../category.hpp"
#include "../../hwb/category.hpp"

namespace color
 {
  namespace akin
   {

    template
     <
       typename tag_name

     >
     struct xyz< ::color::category::hwb< tag_name > >
      {
       public:
         typedef ::color::category::xyz< tag_name > akin_type;
      };

   }
 }

#endif
