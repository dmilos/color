#ifndef color_lab_trait_component_int
#define color_lab_trait_component_int

#include "../../category.hpp"

#include "../../../_internal/utility/component/array.hpp"

#include "../../../generic/trait/component.hpp"



namespace color
 {
  namespace trait
   {

    template< ::color::constant::lab::reference_enum reference_number >
     struct component< ::color::category::lab_int8<reference_number>  >
      : public ::color::_internal::utility::component::array< std::int8_t >
      {
      };

    template< ::color::constant::lab::reference_enum reference_number>
     struct component< ::color::category::lab_int16<reference_number> >
      : public ::color::_internal::utility::component::array< std::int16_t >
      {
      };

    template< ::color::constant::lab::reference_enum reference_number >
     struct component< ::color::category::lab_int32<reference_number> >
      : public ::color::_internal::utility::component::array< std::int32_t >
      {
      };

    template< ::color::constant::lab::reference_enum reference_number >
     struct component< ::color::category::lab_int64<reference_number> >
      : public ::color::_internal::utility::component::array< std::int64_t >
      {
      };

   }
 }

#endif
