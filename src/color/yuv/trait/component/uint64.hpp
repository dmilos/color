#ifndef color_yuv_trait_component_uint64
#define color_yuv_trait_component_uint64

#include "../../category.hpp"

#include "../../../_internal/utility/component/unsigned.hpp"

#include "../../../generic/trait/component.hpp"



namespace color
 {
  namespace trait
   {

    template< >
     struct component< ::color::category::yuv_uint64 >
      : public ::color::_internal::utility::component::Unsigned< std::uint16_t, unsigned>
      {
      };

   }
 }

#endif
