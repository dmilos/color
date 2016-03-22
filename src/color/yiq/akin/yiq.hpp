#ifndef color_yiq_akin_yiq
#define color_yiq_akin_yiq

#include "../../generic/akin/yiq.hpp"
#include "../category.hpp"
#include "../../yiq/category.hpp"

namespace color
 {
  namespace akin
   {

    template< typename tag_name >
     struct yiq< ::color::category::yiq< tag_name >  >
      {
       public:
         typedef ::color::category::yiq< tag_name > akin_type;
      };

   }
 }

#endif
