#ifndef color_YCgCo_akin_rgb
#define color_YCgCo_akin_rgb

#include "../../generic/akin/YCgCo.hpp"
#include "../category.hpp"
#include "../../rgb/category.hpp"

namespace color
 {
  namespace akin
   {

    template< typename component_name, unsigned ... index >
     struct YCgCo< ::color::category::rgb< ::color::category::_internal::rgb_scramble<component_name, index ... > > >
      {
       public:
         typedef ::color::category::YCgCo<component_name> akin_type;
      };

   }
 }

#endif
