#ifndef color_hsi_trait_component_uint16
#define color_hsi_trait_component_uint16

#include "../../category.hpp"

#include "../../../_internal/utility/component/array.hpp"

#include "../../../generic/trait/component.hpp"



namespace color
 {
  namespace trait
   {

    template< >
     struct component< ::color::category::hsi_uint8  >
      : public ::color::_internal::utility::component::array< std::uint8_t >
      {
      };

    template< >
     struct component< ::color::category::hsi_uint16 >
      : public ::color::_internal::utility::component::array< std::uint16_t >
      {
      };

    template< >
     struct component< ::color::category::hsi_uint32 >
      : public ::color::_internal::utility::component::array< std::uint32_t >
      {
      };

    template< >
     struct component< ::color::category::hsi_uint64 >
      : public ::color::_internal::utility::component::array< std::uint64_t >
      {
      };

   }
 }

#endif
