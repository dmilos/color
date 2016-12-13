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
     struct component< ::color::category::gray_uint8  >
      : public ::color::_internal::utility::component::Unsigned< std::uint8_t, unsigned >
      {
      };

    template< >
     struct component< ::color::category::gray_uint16 >
      : public ::color::_internal::utility::component::Unsigned< std::uint16_t, unsigned >
      {
      };

    template< >
     struct component< ::color::category::gray_uint32 >
      : public ::color::_internal::utility::component::Unsigned< std::uint32_t, unsigned >
      {
      };

    template< >
     struct component< ::color::category::gray_uint64 >
      : public ::color::_internal::utility::component::Unsigned< std::uint64_t, unsigned>
      {
      };

   }
 }

#endif
