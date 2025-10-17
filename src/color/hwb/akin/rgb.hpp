#ifndef color_hwb_akin_rgb
#define color_hwb_akin_rgb

#include "../../generic/akin/hwb.hpp"
#include "../category.hpp"
#include "../../rgb/category.hpp"

namespace color
 {
  namespace akin
   {

    template< typename component_name, unsigned ... index >
     struct hwb< ::color::category::rgb< ::color::category::_internal::rgb_scramble<component_name, index ... > > >
      {
       public:
         typedef ::color::category::hwb< component_name > akin_type;
      };

   }
 }

#endif
