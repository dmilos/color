#ifndef color_rgb_trait_bound_scramble3
#define color_rgb_trait_bound_scramble3

#include "../../category.hpp"

#include "../../../_internal/utility/bound/general.hpp"

#include "../../../generic/trait/bound.hpp"



namespace color
 {
  namespace trait
   {

    template< typename value_name, unsigned first_position, unsigned second_position, unsigned third_position > 
     struct bound< ::color::category::rgb< ::color::category::_internal::rgb_scramble< value_name, first_position, second_position, third_position > > >
      : public ::color::_internal::utility::bound::general< value_name, typename ::color::trait::index< ::color::category::rgb< ::color::category::_internal::rgb_scramble< value_name, first_position, second_position, third_position > > >::instance_type >
      {
      };

   }
 }

#endif
