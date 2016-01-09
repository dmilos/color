#ifndef color_cmyk_trait_component_uint16
#define color_cmyk_trait_component_uint16

#include "../../category.hpp"

#include "../../../_internal/utility/component/unsigned.hpp"

#include "../../../generic/trait/component.hpp"



namespace color
 {
  namespace trait
   {

    template< >
     struct component< ::color::category::cmyk_uint16 >
      : public ::color::_internal::utility::component::Unsigned< std::uint8_t, unsigned >
      {
      };

   }
 }

#endif