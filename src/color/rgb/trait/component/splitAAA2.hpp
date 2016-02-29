#ifndef color_rgb_trait_component_splitAAA2
#define color_rgb_trait_component_splitAAA2


#include "../../../generic/type/split4.hpp"

#include "../../../_internal/utility/component/pack32.hpp"

#include "../../../generic/trait/component.hpp"

#include "../../category.hpp"

namespace color
 {
  namespace trait
   {

     template< unsigned first_position, unsigned second_position, unsigned third_position > 
     struct component< ::color::category::rgb< ::color::category::_internal::rgb_scramble< ::color::type::splitAAA2_t, first_position, second_position, third_position > > >
      : public ::color::_internal::utility::component::cnentAAA2< unsigned >
      {
      };

   }
 }

#endif

