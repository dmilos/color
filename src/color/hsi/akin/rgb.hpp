#ifndef color_hsi_akin_rgb
#define color_hsi_akin_rgb

#include "../../generic/akin/hsi.hpp"
#include "../category.hpp"
#include "../../rgb/category.hpp"

namespace color
 {
  namespace akin
   {

    template< typename component_name, unsigned ... index >
     struct hsi< ::color::category::rgb< ::color::category::_internal::rgb_scramble<component_name, index ... > > >
      {
       public:
         typedef ::color::category::hsi< component_name > akin_type;
      };

   }
 }

#endif
