#ifndef color_rgb_trait_component_uint16
#define color_rgb_trait_component_uint16

#include "../../category.hpp"

#include "../../../_internal/utility/component/cnent655.hpp"

#include "../../../generic/trait/component.hpp"



namespace color
 {
  namespace trait
   {

    template< >
     struct component< ::color::category::rgb_uint16 >
      : public ::color::_internal::utility::component::cnent655< unsigned>
      {
      };

   }
 }

#endif