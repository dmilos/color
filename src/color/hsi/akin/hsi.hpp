#ifndef color_hsi_akin_hsi
#define color_hsi_akin_hsi

#include "../../generic/akin/hsi.hpp"
#include "../category.hpp"
#include "../../hsi/category.hpp"

namespace color
 {
  namespace akin
   {

    template< typename tag_name >
     struct hsi< ::color::category::hsi< tag_name >  >
      {
       public:
         typedef ::color::category::hsi< tag_name > akin_type;
      };

   }
 }

#endif
