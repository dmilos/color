#ifndef color_rgb_trait_bound_split565
#define color_rgb_trait_bound_split565


#include "../../../generic/type/split565.hpp"

#include "../../../_internal/utility/bound/565.hpp"

#include "../../../generic/trait/bound.hpp"

#include "../../category.hpp"

namespace color
 {
  namespace trait
   {

    template< unsigned first_position, unsigned second_position, unsigned third_position, unsigned fourth_position > 
     struct bound< ::color::category::rgb< ::color::category::_internal::rgba_scramble< ::color::type::split565_t, first_position, second_position, third_position,fourth_position > > >
      : public ::color::_internal::utility::bound::bound565< unsigned >
      {
      };

   }
 }

#endif
