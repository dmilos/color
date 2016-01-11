#ifndef color_gray_trait_component_uint16
#define color_gray_trait_component_uint16

#include "../../category.hpp"

#include "../../../_internal/utility/component/unsigned.hpp"

#include "../../../generic/trait/component.hpp"



namespace color
 {
  namespace trait
   {

    template< >
     struct component< ::color::category::gray_uint16 >
      : public ::color::_internal::utility::component::Unsigned< std::uint16_t, unsigned >
      {
      };

   }
 }

#endif