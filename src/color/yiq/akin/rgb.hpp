#ifndef color_yiq_akin_rgb
#define color_yiq_akin_rgb

#include "../../generic/akin/yiq.hpp"
#include "../category.hpp"
#include "../../rgb/category.hpp"

namespace color
 {
  namespace akin
   {

    template< typename component_name, unsigned ... index >
     struct yiq< ::color::category::rgb< ::color::category::_internal::rgb_scramble<component_name, index ... > > >
      {
       public:
         typedef ::color::category::yiq< component_name > akin_type;
      };

   }
 }

#endif
