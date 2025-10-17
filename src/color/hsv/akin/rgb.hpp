#ifndef color_hsv_akin_rgb
#define color_hsv_akin_rgb

#include "../../generic/akin/hsv.hpp"
#include "../category.hpp"
#include "../../rgb/category.hpp"

namespace color
 {
  namespace akin
   {

    template<typename component_name, unsigned ... index >
     struct hsv< ::color::category::rgb< ::color::category::_internal::rgb_scramble< component_name, index ... > > >
      {
       public:
         typedef ::color::category::hsv<component_name> akin_type;
      };

   }
 }

#endif
