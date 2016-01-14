#ifndef color_rgb_trait_component_uint24
#define color_rgb_trait_component_uint24

#include "../../category.hpp"

#include "../../../_internal/utility/component/array.hpp"

#include "../../../generic/trait/component.hpp"



namespace color
 {
  namespace trait
   {

    template< >
     struct component< ::color::category::rgb_uint24 >
      : public ::color::_internal::utility::component::array< std::uint8_t, unsigned >
      {
      };

   }
 }

#endif