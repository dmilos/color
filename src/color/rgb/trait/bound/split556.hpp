#ifndef color_rgb_trait_bound_split556
#define color_rgb_trait_bound_split556


#include "../../../generic/type/split556.hpp"

#include "../../../_internal/utility/bound/556.hpp"

#include "../../../generic/trait/bound.hpp"

#include "../../category.hpp"

namespace color
 {
  namespace trait
   {

    template< unsigned first_position, unsigned second_position, unsigned third_position > 
     struct bound< ::color::category::rgb< ::color::category::_internal::rgb_scramble< ::color::type::split556_t, first_position, second_position, third_position > > >
      : public ::color::_internal::utility::bound::bound556< unsigned >
      {
      };

   }
 }

#endif
