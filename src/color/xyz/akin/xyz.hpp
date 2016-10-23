#ifndef color_xyz_akin_xyz
#define color_xyz_akin_xyz

#include "../../generic/akin/xyz.hpp"
#include "../category.hpp"
#include "../../xyz/category.hpp"

namespace color
 {
  namespace akin
   {

    template< typename tag_name >
     struct xyz< ::color::category::xyz< tag_name >  >
      {
       public:
         typedef ::color::category::xyz< tag_name > akin_type;
      };

   }
 }

#endif
