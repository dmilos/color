#ifndef color_tsl_akin_rgb
#define color_tsl_akin_rgb

#include "../../generic/akin/tsl.hpp"
#include "../category.hpp"
#include "../../rgb/category.hpp"

namespace color
 {
  namespace akin
   {

    template< typename component_name, unsigned ... index >
     struct tsl< ::color::category::rgb< ::color::category::_internal::rgb_scramble<component_name, index ... > > >
      {
       public:
         typedef ::color::category::tsl<component_name> akin_type;
      };

   }
 }

#endif
