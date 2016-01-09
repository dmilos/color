#ifndef color_cmy_trait_component_uint32
#define color_cmy_trait_component_uint32

#include "../../category.hpp"

#include "../../../_internal/utility/component/unsigned.hpp"

#include "../../../generic/trait/component.hpp"



namespace color
 {
  namespace trait
   {

    template< >
     struct component< ::color::category::cmy_uint32 >
      : public ::color::_internal::utility::component::Unsigned< std::uint8_t,  unsigned>
      {
      };

  }
 }

#endif