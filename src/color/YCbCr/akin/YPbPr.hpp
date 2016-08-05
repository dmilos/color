#ifndef color_YCbCr_akin_YCbCr
#define color_YCbCr_akin_YCbCr

#include "../../generic/akin/YCbCr.hpp"
#include "../category.hpp"
#include "../../YCbCr/category.hpp"

namespace color
 {
  namespace akin
   {

    template< typename tag_name >
     struct YCbCr< ::color::category::YCbCr< tag_name >  >
      {
       public:
         typedef ::color::category::YCbCr< tag_name > akin_type;
      };

   }
 }

#endif
