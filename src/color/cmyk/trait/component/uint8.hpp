#ifndef color_cmyk_trait_component_uint8
#define color_cmyk_trait_component_uint8

#include "../../category.hpp"

#include "../../../_internal/utility/component/cnent2222.hpp"

#include "../../../generic/trait/component.hpp"



namespace color
 {
  namespace trait
   {

    template< >
     struct component< ::color::category::cmyk_uint8 >
      : public ::color::_internal::utility::component::cnent2222< unsigned >
      {
      };

   }
 }

#endif
