#ifndef color_cmyk_akin_rgb
#define color_cmyk_akin_rgb

#include "../../generic/akin/cmyk.hpp"
#include "../category.hpp"
#include "../../rgb/category.hpp"

namespace color
 {
  namespace akin
   {

    template< typename component_name, unsigned ... index >
     struct cmyk< ::color::category::rgb< ::color::category::_internal::rgb_scramble<component_name, index ... > > >
      {
       public:
         typedef ::color::category::cmyk<component_name>akin_type;
      };

   }
 }

#endif
