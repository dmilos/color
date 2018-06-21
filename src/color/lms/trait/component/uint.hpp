#ifndef color_lms_trait_component_uint
#define color_lms_trait_component_uint

#include "../../category.hpp"

#include "../../../_internal/utility/component/array.hpp"

#include "../../../generic/trait/component.hpp"



namespace color
 {
  namespace trait
   {

    template< ::color::constant::lms::reference_enum reference_number >
     struct component< ::color::category::lms_uint8<reference_number>  >
      : public ::color::_internal::utility::component::array< std::uint8_t >
      {
      };

    template< ::color::constant::lms::reference_enum reference_number >
     struct component< ::color::category::lms_uint16<reference_number> >
      : public ::color::_internal::utility::component::array< std::uint16_t >
      {
      };

    template< ::color::constant::lms::reference_enum reference_number >
     struct component< ::color::category::lms_uint32<reference_number> >
      : public ::color::_internal::utility::component::array< std::uint32_t >
      {
      };

    template< ::color::constant::lms::reference_enum reference_number >
     struct component< ::color::category::lms_uint64<reference_number> >
      : public ::color::_internal::utility::component::array< std::uint64_t >
      {
      };

   }
 }

#endif
