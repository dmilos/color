#ifndef color_YPbPr_trait_component_uint16
#define color_YPbPr_trait_component_uint16

#include "../../category.hpp"

#include "../../../_internal/utility/component/array.hpp"

#include "../../../generic/trait/component.hpp"



namespace color
 {
  namespace trait
   {

    template< ::color::constant::YPbPr::reference_enum reference_number >
     struct component< ::color::category::YPbPr_uint8<reference_number> >
      : public ::color::_internal::utility::component::array< std::uint8_t >
      {
      };

    template< ::color::constant::YPbPr::reference_enum reference_number >
     struct component< ::color::category::YPbPr_uint16<reference_number> >
      : public ::color::_internal::utility::component::array< std::uint16_t >
      {
      };

    template< ::color::constant::YPbPr::reference_enum reference_number >
     struct component< ::color::category::YPbPr_uint32<reference_number> >
      : public ::color::_internal::utility::component::array< std::uint32_t >
      {
      };

    template< ::color::constant::YPbPr::reference_enum reference_number >
     struct component< ::color::category::YPbPr_uint64<reference_number> >
      : public ::color::_internal::utility::component::array< std::uint64_t >
      {
      };


   }
 }

#endif
