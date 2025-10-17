#ifndef color_cmy_akin_rgb
#define color_cmy_akin_rgb

#include "../../generic/akin/cmy.hpp"
#include "../category.hpp"
#include "../../rgb/category.hpp"

namespace color
 {
  namespace akin
   {

    template<typename component_name, unsigned ... index>
     struct cmy< ::color::category::rgb< ::color::category::_internal::rgb_scramble<component_name, index ... > > >
      {
       public:
         typedef ::color::category::cmy<component_name> akin_type;
      };

   }
 }

#endif
