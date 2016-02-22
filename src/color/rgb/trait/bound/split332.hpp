#ifndef color_rgb_trait_bound_split332
#define color_rgb_trait_bound_split332


#include "../../../generic/type/split3.hpp"

#include "../../../_internal/utility/bound/split3.hpp"

#include "../../../generic/trait/bound.hpp"

#include "../../category.hpp"

namespace color
 {
  namespace trait
   {

    template< unsigned first_position, unsigned second_position, unsigned third_position > 
     struct bound< ::color::category::rgb< ::color::category::_internal::rgb_scramble< ::color::type::split332_t, first_position, second_position, third_position > > >
      : public ::color::_internal::utility::bound::split332
      {
      };

   }
 }

#endif
