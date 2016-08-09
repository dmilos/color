#ifndef color_yuv_trait_component_uint16
#define color_yuv_trait_component_uint16

#include "../../category.hpp"

#include "../../../_internal/utility/component/array.hpp"

#include "../../../generic/trait/component.hpp"



namespace color
 {
  namespace trait
   {

    template< ::color::constant::yuv::reference_enum reference_number >
     struct component< ::color::category::yuv_uint16<reference_number> >
      : public ::color::_internal::utility::component::array< std::uint16_t, unsigned >
      {
      };

   }
 }

#endif
