#ifndef color_rgb_trait_bound_scramble4
#define color_rgb_trait_bound_scramble4

#include "../../category.hpp"

#include "../../../_internal/utility/bound/general.hpp"

#include "../../../generic/trait/bound.hpp"



namespace color
 {
  namespace trait
   {

    template< typename value_name, unsigned ... index > 
     struct bound< ::color::category::rgb< ::color::category::_internal::rgb_scramble< value_name, index ... > > >
      : public ::color::_internal::utility::bound::general< value_name, typename ::color::trait::index< ::color::category::rgb< ::color::category::_internal::rgb_scramble< value_name, index ... > > >::instance_type >
      {
      };

   }
 }

#endif
