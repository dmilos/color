#ifndef color_hsv_trait_component_uint32
#define color_hsv_trait_component_uint32

#include "../../category.hpp"

#include "../../../_internal/utility/component/array.hpp"

#include "../../../generic/trait/component.hpp"



namespace color
 {
  namespace trait
   {

    template< >
     struct component< ::color::category::hsv_uint32 >
      : public ::color::_internal::utility::component::array< std::uint32_t, unsigned >
      {
      };

  }
 }

#endif