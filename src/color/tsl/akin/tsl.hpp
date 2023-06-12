#ifndef color_tsl_akin_tsl
#define color_tsl_akin_tsl

#include "../../generic/akin/tsl.hpp"
#include "../category.hpp"
#include "../../tsl/category.hpp"

namespace color
 {
  namespace akin
   {

    template< typename tag_name >
     struct tsl< ::color::category::tsl< tag_name >  >
      {
       public:
         // TODO typedef ::color::category::tsl< ::color::category::_internal::tsl_scramble< tag_name, 0, 1, 2 >;  > akin_type;
         typedef ::color::category::tsl< tag_name > akin_type;
      };

   }
 }

#endif
