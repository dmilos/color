#ifndef color_lms_trait_component_uint
#define color_lms_trait_component_uint

#include "../../category.hpp"

#include "../../../_internal/utility/component/array.hpp"

#include "../../../generic/trait/component.hpp"



namespace color
 {
  namespace trait
   {

    template< >
     struct component< ::color::category::lms_uint8  >
      : public ::color::_internal::utility::component::array< std::uint8_t, unsigned >
      {
      };

    template< >
     struct component< ::color::category::lms_uint16 >
      : public ::color::_internal::utility::component::array< std::uint16_t, unsigned >
      {
      };

    template< >
     struct component< ::color::category::lms_uint32 >
      : public ::color::_internal::utility::component::array< std::uint32_t, unsigned >
      {
      };

    template< >
     struct component< ::color::category::lms_uint64 >
      : public ::color::_internal::utility::component::array< std::uint64_t, unsigned >
      {
      };

   }
 }

#endif
