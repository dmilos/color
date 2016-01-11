#ifndef color_gray_trait_component_uint8
#define color_gray_trait_component_uint8

#include "../../category.hpp"

#include "../../../_internal/utility/component/unsigned.hpp"

#include "../../../generic/trait/component.hpp"



namespace color
 {
  namespace trait
   {

    template< >
     struct component< ::color::category::gray_uint8 >
      : public ::color::_internal::utility::component::Unsigned< std::uint8_t, unsigned >
      {
      };

   }
 }

#endif
