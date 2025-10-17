#ifndef color_gray_akin_rgb
#define color_gray_akin_rgb

#include "../../generic/akin/gray.hpp"
#include "../category.hpp"
#include "../../rgb/category.hpp"

namespace color
 {
  namespace akin
   {

    template< typename component_name, unsigned ... index >
     struct gray< ::color::category::rgb< ::color::category::_internal::rgb_scramble<component_name, index ... > > >
      {
       public:
         typedef ::color::category::gray<component_name>akin_type;
      };

   }
 }

#endif
