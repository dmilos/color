#ifndef color_yuv_trait_component_uint8
#define color_yuv_trait_component_uint8

#include "../../category.hpp"

#include "../../../_internal/utility/component/array.hpp"

#include "../../../generic/trait/component.hpp"



namespace color
 {
  namespace trait
   {

    template< >
     struct component< ::color::category::yuv_uint8 >
      : public ::color::_internal::utility::component::array< std::uint8_t, unsigned >
      {
      };

   }
 }

#endif
