#ifndef color_luv_akin_rgb
#define color_luv_akin_rgb

#include "../../generic/akin/luv.hpp"
#include "../category.hpp"
#include "../../rgb/category.hpp"

namespace color
 {
  namespace akin
   {

    template< typename component_name, unsigned ... index >
     struct luv< ::color::category::rgb< ::color::category::_internal::rgb_scramble<component_name, index ... > > >
      {
       public:
         typedef ::color::category::luv< component_name > akin_type;
      };

   }
 }

#endif
