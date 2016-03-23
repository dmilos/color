#ifndef color_rgb_trait_component_split4444
#define color_rgb_trait_component_split4444


#include "../../../generic/type/split4.hpp"

#include "../../../_internal/utility/component/pack32.hpp"

#include "../../../generic/trait/component.hpp"

#include "../../category.hpp"

namespace color
 {
  namespace trait
   {

     template< unsigned first_position, unsigned second_position, unsigned third_position, unsigned fourth_position  >
     struct component< ::color::category::rgb< ::color::category::_internal::rgba_scramble< ::color::type::split4444_t, first_position, second_position, third_position, fourth_position > > >
      : public ::color::_internal::utility::component::cnent4444< unsigned >
      {
      };

   }
 }

#endif

