#ifndef color_xyy_akin_rgb
#define color_xyy_akin_rgb

#include "../../generic/akin/xyy.hpp"
#include "../category.hpp"
#include "../../rgb/category.hpp"

namespace color
 {
  namespace akin
   {

    template< typename component_name, unsigned ... index >
     struct xyy< ::color::category::rgb< ::color::category::_internal::rgb_scramble<component_name, index ... > > >
      {
       public:
         typedef ::color::category::xyy<component_name> akin_type;
      };

   }
 }

#endif
