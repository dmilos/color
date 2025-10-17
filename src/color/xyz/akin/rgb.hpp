#ifndef color_xyz_akin_rgb
#define color_xyz_akin_rgb

#include "../../generic/akin/xyz.hpp"
#include "../category.hpp"
#include "../../rgb/category.hpp"

namespace color
 {
  namespace akin
   {

    template< typename component_name, unsigned ... index >
     struct xyz< ::color::category::rgb< ::color::category::_internal::rgb_scramble<component_name, index ... > > >
      {
       public:
         typedef ::color::category::xyz<component_name> akin_type;
      };

   }
 }

#endif
