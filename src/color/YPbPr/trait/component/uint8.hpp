#ifndef color_YPbPr_trait_component_uint8
#define color_YPbPr_trait_component_uint8

#include "../../category.hpp"

#include "../../../_internal/utility/component/array.hpp"

#include "../../../generic/trait/component.hpp"



namespace color
 {
  namespace trait
   {

    template< ::color::constant::YPbPr::reference_enum reference_number >
     struct component< ::color::category::YPbPr_uint8<reference_number> >
      : public ::color::_internal::utility::component::array< std::uint8_t, unsigned >
      {
      };

   }
 }

#endif
