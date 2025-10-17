#ifndef color_LuvCH_akin_rgb
#define color_LuvCH_akin_rgb

#include "../../generic/akin/LuvCH.hpp"
#include "../category.hpp"
#include "../../rgb/category.hpp"

namespace color
 {
  namespace akin
   {

    template< typename component_name, unsigned ... index >
     struct LuvCH< ::color::category::rgb< ::color::category::_internal::rgb_scramble<component_name, index ... > > >
      {
       public:
         typedef ::color::category::LuvCH< component_name> akin_type;
      };

   }
 }

#endif
