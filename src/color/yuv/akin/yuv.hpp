#ifndef color_yuv_akin_yuv
#define color_yuv_akin_yuv

#include "../../generic/akin/yuv.hpp"
#include "../category.hpp"
#include "../../yuv/category.hpp"

namespace color
 {
  namespace akin
   {

    template< typename tag_name >
     struct yuv< ::color::category::yuv< tag_name >  >
      {
       public:
         typedef ::color::category::yuv< tag_name > akin_type;
      };

   }
 }

#endif
