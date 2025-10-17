#ifndef color_hsl_akin_rgb
#define color_hsl_akin_rgb

#include "../../generic/akin/hsl.hpp"
#include "../category.hpp"
#include "../../rgb/category.hpp"

namespace color
 {
  namespace akin
   {

    template< typename component_name, unsigned ... index >
     struct hsl< ::color::category::rgb< ::color::category::_internal::rgb_scramble<component_name, index ... > > >
      {
       public:
         typedef ::color::category::hsl< component_name > akin_type;
      };

   }
 }

#endif
