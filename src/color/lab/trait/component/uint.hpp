#ifndef color_lab_trait_component_uint
#define color_lab_trait_component_uint

#include "../../category.hpp"

#include "../../../_internal/utility/component/array.hpp"

#include "../../../generic/trait/component.hpp"



namespace color
 {
  namespace trait
   {

    template< ::color::constant::lab::reference_enum reference_number >
     struct component< ::color::category::lab_uint8<reference_number>  >
      : public ::color::_internal::utility::component::array< std::uint8_t >
      {
      };

    template< ::color::constant::lab::reference_enum reference_number>
     struct component< ::color::category::lab_uint16<reference_number> >
      : public ::color::_internal::utility::component::array< std::uint16_t >
      {
      };

    template< ::color::constant::lab::reference_enum reference_number >
     struct component< ::color::category::lab_uint32<reference_number> >
      : public ::color::_internal::utility::component::array< std::uint32_t >
      {
      };

    template< ::color::constant::lab::reference_enum reference_number >
     struct component< ::color::category::lab_uint64<reference_number> >
      : public ::color::_internal::utility::component::array< std::uint64_t >
      {
      };

   }
 }

#endif
