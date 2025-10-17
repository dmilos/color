#ifndef color_rgb_trait_component_scramble4
#define color_rgb_trait_component_scramble4

#include "../../category.hpp"

#include "../../../_internal/utility/component/array.hpp"

#include "../../../generic/trait/component.hpp"

#include "../index/index.hpp"



namespace color
 {
  namespace trait
   {

    template< typename component_name, unsigned ...index >
     struct component< ::color::category::rgb< ::color::category::_internal::rgb_scramble< component_name, index ... > > >
      : public ::color::_internal::utility::component::array< component_name >
      {
      };

   }
 }

#endif
