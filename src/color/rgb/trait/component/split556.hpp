#ifndef color_rgb_trait_component_split556
#define color_rgb_trait_component_split556


#include "../../../generic/type/split556.hpp"

#include "../../../_internal/utility/component/cnent556.hpp"

#include "../../../generic/trait/component.hpp"

#include "../../category.hpp"

namespace color
 {
  namespace trait
   {

     template< unsigned first_position, unsigned second_position, unsigned third_position > 
     struct component< ::color::category::rgb< ::color::category::_internal::rgb_scramble< ::color::type::split556_t, first_position, second_position, third_position > > >
      : public ::color::_internal::utility::component::cnent556< unsigned >
      {
      };

   }
 }

#endif

