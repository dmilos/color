#ifndef color_gray_trait_component_bool
#define color_gray_trait_component_bool

#include "../../category.hpp"

#include "../../../_internal/utility/component/array.hpp"

#include "../../../generic/trait/component.hpp"



namespace color
 {
  namespace trait
   {

    template< >
     struct component< ::color::category::gray_bool >
      : public ::color::_internal::utility::component::array< bool >
      {
      };

   }
 }

#endif