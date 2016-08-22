#ifndef color_hcg_akin_hcg
#define color_hcg_akin_hcg

#include "../../generic/akin/hcg.hpp"
#include "../category.hpp"
#include "../../hcg/category.hpp"

namespace color
 {
  namespace akin
   {

    template< typename tag_name >
     struct hcg< ::color::category::hcg< tag_name >  >
      {
       public:
         typedef ::color::category::hcg< tag_name > akin_type;
      };

   }
 }

#endif
