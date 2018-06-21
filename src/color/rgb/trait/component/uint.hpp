#ifndef color_rgb_trait_component_uint
#define color_rgb_trait_component_uint

#include "../../category.hpp"

#include "../../../_internal/utility/component/array.hpp"

#include "../../../generic/trait/component.hpp"

#include "../index/index.hpp"



namespace color
 {
  namespace trait
   {

    template< >
     struct component< ::color::category::rgb_uint8  >
      : public ::color::_internal::utility::component::array< std::uint8_t >
      {
      };

    template< >
     struct component< ::color::category::rgb_uint16 >
      : public ::color::_internal::utility::component::array< std::uint16_t >
      {
      };

    template< >
     struct component< ::color::category::rgb_uint32 >
      : public ::color::_internal::utility::component::array< std::uint32_t >
      {
      };

    template< >
     struct component< ::color::category::rgb_uint64 >
      : public ::color::_internal::utility::component::array< std::uint64_t >
      {
      };


   }
 }

#endif
