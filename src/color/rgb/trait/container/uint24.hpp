#ifndef color_rgb_trait_container_uint24
#define color_rgb_trait_container_uint24

#include "../../category.hpp"

#include "../../../_internal/utility/container/array.hpp"

#include "../../../generic/trait/container.hpp"



namespace color
 {
  namespace trait
   {

    template< >
     struct container< ::color::category::rgb_uint24 >
      : public ::color::_internal::utility::container::array< std::uint8_t, 3 >
      {
      };

   }
 }

#endif