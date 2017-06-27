#ifndef color_rgb_trait_bound_scramble4
#define color_rgb_trait_bound_scramble4

#include "../../category.hpp"

#include "../../../_internal/utility/bound/general.hpp"

#include "../../../generic/trait/bound.hpp"



namespace color
 {
  namespace trait
   {

    template< typename value_name, unsigned first_position, unsigned second_position, unsigned third_position, unsigned fourth_position > 
     struct bound< ::color::category::rgb< ::color::category::_internal::rgba_scramble< value_name, first_position, second_position, third_position,fourth_position > > >
      : public ::color::_internal::utility::bound::general< value_name, typename ::color::trait::index< ::color::category::rgb< ::color::category::_internal::rgba_scramble< value_name, first_position, second_position, third_position,fourth_position > > >::instance_type >
      {
      };

   }
 }

#endif
