#ifndef color_rgb_trait_component_scramble4
#define color_rgb_trait_component_scramble4

#include "../../category.hpp"

#include "../../../_internal/utility/component/array.hpp"

#include "../../../generic/trait/component.hpp"



namespace color
 {
  namespace trait
   {

     template< typename value_name, unsigned first_position, unsigned second_position, unsigned third_position , unsigned forth_position > 
     struct component< ::color::category::rgb< ::color::category::_internal::rgba_scramble< value_name, first_position, second_position, third_position, forth_position > > >
      : public ::color::_internal::utility::component::array< value_name >
      {
      };

   }
 }

#endif
